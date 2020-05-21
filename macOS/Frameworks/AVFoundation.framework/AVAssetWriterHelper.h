//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAssetWriterConfigurationState, AVMediaFileType, AVWeakReference, NSArray, NSError, NSURL;
@protocol AVAssetWriterDelegate;

__attribute__((visibility("hidden")))
@interface AVAssetWriterHelper : NSObject
{
    AVAssetWriterConfigurationState *_configurationState;
    AVWeakReference *_weakReferenceToAssetWriter;
}

@property(retain) AVWeakReference *weakReferenceToAssetWriter; // @synthesize weakReferenceToAssetWriter=_weakReferenceToAssetWriter;
@property(readonly, nonatomic) AVAssetWriterConfigurationState *configurationState; // @synthesize configurationState=_configurationState;
- (void)flush;
- (void)transitionToFailedStatusWithError:(id)arg1;
- (BOOL)_transitionToClientInitiatedTerminalStatus:(long long)arg1;
- (void)finishWritingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)finishWriting;
- (void)cancelWriting;
- (void)endSessionAtSourceTime:(CDStruct_1b6d18a9)arg1;
- (void)startSessionAtSourceTime:(CDStruct_1b6d18a9)arg1;
- (void)startWriting;
- (void)addInputGroup:(id)arg1;
- (BOOL)canAddInputGroup:(id)arg1;
- (void)addInput:(id)arg1;
- (BOOL)canAddInput:(id)arg1;
- (BOOL)_canApplyTrackReferences:(id)arg1 exceptionReason:(id *)arg2;
- (BOOL)canApplyOutputSettings:(id)arg1 forMediaType:(id)arg2;
- (BOOL)_canApplyOutputSettings:(id)arg1 forMediaType:(id)arg2 sourceFormat:(struct opaqueCMFormatDescription *)arg3 exceptionReason:(id *)arg4;
@property(readonly, nonatomic) NSArray *inputGroups;
@property(readonly, nonatomic) NSArray *inputs;
@property(nonatomic) long long singlePassMediaDataSize;
@property(nonatomic) long long singlePassFileSize;
@property(nonatomic) float preferredRate;
@property(nonatomic) float preferredVolume;
@property(nonatomic) struct CGAffineTransform preferredTransform;
@property(copy, nonatomic) NSArray *metadata;
@property(nonatomic) int movieTimeScale;
@property(copy, nonatomic) NSURL *directoryForTemporaryFiles;
@property(nonatomic) BOOL shouldOptimizeForNetworkUse;
@property(nonatomic) CDStruct_1b6d18a9 overallDurationHint;
@property(nonatomic) CDStruct_1b6d18a9 movieFragmentInterval;
@property __weak id <AVAssetWriterDelegate> delegate;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) long long status;
@property(readonly, nonatomic) NSArray *availableMediaTypes;
@property(readonly, nonatomic) AVMediaFileType *mediaFileType;
- (id)dataWritingDelegate;
@property(readonly, nonatomic) NSURL *outputURL;
- (void)dealloc;
- (id)initWithConfigurationState:(id)arg1;
- (id)init;

@end

