#-------------------------------------------------
#
# Project created by QtCreator 2017-08-16T10:50:57
#
#-------------------------------------------------

QT       += core gui

QT       +=opengl
QT       +=opengl openglextensions
QT       +=printsupport
QT       +=concurrent

#QMAKE_CXXFLAGS += C:\Python27\libs\python27.lib
QMAKE_CXXFLAGS_WARN_ON = -Wall -Wno-unused-function
QMAKE_CXXFLAGS_WARN_ON = -Wall -Wno-unused-parameter
QMAKE_CXXFLAGS_WARN_ON = -Wall -Wno-sign-compare

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = untitled
TEMPLATE = app
INCLUDEPATH += C:\opencv-build\install\include
INCLUDEPATH += C:\Python27\include\ C:\Python27\libs\


LIBS += C:\Python27\libs\python27.lib
LIBS += C:\opencv-build\bin\libopencv_core320.dll
LIBS += C:\opencv-build\bin\libopencv_highgui320.dll
LIBS += C:\opencv-build\bin\libopencv_imgcodecs320.dll
LIBS += C:\opencv-build\bin\libopencv_imgproc320.dll
LIBS += C:\opencv-build\bin\libopencv_features2d320.dll
LIBS += C:\opencv-build\bin\libopencv_calib3d320.dll

