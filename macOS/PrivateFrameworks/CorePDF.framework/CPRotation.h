//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CorePDF/CPZone.h>

__attribute__((visibility("hidden")))
@interface CPRotation : CPZone
{
    double rotationAngle;
}

- (struct CGRect)renderedBounds;
- (struct CGRect)bounds;
- (double)rotationAngle;
- (void)setRotationAngle:(double)arg1;
- (void)accept:(id)arg1;
- (id)init;

@end

