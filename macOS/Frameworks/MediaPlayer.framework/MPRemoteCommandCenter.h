//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/MPRemoteCommandDelegate_Internal-Protocol.h>

@class MPAdvanceRepeatModeCommand, MPAdvanceShuffleModeCommand, MPChangePlaybackPositionCommand, MPChangePlaybackRateCommand, MPChangeQueueEndActionCommand, MPChangeRepeatModeCommand, MPChangeShuffleModeCommand, MPFeedbackCommand, MPInsertIntoPlaybackQueueCommand, MPMRNowPlayingPlayerPathWrapper, MPRatingCommand, MPRemoteCommand, MPReorderQueueCommand, MPSetPlaybackQueueCommand, MPSetPlaybackSessionCommand, MPSkipIntervalCommand, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface MPRemoteCommandCenter : NSObject <MPRemoteCommandDelegate_Internal>
{
    NSMutableArray *_activeCommands;
    NSObject<OS_dispatch_queue> *_serialQueue;
    void *_mediaRemoteCommandHandler;
    BOOL _scheduledSupportedCommandsChangedNotification;
    BOOL _canBeNowPlayingApplication;
    BOOL _handlingPlaybackQueueCommands;
    MPMRNowPlayingPlayerPathWrapper *_playerPath;
    BOOL _disableAutomaticCanBeNowPlaying;
    MPRemoteCommand *_pauseCommand;
    MPRemoteCommand *_playCommand;
    MPRemoteCommand *_stopCommand;
    MPRemoteCommand *_togglePlayPauseCommand;
    MPRemoteCommand *_enableLanguageOptionCommand;
    MPRemoteCommand *_disableLanguageOptionCommand;
    MPRemoteCommand *_nextTrackCommand;
    MPRemoteCommand *_previousTrackCommand;
    MPSkipIntervalCommand *_skipForwardCommand;
    MPSkipIntervalCommand *_skipBackwardCommand;
    MPRemoteCommand *_seekForwardCommand;
    MPRemoteCommand *_seekBackwardCommand;
    MPRatingCommand *_ratingCommand;
    MPChangePlaybackRateCommand *_changePlaybackRateCommand;
    MPFeedbackCommand *_likeCommand;
    MPFeedbackCommand *_dislikeCommand;
    MPFeedbackCommand *_bookmarkCommand;
    MPChangePlaybackPositionCommand *_changePlaybackPositionCommand;
    MPChangeRepeatModeCommand *_changeRepeatModeCommand;
    MPChangeShuffleModeCommand *_changeShuffleModeCommand;
    MPRemoteCommand *_specialSeekForwardCommand;
    MPRemoteCommand *_specialSeekBackwardCommand;
    MPAdvanceShuffleModeCommand *_advanceShuffleModeCommand;
    MPAdvanceRepeatModeCommand *_advanceRepeatModeCommand;
    MPRemoteCommand *_createRadioStationCommand;
    MPSetPlaybackQueueCommand *_setPlaybackQueueCommand;
    MPRemoteCommand *_prepareForSetPlaybackQueueCommand;
    MPInsertIntoPlaybackQueueCommand *_insertIntoPlaybackQueueCommand;
    MPRemoteCommand *_removeFromPlaybackQueueCommand;
    MPReorderQueueCommand *_reorderQueueCommand;
    MPRemoteCommand *_playItemInQueueCommand;
    MPFeedbackCommand *_addNowPlayingItemToLibraryCommand;
    MPFeedbackCommand *_addItemToLibraryCommand;
    MPSetPlaybackSessionCommand *_setPlaybackSessionCommand;
    MPRemoteCommand *_reshuffleCommand;
    MPChangeQueueEndActionCommand *_changeQueueEndActionCommand;
    NSString *_playerID;
}

