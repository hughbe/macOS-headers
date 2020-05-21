//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPRemoteCommand.h>

@class NSArray, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface MPInsertIntoPlaybackQueueCommand : MPRemoteCommand
{
    NSMutableSet *_registeredQueueTypes;
    NSMutableSet *_registeredCustomQueueIdentifiers;
    BOOL _supportsSharedQueue;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSArray *_supportedInsertionPositions;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *supportedInsertionPositions; // @synthesize supportedInsertionPositions=_supportedInsertionPositions;
- (id)_mediaRemoteCommandInfoOptions;
- (void)setSupportedSharedQueue:(BOOL)arg1;
- (void)unregisterSupportedCustomQueueIdentifier:(id)arg1;
- (void)registerSupportedCustomQueueIdentifier:(id)arg1;
- (void)unregisterSupportedQueueType:(long long)arg1;
- (void)registerSupportedQueueType:(long long)arg1;
- (id)initWithMediaRemoteCommandType:(unsigned int)arg1;

@end

