//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/NSCopying-Protocol.h>

@class OADBevel, OADColor;

__attribute__((visibility("hidden")))
@interface OADShape3D : NSObject <NSCopying>
{
    OADBevel *mTopBevel;
    OADBevel *mBottomBevel;
    OADColor *mExtrusionColor;
    float mExtrusionHeight;
    OADColor *mContourColor;
    float mContourWidth;
    float mShapeDepth;
    int mMaterial;
}

+ (id)nullShape3D;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setMaterial:(int)arg1;
- (int)material;
- (void)setShapeDepth:(float)arg1;
- (float)shapeDepth;
- (void)setContourWidth:(float)arg1;
- (float)contourWidth;
- (void)setContourColor:(id)arg1;
- (id)contourColor;
- (void)setExtrusionHeight:(float)arg1;
- (float)extrusionHeight;
- (void)setExtrusionColor:(id)arg1;
- (id)extrusionColor;
- (void)setBottomBevel:(id)arg1;
- (id)bottomBevel;
- (void)setTopBevel:(id)arg1;
- (id)topBevel;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

