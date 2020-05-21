//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CATextLayer.h>

@class AVPlayer, AVPlayerLayer, NSMutableDictionary, NSObject;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface AVNetworkPlaybackPerfHUDLayer : CATextLayer
{
    NSObject<OS_dispatch_source> *_hudTimer;
    AVPlayer *_player;
    AVPlayerLayer *_playerLayer;
    _Bool _showHud;
    _Bool _spatialDiagnostics;
    int _colorId;
    double _opacity;
    int _fontSizeInt;
    _Bool _updateUISettings;
    int _hudXoffset;
    int _hudYoffset;
    unsigned long long _hudUpdateInterval;
    _Bool _showCompleteURI;
    long long _prevVariantIdx;
    long long _prevStallCount;
    long long _totalStallCount;
    NSMutableDictionary *_loadingStatusCache;
}

+ (id)convertBitrate:(double)arg1;
+ (BOOL)runningAnInternalBuild;
- (void).cxx_destruct;
@property __weak AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property __weak AVPlayer *player; // @synthesize player=_player;
- (void)_hudUpdate;
- (BOOL)valueLoadedForKey:(id)arg1 onObject:(id)arg2;
- (id)getTrackFormatDesc:(id)arg1;
- (id)getVideoRange:(struct opaqueCMFormatDescription *)arg1;
- (void)currentItemTracksChanged;
- (void)currentItemChanged;
- (float)getScaleFactorForDisplaySize:(struct CGSize)arg1;
- (void)dealloc;
- (void)startDispatchTimer;
- (void)readHudSettingsAndCallCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getHudSetting;
- (void)setColor:(int)arg1;
- (void)updateBounds:(struct CGRect)arg1;
- (id)init;
- (_Bool)hudEnabled;
- (void)setNeedsDisplay;

@end

