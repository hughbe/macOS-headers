//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSPasteboardReading.h"
#import "NSPasteboardWriting.h"

@class NSString;

@interface NSSound : NSObject <NSCopying, NSCoding, NSPasteboardReading, NSPasteboardWriting>
{
    id _delegate;
    id _info;
    id _reserved[6];
    unsigned int _sFlags;
}

+ (unsigned long long)_alertType;
+ (void)_setAlertType:(unsigned long long)arg1;
+ (BOOL)_areUISoundEffectsEnabled;
+ (BOOL)playSound:(id)arg1 flags:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (BOOL)canInitWithPasteboard:(id)arg1;
+ (unsigned long long)readingOptionsForType:(id)arg1 pasteboard:(id)arg2;
+ (id)readableTypesForPasteboard:(id)arg1;
+ (void)_forceSoundEngine:(long long)arg1;
+ (id)soundNamed:(id)arg1;
+ (id)_searchForSoundNamed:(id)arg1;
+ (id)soundUnfilteredPasteboardTypes;
+ (id)soundUnfilteredFileTypes;
+ (id)soundUnfilteredTypes;
+ (void)initialize;
- (unsigned int)_systemSoundIDCreateIfNecessary:(BOOL)arg1;
- (void)writeToPasteboard:(id)arg1;
- (id)initWithPasteboard:(id)arg1;
- (id)pasteboardPropertyListForType:(id)arg1;
- (id)writableTypesForPasteboard:(id)arg1;
- (id)initWithPasteboardPropertyList:(id)arg1 ofType:(id)arg2;
- (void)_qtMovieDidEnd:(id)arg1;
@property double currentTime;
@property(readonly) double duration;
@property BOOL loops;
@property float volume;
- (void)_updateSoundShouldLoopByStoredLoopFlag;
- (void)_updateVolumeByStoredVolume;
- (BOOL)stop;
- (BOOL)play;
- (BOOL)resume;
- (BOOL)pause;
@property(readonly, getter=isPlaying) BOOL playing;
- (id)channelMapping;
- (void)setChannelMapping:(id)arg1;
- (BOOL)_setChannelMapping:(id)arg1 error:(id *)arg2;
@property(copy) NSString *playbackDeviceIdentifier;
- (BOOL)_setAudioDeviceUID:(id)arg1 channels:(id)arg2 error:(id *)arg3;
- (void)_setPlayingAndRetainIfUnset;
- (BOOL)_unsetPlayingReturningIfWasSet;
- (BOOL)_registersName;
- (void)_setRegistersName:(BOOL)arg1;
- (BOOL)setName:(id)arg1;
@property(readonly, copy) NSString *name;
- (id)url;
- (id)_url;
@property id <NSSoundDelegate> delegate;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 byReference:(BOOL)arg2;
- (id)initWithContentsOfFile:(id)arg1 byReference:(BOOL)arg2;
- (BOOL)_allocateExtraFields;
- (void)dealloc;
- (id)init;
- (void)_postInitialization;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

