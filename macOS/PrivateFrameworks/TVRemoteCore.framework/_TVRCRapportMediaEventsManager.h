//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet, RPMediaControlSession;

@interface _TVRCRapportMediaEventsManager : NSObject
{
    int _currentSetting;
    NSSet *_volumeCommands;
    NSMutableSet *_mediaCommands;
    RPMediaControlSession *_mediaSession;
    CDUnknownBlockType _eventHandler;
}

- (void).cxx_destruct;
@property(nonatomic) int currentSetting; // @synthesize currentSetting=_currentSetting;
@property(copy, nonatomic) CDUnknownBlockType eventHandler; // @synthesize eventHandler=_eventHandler;
@property(retain, nonatomic) RPMediaControlSession *mediaSession; // @synthesize mediaSession=_mediaSession;
@property(retain, nonatomic) NSMutableSet *mediaCommands; // @synthesize mediaCommands=_mediaCommands;
@property(retain, nonatomic) NSSet *volumeCommands; // @synthesize volumeCommands=_volumeCommands;
- (id)supportedCaptionEvents;
- (void)_refreshCaptionState;
- (int)_captionSettingForButtonEvent:(id)arg1;
- (int)_commandForMediaButtonEvent:(id)arg1;
- (void)_setupMediaCommands:(unsigned long long)arg1;
- (void)sendMediaEvent:(id)arg1;
@property(readonly) NSSet *supportedMediaCommands;
- (void)dealloc;
- (id)initWithCompanionLinkClient:(id)arg1 eventHandler:(CDUnknownBlockType)arg2;

@end

