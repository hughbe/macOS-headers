//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class NSArray;

@interface PXGDebugHUDLayer : CALayer
{
    NSArray *_graphLayers;
    struct CGColor *_green;
    struct CGColor *_yellow;
    struct CGColor *_red;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGColor *red; // @synthesize red=_red;
@property(nonatomic) struct CGColor *yellow; // @synthesize yellow=_yellow;
@property(nonatomic) struct CGColor *green; // @synthesize green=_green;
@property(copy, nonatomic) NSArray *graphLayers; // @synthesize graphLayers=_graphLayers;
- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1;
- (void)updateLayerAtIndex:(long long)arg1 time:(double)arg2 redZone:(double)arg3 yellowZone:(double)arg4;
- (void)updateDebugHUDWithStats:(CDStruct_58b866b9 *)arg1;
- (id)init;

@end

