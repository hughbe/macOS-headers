//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OADShadowEffect.h>

__attribute__((visibility("hidden")))
@interface OADOuterShadowEffect : OADShadowEffect
{
    float mXScale;
    float mYScale;
    float mXSkew;
    float mYSkew;
    int mAlignment;
    BOOL mRotateWithShape;
}

- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setRotateWithShape:(BOOL)arg1;
- (BOOL)rotateWithShape;
- (void)setAlignment:(int)arg1;
- (int)alignment;
- (void)setYSkew:(float)arg1;
- (float)ySkew;
- (void)setXSkew:(float)arg1;
- (float)xSkew;
- (void)setYScale:(float)arg1;
- (float)yScale;
- (void)setXScale:(float)arg1;
- (float)xScale;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

