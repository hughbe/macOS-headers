//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFeature.h>

@interface CIRectangleFeature : CIFeature
{
    struct CGRect bounds;
    struct CGPoint topLeft;
    struct CGPoint topRight;
    struct CGPoint bottomLeft;
    struct CGPoint bottomRight;
}

@property(readonly) struct CGPoint bottomRight; // @synthesize bottomRight;
@property(readonly) struct CGPoint bottomLeft; // @synthesize bottomLeft;
@property(readonly) struct CGPoint topRight; // @synthesize topRight;
@property(readonly) struct CGPoint topLeft; // @synthesize topLeft;
@property(readonly) struct CGRect bounds; // @synthesize bounds;
- (id)initWithBounds:(struct CGRect)arg1 topLeft:(struct CGPoint)arg2 topRight:(struct CGPoint)arg3 bottomLeft:(struct CGPoint)arg4 bottomRight:(struct CGPoint)arg5;
- (id)type;

@end