SOURCES += main.cpp\
        mainwindow.cpp\
    AsciiFilter.cpp \
    AsciiOpenDlg.cpp \
    AsciiSaveDlg.cpp \
    AutoSegmentationTools.cpp \
    BinFilter.cpp \
    BundlerFilter.cpp \
    BundlerImportDlg.cpp \
    cc2.5DimEditor.cpp \
    cc2DLabel.cpp \
    cc2DViewportLabel.cpp \
    cc2DViewportObject.cpp \
    ccAboutDialog.cpp \
    ccAdjustZoomDlg.cpp \
    ccAdvancedTypes.cpp \
    ccAlignDlg.cpp \
    ccApplyTransformationDlg.cpp \
    ccAskThreeDoubleValuesDlg.cpp \
    ccAskTwoDoubleValuesDlg.cpp \
    ccBBox.cpp \
    ccBoundingBoxEditorDlg.cpp \
    ccBox.cpp \
    ccCameraParamEditDlg.cpp \
    ccCameraSensor.cpp \
    ccCamSensorProjectionDlg.cpp \
    ccClipBox.cpp \
    ccClippingBoxRepeatDlg.cpp \
    ccClippingBoxTool.cpp \
    ccColorGradientDlg.cpp \
    ccColorLevelsDlg.cpp \
    ccColorRampShader.cpp \
    ccColorScale.cpp \
    ccColorScaleEditorDlg.cpp \
    ccColorScaleEditorWidget.cpp \
    ccColorScaleSelector.cpp \
    ccColorScalesManager.cpp \
    ccColorTypes.cpp \
    ccCommandLineParser.cpp \
    ccCommon.cpp \
    ccComparisonDlg.cpp \
    ccComputeOctreeDlg.cpp \
    ccCone.cpp \
    ccConsole.cpp \
    ccContourExtractor.cpp \
    ccContourExtractorDlg.cpp \
    ccCropTool.cpp \
    ccCurvatureDlg.cpp \
    ccCylinder.cpp \
    ccDBRoot.cpp \
    ccDensityDlg.cpp \
    ccDish.cpp \
    ccDisplayOptionsDlg.cpp \
    ccDrawableObject.cpp \
    ccEntityAction.cpp \
    ccExportCoordToSFDlg.cpp \
    ccExternalFactory.cpp \
    ccExtru.cpp \
    ccFacet.cpp \
    ccFastMarchingForNormsDirection.cpp \
    ccFilterByValueDlg.cpp \
    ccGBLSensor.cpp \
    ccGBLSensorProjectionDlg.cpp \
    ccGenericGLDisplay.cpp \
    ccGenericMesh.cpp \
    ccGenericPointCloud.cpp \
    ccGenericPrimitive.cpp \
    ccGlobalShiftManager.cpp \
    ccGLUtils.cpp \
    ccGLWindow.cpp \
    ccGraphicalSegmentationTool.cpp \
    ccGraphicalTransformationTool.cpp \
    ccGriddedTools.cpp \
    ccGuiParameters.cpp \
    ccHistogramWindow.cpp \
    ccHObject.cpp \
    ccHObjectCaster.cpp \
    ccImage.cpp \
    ccIndexedTransformation.cpp \
    ccIndexedTransformationBuffer.cpp \
    ccInnerRect2DFinder.cpp \
    ccInterpolationDlg.cpp \
    ccItemSelectionDlg.cpp \
    ccKdTree.cpp \
    ccLabelingDlg.cpp \
    ccLibAlgorithms.cpp \
    ccLog.cpp \
    ccMatchScalesDlg.cpp \
    ccMaterial.cpp \
    ccMaterialSet.cpp \
    ccMesh.cpp \
    ccMeshGroup.cpp \
    ccMinimumSpanningTreeForNormsDirection.cpp \
    CCMiscTools.cpp \
    ccNoiseFilterDlg.cpp \
    ccNormalCompressor.cpp \
    ccNormalComputationDlg.cpp \
    ccNormalVectors.cpp \
    ccObject.cpp \
    ccOctree.cpp \
    ccOctreeProxy.cpp \
    ccOctreeSpinBox.cpp \
    ccOrderChoiceDlg.cpp \
    ccOrthoSectionGenerationDlg.cpp \
    ccOverlayDialog.cpp \
    ccPickingHub.cpp \
    ccPickOneElementDlg.cpp \
    ccPlanarEntityInterface.cpp \
    ccPlane.cpp \
    ccPlaneEditDlg.cpp \
    ccPluginDlg.cpp \
    ccPointCloud.cpp \
    ccPointCloudInterpolator.cpp \
    ccPointCloudLOD.cpp \
    ccPointListPickingDlg.cpp \
    ccPointPairRegistrationDlg.cpp \
    ccPointPickingGenericInterface.cpp \
    ccPointPropertiesDlg.cpp \
    ccPolyline.cpp \
    ccPrimitiveFactoryDlg.cpp \
    ccProgressDialog.cpp \
    ccPropertiesTreeDelegate.cpp \
    ccPtsSamplingDlg.cpp \
    ccQuadric.cpp \
    ccRasterGrid.cpp \
    ccRasterizeTool.cpp \
    ccRecentFiles.cpp \
    ccRegistrationDlg.cpp \
    ccRegistrationTools.cpp \
    ccRenderingTools.cpp \
    ccRenderToFileDlg.cpp \
    ccScalarField.cpp \
    ccScalarFieldArithmeticsDlg.cpp \
    ccScalarFieldFromColorDlg.cpp \
    ccScaleDlg.cpp \
    ccSectionExtractionSubDlg.cpp \
    ccSectionExtractionTool.cpp \
    ccSelectChildrenDlg.cpp \
    ccSensor.cpp \
    ccSensorComputeDistancesDlg.cpp \
    ccSensorComputeScatteringAnglesDlg.cpp \
    CCShareable.cpp \
    ccShiftAndScaleCloudDlg.cpp \
    ccShiftedObject.cpp \
    ccSORFilterDlg.cpp \
    ccSphere.cpp \
    ccStatisticalTestDlg.cpp \
    ccStereoModeDlg.cpp \
    ccSubMesh.cpp \
    ccSubsamplingDlg.cpp \
    ccTorus.cpp \
    ccTracePolylineTool.cpp \
    ccUnrollDlg.cpp \
    ccUtils.cpp \
    ccviewer.cpp \
    ccVolumeCalcTool.cpp \
    ccWaveform.cpp \
    ccWaveformDialog.cpp \
    ChamferDistanceTransform.cpp \
    ChunkedPointCloud.cpp \
    CloudSamplingTools.cpp \
    Delaunay2dMesh.cpp \
    DepthMapFileFilter.cpp \
    DgmOctree.cpp \
    DgmOctreeReferenceCloud.cpp \
    DistanceComputationTools.cpp \
    dl_dxf.cpp \
    dl_writer_ascii.cpp \
    DxfFilter.cpp \
    E57Filter.cpp \
    ErrorFunction.cpp \
    FastMarching.cpp \
    FastMarchingForPropagation.cpp \
    FBXFilter.cpp \
    FileIOFilter.cpp \
    GeometricalAnalysisTools.cpp \
    HeightProfileFilter.cpp \
    IcmFilter.cpp \
    ImageFileFilter.cpp \
    KdTree.cpp \
    LASFields.cpp \
    LASFilter.cpp \
    LASOpenDlg.cpp \
    LocalModel.cpp \
    MAFilter.cpp \
    ManualSegmentationTools.cpp \
    MascaretFilter.cpp \
    matrixDisplayDlg.cpp \
    MeshSamplingTools.cpp \
    Neighbourhood.cpp \
    NormalDistribution.cpp \
    NormalizedProgress.cpp \
    ObjFilter.cpp \
    OFFFilter.cpp \
    PlyFilter.cpp \
    PlyOpenDlg.cpp \
    PNFilter.cpp \
    PointProjectionTools.cpp \
    Polyline.cpp \
    PovFilter.cpp \
    PTXFilter.cpp \
    PVFilter.cpp \
    qcustomplot.cpp \
    RasterGridFilter.cpp \
    ReferenceCloud.cpp \
    RegistrationTools.cpp \
    SaitoSquaredDistanceTransform.cpp \
    SalomeHydroFilter.cpp \
    ScalarField.cpp \
    ScalarFieldTools.cpp \
    sfEditDlg.cpp \
    ShpDBFFields.cpp \
    ShpFilter.cpp \
    SimpleCloud.cpp \
    SimpleMesh.cpp \
    SinusxFilter.cpp \
    SoiFilter.cpp \
    StatisticalTestingTools.cpp \
    STLFilter.cpp \
    TrueKdTree.cpp \
    VTKFilter.cpp \
    WeibullDistribution.cpp \
    dbfopen.c \
    rply.c \
    safileio.c \
    shpopen.c \
    shptree.c \
    ccBilateralFilter.cpp \
    ccFrameBufferObject.cpp \
    ccShader.cpp \
    savethread.cpp

