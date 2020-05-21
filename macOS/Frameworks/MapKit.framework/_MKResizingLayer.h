//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface _MKResizingLayer : CALayer
{
    NSMutableArray *_sizedLayers;
    BOOL _needsLayoutOnBoundsChange;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL needsLayoutOnBoundsChange; // @synthesize needsLayoutOnBoundsChange=_needsLayoutOnBoundsChange;
- (void)setContentsScale:(double)arg1;
- (void)setMask:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)sizeSublayerToBounds:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *sizeToBoundsLayers;

@end