+ (void)getPendingCommandTypesWithCompletion:(CDUnknownBlockType)arg1;
+ (long long)_numberOfCommandCentersWithTargets;
+ (id)commandCenterForPlayerID:(id)arg1;
+ (id)sharedCommandCenter;
+ (void)updateLaunchCommandsWithConfigurationHandler:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(nonatomic) BOOL disableAutomaticCanBeNowPlaying; // @synthesize disableAutomaticCanBeNowPlaying=_disableAutomaticCanBeNowPlaying;
@property(readonly, copy, nonatomic) NSString *playerID; // @synthesize playerID=_playerID;
- (void)_stopMediaRemoteSync;
- (void)_startMediaRemoteSync;
- (void)_scheduleSupportedCommandsChanged;
- (void)_commandTargetsDidChangeNotification:(id)arg1;
- (id)_createRemoteCommandWithConcreteClass:(Class)arg1 mediaRemoteType:(unsigned int)arg2;
- (id)_activeCommands;
@property(readonly, nonatomic) MPChangeQueueEndActionCommand *changeQueueEndActionCommand; // @synthesize changeQueueEndActionCommand=_changeQueueEndActionCommand;
@property(readonly, nonatomic) MPRemoteCommand *reshuffleCommand; // @synthesize reshuffleCommand=_reshuffleCommand;
@property(readonly, nonatomic) MPSetPlaybackSessionCommand *setPlaybackSessionCommand; // @synthesize setPlaybackSessionCommand=_setPlaybackSessionCommand;
@property(readonly, nonatomic) MPFeedbackCommand *addItemToLibraryCommand; // @synthesize addItemToLibraryCommand=_addItemToLibraryCommand;
@property(readonly, nonatomic) MPFeedbackCommand *addNowPlayingItemToLibraryCommand; // @synthesize addNowPlayingItemToLibraryCommand=_addNowPlayingItemToLibraryCommand;
@property(readonly, nonatomic) MPRemoteCommand *playItemInQueueCommand; // @synthesize playItemInQueueCommand=_playItemInQueueCommand;
@property(readonly, nonatomic) MPReorderQueueCommand *reorderQueueCommand; // @synthesize reorderQueueCommand=_reorderQueueCommand;
@property(readonly, nonatomic) MPRemoteCommand *removeFromPlaybackQueueCommand; // @synthesize removeFromPlaybackQueueCommand=_removeFromPlaybackQueueCommand;
@property(readonly, nonatomic) MPInsertIntoPlaybackQueueCommand *insertIntoPlaybackQueueCommand; // @synthesize insertIntoPlaybackQueueCommand=_insertIntoPlaybackQueueCommand;
@property(readonly, nonatomic) MPRemoteCommand *prepareForSetPlaybackQueueCommand; // @synthesize prepareForSetPlaybackQueueCommand=_prepareForSetPlaybackQueueCommand;
@property(readonly, nonatomic) MPSetPlaybackQueueCommand *setPlaybackQueueCommand; // @synthesize setPlaybackQueueCommand=_setPlaybackQueueCommand;
@property(readonly, nonatomic) MPRemoteCommand *createRadioStationCommand; // @synthesize createRadioStationCommand=_createRadioStationCommand;
@property(readonly, nonatomic) MPAdvanceRepeatModeCommand *advanceRepeatModeCommand; // @synthesize advanceRepeatModeCommand=_advanceRepeatModeCommand;
@property(readonly, nonatomic) MPAdvanceShuffleModeCommand *advanceShuffleModeCommand; // @synthesize advanceShuffleModeCommand=_advanceShuffleModeCommand;
@property(readonly, nonatomic) MPRemoteCommand *specialSeekBackwardCommand; // @synthesize specialSeekBackwardCommand=_specialSeekBackwardCommand;
@property(readonly, nonatomic) MPRemoteCommand *specialSeekForwardCommand; // @synthesize specialSeekForwardCommand=_specialSeekForwardCommand;
@property(readonly, nonatomic) MPChangeShuffleModeCommand *changeShuffleModeCommand; // @synthesize changeShuffleModeCommand=_changeShuffleModeCommand;
@property(readonly, nonatomic) MPChangeRepeatModeCommand *changeRepeatModeCommand; // @synthesize changeRepeatModeCommand=_changeRepeatModeCommand;
@property(readonly, nonatomic) MPChangePlaybackPositionCommand *changePlaybackPositionCommand; // @synthesize changePlaybackPositionCommand=_changePlaybackPositionCommand;
@property(readonly, nonatomic) MPFeedbackCommand *bookmarkCommand; // @synthesize bookmarkCommand=_bookmarkCommand;
@property(readonly, nonatomic) MPFeedbackCommand *dislikeCommand; // @synthesize dislikeCommand=_dislikeCommand;
@property(readonly, nonatomic) MPFeedbackCommand *likeCommand; // @synthesize likeCommand=_likeCommand;
@property(readonly, nonatomic) MPChangePlaybackRateCommand *changePlaybackRateCommand; // @synthesize changePlaybackRateCommand=_changePlaybackRateCommand;
@property(readonly, nonatomic) MPRatingCommand *ratingCommand; // @synthesize ratingCommand=_ratingCommand;
@property(readonly, nonatomic) MPRemoteCommand *seekBackwardCommand; // @synthesize seekBackwardCommand=_seekBackwardCommand;
@property(readonly, nonatomic) MPRemoteCommand *seekForwardCommand; // @synthesize seekForwardCommand=_seekForwardCommand;
@property(readonly, nonatomic) MPSkipIntervalCommand *skipBackwardCommand; // @synthesize skipBackwardCommand=_skipBackwardCommand;
@property(readonly, nonatomic) MPSkipIntervalCommand *skipForwardCommand; // @synthesize skipForwardCommand=_skipForwardCommand;
@property(readonly, nonatomic) MPRemoteCommand *previousTrackCommand; // @synthesize previousTrackCommand=_previousTrackCommand;
@property(readonly, nonatomic) MPRemoteCommand *nextTrackCommand; // @synthesize nextTrackCommand=_nextTrackCommand;
@property(readonly, nonatomic) MPRemoteCommand *disableLanguageOptionCommand; // @synthesize disableLanguageOptionCommand=_disableLanguageOptionCommand;
@property(readonly, nonatomic) MPRemoteCommand *enableLanguageOptionCommand; // @synthesize enableLanguageOptionCommand=_enableLanguageOptionCommand;
@property(readonly, nonatomic) MPRemoteCommand *togglePlayPauseCommand; // @synthesize togglePlayPauseCommand=_togglePlayPauseCommand;
@property(readonly, nonatomic) MPRemoteCommand *stopCommand; // @synthesize stopCommand=_stopCommand;
@property(readonly, nonatomic) MPRemoteCommand *playCommand; // @synthesize playCommand=_playCommand;
@property(readonly, nonatomic) MPRemoteCommand *pauseCommand; // @synthesize pauseCommand=_pauseCommand;
- (void)getPendingCommandTypesWithCompletion:(CDUnknownBlockType)arg1;
- (void)dispatchCommandEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_pushMediaRemoteCommand:(unsigned int)arg1 withOptions:(struct __CFDictionary *)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_pushMediaRemoteCommand:(unsigned int)arg1 withOptions:(struct __CFDictionary *)arg2;
- (void)remoteCommandDidMutatePropagatableProperty:(id)arg1;
- (void)dealloc;
- (id)initWithPlayerID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