HEADERS  += mainwindow.h \
    AsciiFilter.h \
    AsciiOpenDlg.h \
    AsciiSaveDlg.h \
    AutoSegmentationTools.h \
    BinFilter.h \
    BundlerFilter.h \
    BundlerImportDlg.h \
    cc2.5DimEditor.h \
    cc2DLabel.h \
    cc2DViewportLabel.h \
    cc2DViewportObject.h \
    ccAboutDialog.h \
    ccAdjustZoomDlg.h \
    ccAdvancedTypes.h \
    ccAlignDlg.h \
    ccApplyTransformationDlg.h \
    ccAskThreeDoubleValuesDlg.h \
    ccAskTwoDoubleValuesDlg.h \
    ccBasicTypes.h \
    ccBBox.h \
    ccBoundingBoxEditorDlg.h \
    ccBox.h \
    ccCameraParamEditDlg.h \
    ccCameraSensor.h \
    ccCamSensorProjectionDlg.h \
    ccChunkedArray.h \
    ccClipBox.h \
    ccClippingBoxRepeatDlg.h \
    ccClippingBoxTool.h \
    ccColorGradientDlg.h \
    ccColorLevelsDlg.h \
    ccColorRampShader.h \
    ccColorScale.h \
    ccColorScaleEditorDlg.h \
    ccColorScaleEditorWidget.h \
    ccColorScaleSelector.h \
    ccColorScalesManager.h \
    ccColorTypes.h \
    ccCommandCrossSection.h \
    ccCommandLineCommands.h \
    ccCommandLineParser.h \
    ccCommandRaster.h \
    ccCommon.h \
    ccComparisonDlg.h \
    ccComputeOctreeDlg.h \
    ccCone.h \
    ccConsole.h \
    CCConst.h \
    ccContourExtractor.h \
    ccContourExtractorDlg.h \
    CCCoreLib.h \
    ccCropTool.h \
    ccCurvatureDlg.h \
    ccCustomDoubleValidator.h \
    ccCustomObject.h \
    ccCylinder.h \
    ccDBRoot.h \
    ccDensityDlg.h \
    ccDish.h \
    ccDisplayOptionsDlg.h \
    ccDrawableObject.h \
    ccEntityAction.h \
    ccExportCoordToSFDlg.h \
    ccExternalFactory.h \
    ccExtru.h \
    ccFacet.h \
    ccFastMarchingForNormsDirection.h \
    ccFileUtils.h \
    ccFilterByValueDlg.h \
    ccFlags.h \
    ccFrustum.h \
    ccGBLSensor.h \
    ccGBLSensorProjectionDlg.h \
    ccGenericGLDisplay.h \
    ccGenericMesh.h \
    ccGenericPointCloud.h \
    ccGenericPrimitive.h \
    CCGeom.h \
    ccGLDrawContext.h \
    ccGLMatrix.h \
    ccGLMatrixTpl.h \
    ccGlobalShiftManager.h \
    ccGLUtils.h \
    ccGLWidget.h \
    ccGLWindow.h \
    ccGraphicalSegmentationTool.h \
    ccGraphicalTransformationTool.h \
    ccGriddedTools.h \
    ccGuiParameters.h \
    ccHistogramWindow.h \
    ccHObject.h \
    ccHObjectCaster.h \
    ccImage.h \
    ccIncludeGL.h \
    ccIndexedTransformation.h \
    ccIndexedTransformationBuffer.h \
    ccInnerRect2DFinder.h \
    ccInteractor.h \
    ccInterpolationDlg.h \
    ccIsolines.h \
    ccItemSelectionDlg.h \
    ccKdTree.h \
    ccLabelingDlg.h \
    ccLibAlgorithms.h \
    ccLog.h \
    ccMatchScalesDlg.h \
    ccMaterial.h \
    ccMaterialSet.h \
    ccMesh.h \
    ccMeshGroup.h \
    ccMinimumSpanningTreeForNormsDirection.h \
    CCMiscTools.h \
    ccNoiseFilterDlg.h \
    ccNormalCompressor.h \
    ccNormalComputationDlg.h \
    ccNormalVectors.h \
    ccObject.h \
    ccOctree.h \
    ccOctreeProxy.h \
    ccOctreeSpinBox.h \
    ccOrderChoiceDlg.h \
    ccOrthoSectionGenerationDlg.h \
    ccOverlayDialog.h \
    ccPersistentSettings.h \
    ccPickingHub.h \
    ccPickingListener.h \
    ccPickOneElementDlg.h \
    ccPlanarEntityInterface.h \
    ccPlane.h \
    ccPlaneEditDlg.h \
    CCPlatform.h \
    ccPluginDlg.h \
    ccPointCloud.h \
    ccPointCloudInterpolator.h \
    ccPointCloudLOD.h \
    ccPointListPickingDlg.h \
    ccPointPairRegistrationDlg.h \
    ccPointPickingGenericInterface.h \
    ccPointPropertiesDlg.h \
    ccPolyline.h \
    ccPrimitiveFactoryDlg.h \
    ccProgressDialog.h \
    ccPropertiesTreeDelegate.h \
    ccPtsSamplingDlg.h \
    ccQCustomPlot.h \
    ccQtHelpers.h \
    ccQuadric.h \
    ccRasterGrid.h \
    ccRasterizeTool.h \
    ccRecentFiles.h \
    ccRegistrationDlg.h \
    ccRegistrationTools.h \
    ccRenderingTools.h \
    ccRenderToFileDlg.h \
    ccScalarField.h \
    ccScalarFieldArithmeticsDlg.h \
    ccScalarFieldFromColorDlg.h \
    ccScaleDlg.h \
    ccSectionExtractionSubDlg.h \
    ccSectionExtractionTool.h \
    ccSelectChildrenDlg.h \
    ccSensor.h \
    ccSensorComputeDistancesDlg.h \
    ccSensorComputeScatteringAnglesDlg.h \
    ccSerializableObject.h \
    CCShareable.h \
    ccShiftAndScaleCloudDlg.h \
    ccShiftedObject.h \
    ccSingleton.h \
    ccSORFilterDlg.h \
    ccSphere.h \
    ccStatisticalTestDlg.h \
    ccStereoModeDlg.h \
    ccSubMesh.h \
    ccSubsamplingDlg.h \
    CCToolbox.h \
    ccTorus.h \
    ccTracePolylineTool.h \
    CCTypes.h \
    ccUnrollDlg.h \
    ccUtils.h \
    ccviewer.h \
    ccviewerlog.h \
    ccVolumeCalcTool.h \
    ccWaveform.h \
    ccWaveformDialog.h \
    ChamferDistanceTransform.h \
    Chi2Helper.h \
    ChunkedPointCloud.h \
    CloudSamplingTools.h \
    ConjugateGradient.h \
    Delaunay2dMesh.h \
    DepthMapFileFilter.h \
    DgmOctree.h \
    DgmOctreeReferenceCloud.h \
    DistanceComputationTools.h \
    dl_attributes.h \
    dl_codes.h \
    dl_creationadapter.h \
    dl_creationinterface.h \
    dl_dxf.h \
    dl_entities.h \
    dl_exception.h \
    dl_extrusion.h \
    dl_global.h \
    dl_writer.h \
    dl_writer_ascii.h \
    DxfFilter.h \
    E57Filter.h \
    E57Header.h \
    ErrorFunction.h \
    FastMarching.h \
    FastMarchingForPropagation.h \
    FBXFilter.h \
    FileIOFilter.h \
    Garbage.h \
    GenericChunkedArray.h \
    GenericCloud.h \
    GenericDistribution.h \
    GenericIndexedCloud.h \
    GenericIndexedCloudPersist.h \
    GenericIndexedMesh.h \
    GenericMesh.h \
    GenericOctree.h \
    GenericProgressCallback.h \
    GenericTriangle.h \
    GeometricalAnalysisTools.h \
    Grid3D.h \
    HeightProfileFilter.h \
    IcmFilter.h \
    ImageFileFilter.h \
    Jacobi.h \
    KdTree.h \
    LASFields.h \
    LASFilter.h \
    LASOpenDlg.h \
    LocalModel.h \
    MAFilter.h \
    ManualSegmentationTools.h \
    MascaretFilter.h \
    MathTools.h \
    matrixDisplayDlg.h \
    MeshSamplingTools.h \
    Neighbourhood.h \
    NormalDistribution.h \
    ObjFilter.h \
    OFFFilter.h \
    PlyFilter.h \
    PlyOpenDlg.h \
    PNFilter.h \
    PointProjectionTools.h \
    Polyline.h \
    PovFilter.h \
    PTXFilter.h \
    PVFilter.h \
    qCC_db.h \
    qCC_io.h \
    qcustomplot.h \
    RasterGridFilter.h \
    RayAndBox.h \
    ReferenceCloud.h \
    RegistrationTools.h \
    rply.h \
    SaitoSquaredDistanceTransform.h \
    SalomeHydroFilter.h \
    ScalarField.h \
    ScalarFieldTools.h \
    sfEditDlg.h \
    shapefil.h \
    ShpDBFFields.h \
    ShpFilter.h \
    SimpleCloud.h \
    SimpleMesh.h \
    SimpleTriangle.h \
    SinusxFilter.h \
    SoiFilter.h \
    SortAlgo.h \
    SquareMatrix.h \
    StatisticalTestingTools.h \
    STLFilter.h \
    TrueKdTree.h \
    VTKFilter.h \
    WeibullDistribution.h \
    ccShader.h

