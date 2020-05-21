//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CCCharBoxContext, NSString;

__attribute__((visibility("hidden")))
@interface CCTextDetector : NSObject
{
    int _getFilter_callCount;
    unsigned long long _requestRevision;
    BOOL _computeZCVectorHighProbability;
    unsigned char _ii;
    unsigned char _profileNormal;
    BOOL _debugMatlab;
    BOOL _debugOut;
    int _midRow;
    unsigned int _minHeight;
    unsigned int _maxHeight;
    unsigned int _startMaxFind;
    unsigned int _stopMaxFind;
    float _mmHeightCard;
    float _mmWidthCard;
    unsigned int _pixelHeightCard;
    unsigned int _pixelWidthCard;
    unsigned int _minBoxWidth;
    unsigned int _maxBoxWidth;
    unsigned int _startNormal;
    unsigned int _stopNormal;
    unsigned int _startSensitized;
    unsigned int _stopSensitized;
    CCCharBoxContext *_charBoxContext;
    NSString *_debugFilename;
}

- (void).cxx_destruct;
@property(copy) NSString *debugFilename; // @synthesize debugFilename=_debugFilename;
@property BOOL debugOut; // @synthesize debugOut=_debugOut;
@property BOOL debugMatlab; // @synthesize debugMatlab=_debugMatlab;
@property unsigned char profileNormal; // @synthesize profileNormal=_profileNormal;
@property unsigned char ii; // @synthesize ii=_ii;
@property unsigned int stopSensitized; // @synthesize stopSensitized=_stopSensitized;
@property unsigned int startSensitized; // @synthesize startSensitized=_startSensitized;
@property unsigned int stopNormal; // @synthesize stopNormal=_stopNormal;
@property unsigned int startNormal; // @synthesize startNormal=_startNormal;
@property unsigned int maxBoxWidth; // @synthesize maxBoxWidth=_maxBoxWidth;
@property unsigned int minBoxWidth; // @synthesize minBoxWidth=_minBoxWidth;
@property unsigned int pixelWidthCard; // @synthesize pixelWidthCard=_pixelWidthCard;
@property unsigned int pixelHeightCard; // @synthesize pixelHeightCard=_pixelHeightCard;
@property float mmWidthCard; // @synthesize mmWidthCard=_mmWidthCard;
@property float mmHeightCard; // @synthesize mmHeightCard=_mmHeightCard;
@property unsigned int stopMaxFind; // @synthesize stopMaxFind=_stopMaxFind;
@property unsigned int startMaxFind; // @synthesize startMaxFind=_startMaxFind;
@property unsigned int maxHeight; // @synthesize maxHeight=_maxHeight;
@property unsigned int minHeight; // @synthesize minHeight=_minHeight;
@property int midRow; // @synthesize midRow=_midRow;
@property BOOL computeZCVectorHighProbability; // @synthesize computeZCVectorHighProbability=_computeZCVectorHighProbability;
@property(retain) CCCharBoxContext *charBoxContext; // @synthesize charBoxContext=_charBoxContext;
- (id)textBoxesForImage:(id)arg1 error:(id *)arg2;
- (id)textBoxesForBuffer:(struct vImage_Buffer)arg1 error:(id *)arg2;
- (int)_generatePulseVectorOutputs:(struct vImage_Buffer)arg1 votingImage:(struct vImage_Buffer)arg2 rowLocationsRef:(unsigned short *)arg3;
- (int)_generateCRCharBoxInformation:(id)arg1 inputImage:(struct vImage_Buffer)arg2 singleVotingImageAddressRef:(char *)arg3 bigBoxes:(struct __CCBigBox *)arg4 bigBoxesAdapt:(struct __CCBigBox *)arg5 textOut:(struct vImage_Buffer)arg6 adaptOut:(struct vImage_Buffer)arg7 lowHighRGB:(struct __rgbMinMaxFloat *)arg8 countBigBox:(unsigned char)arg9 useLowLightEnhancement:(unsigned char)arg10;
- (int)_generateCRCharBoxInformation_extendTextBoxes:(struct __CCBigBox *)arg1 countBigBox:(unsigned char)arg2 rowStartLocation2:(unsigned short)arg3 finalCharBoxCoordCount:(unsigned long long)arg4 finalCoordinatesForStubRevised:(struct __CCBox *)arg5 width:(unsigned long long)arg6 height:(unsigned short)arg7 bigBoxIndicator:(char *)arg8;
- (void)_freeCRCharBoxContext;
- (int)_allocateCRCharBoxContext:(unsigned long long)arg1;
- (void)_generateCRCharBoxInformation_zcFinalVectorFillIn:(struct vImage_Buffer)arg1;
- (void)fillInOneVector:(struct vImage_Buffer)arg1 checkFlag:(unsigned long long)arg2 checkHeight:(BOOL)arg3;
- (int)_generateCRCharBoxInformation_zcFinalVectorHighProbability:(struct vImage_Buffer)arg1 zcFinalRange:(unsigned short)arg2;
- (int)_generateCRCharBoxInformation_zcFinalVectorOriginate:(struct vImage_Buffer)arg1 textOut:(struct vImage_Buffer)arg2 adaptOut:(struct vImage_Buffer)arg3 bigBoxes:(struct __CCBigBox *)arg4 bigBoxesAdapt:(struct __CCBigBox *)arg5 ccCharBoxesAggr:(struct __CCCharBox *)arg6 ccCharBoxesFiltered:(struct __CCCharBox *)arg7 height:(unsigned short)arg8 rowStartLocation2:(unsigned short)arg9 rowStopLocation2:(unsigned short)arg10 singleVotingImageAddressRef:(char *)arg11 countBigBox:(unsigned char)arg12 filterWalkUpDownCount:(unsigned short *)arg13 useLowLightEnhancement:(unsigned char)arg14;
- (int)extractBoxesForStub:(struct __CCBigBox *)arg1 bigBoxesAdapt:(struct __CCBigBox *)arg2 countBigBox:(unsigned char)arg3 rowStartLocation2:(unsigned short)arg4 rowStopLocation2:(unsigned short)arg5 heightConstraint:(unsigned char)arg6 imageWidth:(unsigned short)arg7 height:(unsigned short)arg8 ccCharBoxesAggr:(struct __CCCharBox *)arg9 ccCharBoxesFiltered:(struct __CCCharBox *)arg10 useLowLightEnhancement:(unsigned char)arg11;
- (unsigned short)charBoxesFromTextBoxes:(struct __CCCharBox *)arg1 bigBoxes:(struct __CCBigBox *)arg2 ccYTopLocationsForSort:(unsigned short *)arg3 ccYBottomLocationsForSort:(unsigned short *)arg4;
- (void)extractCharBoxHeightInfo:(struct __CCCharBox *)arg1 ccCharBoxesFiltered:(struct __CCCharBox *)arg2 ccYTopLocationsForSort:(unsigned short *)arg3 ccYBottomLocationsForSort:(unsigned short *)arg4 aggregateGreenBoxesForStubCount:(unsigned short)arg5 imageWidth:(unsigned short)arg6;
- (void)calculateSumProdAlternative:(struct vImage_Buffer)arg1 prodROIRef:(float *)arg2 prodROIRotateRef:(float *)arg3 rowStartLocation2:(unsigned short)arg4 height:(unsigned short)arg5;
- (void)calculateSumProd:(struct vImage_Buffer)arg1 prodROIRef:(float *)arg2 prodROIRotateRef:(float *)arg3 rowStartLocation2:(unsigned short)arg4 height:(unsigned short)arg5;
- (void)_generateZeroCrossingVector:(unsigned long long)arg1 zcVectorFlag:(unsigned long long)arg2 width:(unsigned long long)arg3;
- (void)_generateFilteredPulseVector:(unsigned long long)arg1 target:(unsigned long long)arg2 height:(unsigned long long)arg3;
- (unsigned int)_extractCharBoxCuts:(struct __CCBigBox *)arg1 heightConstraint:(unsigned char)arg2 medianHeightTopVector:(unsigned short *)arg3 medianHeightBottomVector:(unsigned short *)arg4 isAdaptive:(BOOL)arg5;
- (int)_generateCRCharBoxInformation_spaceBoxRemovalMagicThresh:(struct vImage_Buffer)arg1 magicMinHeight:(float)arg2 magicMaxHeight:(float)arg3 rowStartLocation2:(unsigned short)arg4 magicThresh:(float *)arg5 magicThreshPrev:(float *)arg6 useLowLightEnhancement:(unsigned char)arg7;
- (void)_generateCRCharBoxInformation_spaceBoxRemovalHistogram:(struct vImage_Buffer)arg1 zcStartLeft:(unsigned short)arg2 zcStopRight:(unsigned short)arg3 rowStartLocation2:(unsigned short)arg4 lowHighRGB:(struct __rgbMinMaxFloat *)arg5 histCompliancePercent:(float *)arg6 varSpaceBox:(float *)arg7;
- (void)_generateCRCharBoxInformation_spaceBoxRemovalTruthFilter:(float *)arg1 magicThresh:(float *)arg2 zcStartLeft:(unsigned short)arg3 zcStopRight:(unsigned short)arg4 isSpaceBoxAccepted:(char *)arg5 histCompliancePercent:(float *)arg6 useLowLightEnhancement:(unsigned char)arg7;
- (void)_generateCRCharBoxInformation_spaceBoxRemovalTightenBox:(struct vImage_Buffer)arg1 singleVotingImageAddressRef:(char *)arg2 adaptOut:(struct vImage_Buffer)arg3 textOut:(struct vImage_Buffer)arg4 zcStartLeft:(unsigned short)arg5 zcStopRight:(unsigned short)arg6 finalCoordinatesForStub:(struct __CCBox *)arg7 finalCoordinatesForStubRevised:(struct __CCBox *)arg8 finalCharBoxCoordCount:(unsigned long long *)arg9 useLowLightEnhancement:(unsigned char)arg10;
- (struct __CCRange)tightenBox:(struct vImage_Buffer)arg1 startTop:(unsigned short)arg2 startBottom:(unsigned short)arg3 startPosition:(unsigned short)arg4 stopPosition:(unsigned short)arg5 imageHeight:(unsigned long long)arg6 halfWalk:(unsigned short)arg7;
- (int)computePulseVectorSum:(char *)arg1 start:(unsigned short)arg2 stop:(unsigned short)arg3 imageHeight:(unsigned long long)arg4 imageWidth:(unsigned long long)arg5 bottomHeight:(unsigned short)arg6 topHeight:(unsigned short)arg7;
- (int)_generateCRCharBoxInformation_TrackBox:(struct __CCBox *)arg1 finalCharBoxCoordCount:(unsigned long long *)arg2;
- (int)computeDependentTopAndBottomComponents:(struct __CCBox *)arg1 finalCharBoxCoordCount:(unsigned long long *)arg2;
- (void)computeIndependentTopAndBottomComponents:(struct __CCBox *)arg1 finalCharBoxCoordCount:(unsigned long long *)arg2;
- (void)groupEndpoints:(struct __CCBox *)arg1 finalCharBoxCoordCount:(unsigned long long *)arg2;
- (void)_generateCC:(id)arg1 ccBigBoxes:(struct __CCBigBox *)arg2 textOut:(struct vImage_Buffer)arg3 countBigBox:(unsigned char)arg4 bufferHeight:(unsigned short)arg5;
- (int)_generateBoxes:(id)arg1 pulseVector:(unsigned long long)arg2 uImage:(struct vImage_Buffer)arg3 countBigBoxOut:(unsigned long long *)arg4 bigBoxes:(struct __CCBigBox *)arg5 bigBoxesA:(struct __CCBigBox *)arg6 useLowLightEnhancement:(unsigned char)arg7;
- (int)_generateSmoothedImage:(struct vImage_Buffer)arg1 uImage:(struct vImage_Buffer)arg2;
- (int)_generateAdaptiveBinarization:(struct vImage_Buffer)arg1 adaptImage:(struct vImage_Buffer)arg2 useLowLightEnhancement:(unsigned char)arg3;
- (int)_generateAndApplyColorProfileForImage:(struct vImage_Buffer)arg1 votingImage:(struct vImage_Buffer)arg2 textOut:(struct vImage_Buffer)arg3 minMaxRGB:(struct __rgbMinMaxU8 *)arg4 lowHighRGB:(struct __rgbMinMaxFloat *)arg5 numCropRows:(unsigned short)arg6 rowStartLocation:(unsigned short)arg7 rowStopLocation:(unsigned short)arg8 sumTextOutFirstPass:(unsigned int *)arg9 useLowLightEnhancement:(unsigned char)arg10;
- (void)freeColorProfileContext:(struct __CCColorProfileContext *)arg1;
- (int)allocateColorProfileContext:(struct __CCColorProfileContext *)arg1 width:(unsigned short)arg2 height:(unsigned short)arg3 rowBytes:(unsigned long long)arg4;
- (void)determineColorProfileType:(struct __CCColorProfileContext *)arg1;
- (int)computeMainStub:(struct vImage_Buffer)arg1 numCropRows:(unsigned short)arg2 numCropColsOut:(unsigned short *)arg3 maxY:(float)arg4 start:(unsigned short *)arg5;
- (unsigned short)computeNumCropCols:(float *)arg1 width:(unsigned long long)arg2 start:(unsigned short *)arg3;
- (void)getLumaHistogram:(struct vImage_Buffer)arg1 startCC:(unsigned short)arg2 colorProfileContext:(struct __CCColorProfileContext *)arg3;
- (void)getVotingHistogram:(struct vImage_Buffer)arg1 colorProfileContext:(struct __CCColorProfileContext *)arg2 startCC:(unsigned short)arg3 rowStartLocation:(unsigned short)arg4;
- (float)createLumaImageAlternative:(struct vImage_Buffer)arg1 lumaImageAlternative:(struct vImage_Buffer)arg2 numCropRows:(unsigned short)arg3 rowStartLocation:(unsigned short)arg4;
- (float)createLumaImage:(struct vImage_Buffer)arg1 lumaImage:(struct vImage_Buffer)arg2 numCropRows:(unsigned short)arg3 rowStartLocation:(unsigned short)arg4;
- (unsigned int)_generateBinarizationForImage:(struct vImage_Buffer)arg1 textOut:(struct vImage_Buffer)arg2 firstOrSecondPassIndicator:(unsigned char)arg3 minMaxRGB:(struct __rgbMinMaxFloat *)arg4;
- (int)generateHistogramBounds:(struct __rgbaColor *)arg1 rgbVector2Ref:(struct __rgbaColor *)arg2 numPixels1:(unsigned int)arg3 numPixels2:(unsigned int)arg4 minMaxRGB:(struct __rgbMinMaxU8 *)arg5 lowHighRGB:(struct __rgbMinMaxFloat *)arg6;
- (void)generateDominantPulse:(unsigned long long)arg1 rowLocationsRef:(unsigned short *)arg2 debugOut:(unsigned char)arg3 bufferHeight:(unsigned short)arg4 bufferWidth:(unsigned short)arg5;
- (void)_generatePulseAggregateSmallStubs:(unsigned long long)arg1 pulseVectorResult:(unsigned long long)arg2 bufferHeight:(unsigned short)arg3 bufferWidth:(unsigned short)arg4;
- (void)_generatePulseAggregate:(unsigned long long)arg1 pulseVectorMain:(unsigned long long)arg2 pulseVectorResult:(unsigned long long)arg3 metricSelection:(unsigned char)arg4 bufferHeight:(unsigned short)arg5 bufferWidth:(unsigned short)arg6;
- (int)_getFilterResultOut:(float *)arg1 defaultRows:(unsigned short)arg2 bufferHeight:(unsigned short)arg3 minHeight:(unsigned char)arg4 maxHeight:(unsigned char)arg5 startRange:(unsigned short)arg6 stopRange:(unsigned short)arg7 startMaxFind:(unsigned int)arg8 stopMaxFind:(unsigned int)arg9 bytesPerRow:(unsigned short)arg10 thresholdSet:(struct ThresholdSet_t)arg11 sampleImageAddressRef:(char *)arg12 sampleImageFloatAddressRef:(float *)arg13 pulseVectorFlag:(unsigned long long)arg14;
- (int)_getFilterResultOutBothSumDeriv:(unsigned char)arg1 floatVectorResult:(float *)arg2 bufferHeight:(unsigned short)arg3 minHeight:(unsigned char)arg4 maxHeight:(unsigned char)arg5 config:(struct __CCFilterSumDerivConfig *)arg6 bytesPerRow:(unsigned short)arg7 thresholdSet:(struct ThresholdSet_t)arg8 sampleImageAddressRef:(char *)arg9;
- (void)_computeProdBoostNormalizedResult:(struct __CCSumDerivVectors *)arg1 size:(int)arg2 binOverride:(unsigned char)arg3;
- (void)_freeSumDerivVectors:(struct __CCSumDerivVectors *)arg1;
- (int)_allocateSumDerivVectors:(struct __CCSumDerivVectors *)arg1 size:(int)arg2;
- (void)_computeColumnSumsOverRange:(struct __CCRange *)arg1 sampleImageAddress:(char *)arg2 rowSumOut:(int *)arg3 rowDerivOut:(int *)arg4;
- (int)generatePulses:(unsigned short)arg1 minHeight:(unsigned char)arg2 maxHeight:(unsigned char)arg3 thresholdSet:(struct ThresholdSet_t)arg4 prodBoostNormalized:(float *)arg5 pulseVectorFlag:(unsigned long long)arg6;
- (void)examinePulseWindow:(unsigned short)arg1 prodBoostNormalized:(float *)arg2 pwContext:(struct __CCPulseWindowContext *)arg3 minHeight:(unsigned char)arg4 maxHeight:(unsigned char)arg5 thresholdSet:(struct ThresholdSet_t)arg6;
- (int)_generateVotingImage:(struct vImage_Buffer)arg1 votingImage:(struct vImage_Buffer)arg2 useLowLightEnhancement:(char *)arg3;
- (void)_freeVImage:(struct vImage_Buffer *)arg1;
- (int)_allocateVImageWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 rowBytes:(unsigned long long)arg3 imageOut:(struct vImage_Buffer *)arg4;
- (void)initializeForImage:(struct vImage_Buffer)arg1;
- (void)dealloc;
- (id)initWithOptions:(id)arg1;

@end

