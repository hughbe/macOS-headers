//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

#import <AVKit/CALayerDelegate-Protocol.h>

@class AVObservationController, AVWaveform, AVWaveformTiledLayer, NSColor, NSString;

__attribute__((visibility("hidden")))
@interface AVWaveformLayer : CALayer <CALayerDelegate>
{
    AVObservationController *_observationController;
    AVWaveformTiledLayer *_waveformLayer;
    BOOL _hasPendingRedraw;
    AVWaveform *_waveform;
    NSColor *_primaryColor;
    NSColor *_negativeSpaceColor;
    unsigned long long _waveformStyle;
    BOOL _smooth;
    double _sampleWidth;
    double _sampleGapWidth;
    double _sampleScale;
    CDStruct_e83c9415 _timeRange;
    struct CGSize _contentSize;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)_updateRedrawPolicy;
- (BOOL)_shouldDraw;
- (void)_redrawWaveform;
- (BOOL)_canDraw;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)setNeedsDisplay;
- (void)setFrame:(struct CGRect)arg1;
- (void)ensureClarity;
@property(nonatomic) unsigned long long waveformStyle;
@property(retain, nonatomic) NSColor *primaryColor;
@property(retain, nonatomic) AVWaveform *waveform;
@property(nonatomic) CDStruct_e83c9415 timeRange;
@property(nonatomic) double sampleWidth;
@property(nonatomic) double sampleScale;
@property(nonatomic) double sampleGapWidth;
@property(nonatomic, getter=isSmooth) BOOL smooth;
@property(retain, nonatomic) NSColor *negativeSpaceColor;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

