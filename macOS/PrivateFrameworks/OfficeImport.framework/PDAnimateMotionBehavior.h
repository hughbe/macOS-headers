//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/PDAnimateScaleBehavior.h>

@class NSString, OITSUBezierPath;

__attribute__((visibility("hidden")))
@interface PDAnimateMotionBehavior : PDAnimateScaleBehavior
{
    OITSUBezierPath *mPath;
    BOOL mHasAngle;
    double mAngle;
    NSString *mPointsTypes;
    BOOL mHasOriginType;
    int mOriginType;
    BOOL mHasRotationCenter;
    struct CGPoint mRotationCenter;
    BOOL mHasPathEditMode;
    int mPathEditMode;
}

+ (id)NSStringForBezierPath:(id)arg1;
+ (id)bezierPathFromNSString:(id)arg1;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)setPathEditMode:(int)arg1;
- (int)pathEditMode;
- (BOOL)hasPathEditMode;
- (void)setRotationCenter:(struct CGPoint)arg1;
- (struct CGPoint)rotationCenter;
- (BOOL)hasRotationCenter;
- (void)setOriginType:(int)arg1;
- (int)originType;
- (BOOL)hasOriginType;
- (void)setPointsTypes:(id)arg1;
- (id)pointsTypes;
- (void)setAngle:(double)arg1;
- (double)angle;
- (BOOL)hasAngle;
- (void)setPath:(id)arg1;
- (id)path;
- (BOOL)hasPath;

@end

