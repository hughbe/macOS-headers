//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CorePDF/CPRegion.h>

__attribute__((visibility("hidden")))
@interface CPTextBox : CPRegion
{
    double rotationAngle;
}

- (id)description;
- (struct CGRect)bounds;
- (BOOL)isRotated;
- (double)rotationAngle;
- (void)setRotationAngle:(double)arg1;
- (void)accept:(id)arg1;
- (BOOL)isBoxRegion;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

