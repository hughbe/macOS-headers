//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EDResources, EDString, OADGraphicProperties;

__attribute__((visibility("hidden")))
@interface CHDDataLabel : NSObject
{
    EDResources *mResources;
    EDString *mString;
    unsigned long long mContentFormatId;
    int mPosition;
    _Bool mShowLeaderLines;
    _Bool mShowCategoryName;
    _Bool mShowSeriesName;
    _Bool mShowPercent;
    _Bool mShowBubbleSize;
    _Bool mShowValue;
    _Bool mShowLegendKey;
    _Bool mIsPositionAffineTransform;
    _Bool mContentFormatDerived;
    _Bool mDeleted;
    _Bool mExtensionDetected;
    double mRotation;
    OADGraphicProperties *mGraphicProperties;
    OADGraphicProperties *mLeaderlineGraphicProperties;
}

+ (id)dataLabelWithResources:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) EDString *string; // @synthesize string=mString;
- (void)setRotationAngle:(double)arg1;
- (double)rotationAngle;
- (_Bool)isPositionAffineTransform;
- (void)setIsPositionAffineTransform:(_Bool)arg1;
- (void)setLeaderlineGraphicProperties:(id)arg1;
- (id)leaderlineGraphicProperties;
- (void)setGraphicProperties:(id)arg1;
- (id)graphicProperties;
- (_Bool)isCustomLabelBlockingVisibility;
- (void)setExtensionDetected:(_Bool)arg1;
- (_Bool)isLabelVisible;
- (_Bool)isExtensionDetected;
- (void)setDeleted:(_Bool)arg1;
- (_Bool)isDeleted;
- (void)setShowLegendKey:(_Bool)arg1;
- (_Bool)isShowLegendKey;
- (void)setShowValue:(_Bool)arg1;
- (_Bool)isShowValue;
- (void)setShowBubbleSize:(_Bool)arg1;
- (_Bool)isShowBubbleSize;
- (void)setShowPercent:(_Bool)arg1;
- (_Bool)isShowPercent;
- (void)setShowSeriesName:(_Bool)arg1;
- (_Bool)isShowSeriesName;
- (void)setShowCategoryName:(_Bool)arg1;
- (_Bool)isShowCategoryName;
- (void)setShowLeaderLines:(_Bool)arg1;
- (_Bool)hasLeaderLinesGraphics;
- (_Bool)isShowLeaderLines;
- (void)setPosition:(int)arg1;
- (int)position;
- (void)setIsContentFormatDerivedFromDataPoints:(_Bool)arg1;
- (_Bool)isContentFormatDerivedFromDataPoints;
- (void)setContentFormat:(id)arg1;
- (id)contentFormat;
- (id)initWithResources:(id)arg1;
- (id)description;
- (void)setContentFormatId:(unsigned long long)arg1;
- (unsigned long long)contentFormatId;

@end

