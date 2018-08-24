//##########################################################################
//#                                                                        #
//#                              CLOUDCOMPARE                              #
//#                                                                        #
//#  This program is free software; you can redistribute it and/or modify  #
//#  it under the terms of the GNU General Public License as published by  #
//#  the Free Software Foundation; version 2 or later of the License.      #
//#                                                                        #
//#  This program is distributed in the hope that it will be useful,       #
//#  but WITHOUT ANY WARRANTY; without even the implied warranty of        #
//#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the          #
//#  GNU General Public License for more details.                          #
//#                                                                        #
//#          COPYRIGHT: EDF R&D / TELECOM ParisTech (ENST-TSI)             #
//#                                                                        #
//##########################################################################

#ifndef CC_INTERACTOR_HEADER
#define CC_INTERACTOR_HEADER

//Local
#include "qCC_db.h"

//Qt
#include <QString>

//! Interactor interface (entity that can be dragged or clicked in a 3D view)
class QCC_DB_LIB_API ccInteractor
{
public:

	//! Called on mouse click
    virtual bool acceptClick(int , int , Qt::MouseButton ) { return false; }

	//! Called on mouse move (for 2D interactors)
	/** \return true if a movement occurs
	**/
    virtual bool move2D(int , int , int , int , int , int ) { return false; }

	//! Called on mouse move (for 3D interactors)
	/** \return true if a movement occurs
	**/
    virtual bool move3D(const CCVector3d& ) { return false; }

};

#endif //CC_INTERACTOR_HEADER