FORMS    += mainwindow.ui \
    aboutDlg.ui \
    adjustZoomDlg.ui \
    alignDlg.ui \
    applyTransformationDlg.ui \
    askOneDoubleValueDlg.ui \
    askOneIntValueDlg.ui \
    askOneStringDlg.ui \
    askThreeDoubleValuesDlg.ui \
    askTwoDoubleValuesDlg.ui \
    boundingBoxEditorDlg.ui \
    cameraParamDlg.ui \
    camSensorProjectDlg.ui \
    clippingBoxDlg.ui \
    clippingBoxRepeatDlg.ui \
    colorGradientDlg.ui \
    colorLevelsDlg.ui \
    colorScaleEditorDlg.ui \
    commandLineDlg.ui \
    comparisonDlg.ui \
    computeOctreeDlg.ui \
    contourExtractorDlg.ui \
    curvatureDlg.ui \
    densityDlg.ui \
    dipDirTransformationDlg.ui \
    displayOptionsDlg.ui \
    distanceMapDlg.ui \
    exportCoordToSFDlg.ui \
    filterByValueDlg.ui \
    gblSensorProjectDlg.ui \
    globalShiftSettingsDlg.ui \
    graphicalSegmentationDlg.ui \
    graphicalTransformationDlg.ui \
    heightGridGenerationDlg.ui \
    histogramDlg.ui \
    interpolationDlg.ui \
    itemSelectionDlg.ui \
    labelingDlg.ui \
    matchScalesDlg.ui \
    matrixDisplayDlg.ui \
    noiseFilterDlg.ui \
    normalComputationDlg.ui \
    orthoSectionGenerationDlg.ui \
    pickOneElementDlg.ui \
    planeEditDlg.ui \
    pointListPickingDlg.ui \
    pointPairRegistrationDlg.ui \
    pointPropertiesDlg.ui \
    primitiveFactoryDlg.ui \
    ptsSamplingDlg.ui \
    rasterExportOptionsDlg.ui \
    rasterizeDlg.ui \
    registrationDlg.ui \
    renderToFileDialog.ui \
    roleChoiceDlg.ui \
    scalarFieldFromColorDlg.ui \
    scaleDlg.ui \
    sectionExtractionDlg.ui \
    sectionExtractionSubDlg.ui \
    selectChildrenDlg.ui \
    sensorComputeDistancesDlg.ui \
    sensorComputeScatteringAnglesDlg.ui \
    sfArithmeticsDlg.ui \
    sfEditDlg.ui \
    sorFilterDlg.ui \
    statisticalTestDlg.ui \
    stereoModeDlg.ui \
    subsamplingDlg.ui \
    tracePolylineDlg.ui \
    unrollDlg.ui \
    volumeCalcDlg.ui \
    waveDlg.ui \
    openAsciiFileDlg.ui \
    openBundlerFileDlg.ui \
    openLASFileDlg.ui \
    openPlyFileDlg.ui \
    saveAsciiFileDlg.ui \
    saveLASFileDlg.ui \
    saveMascaretFileDlg.ui \
    saveSHPFileDlg.ui \
    globalShiftAndScaleAboutDlg.ui \
    globalShiftAndScaleDlg.ui \
    ccviewer.ui \
    ccviewerAbout.ui



RESOURCES += \
    icones.qrc

TRANSLATIONS += ENGLISH.ts \
                HINDI.ts \
                FRENCH.ts





