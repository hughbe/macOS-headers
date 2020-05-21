//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INIntent.h>

#import <Intents/INPlayMediaIntentExport-Protocol.h>

@class INMediaItem, INMediaSearch, NSArray, NSDate, NSNumber, NSString;

@interface INPlayMediaIntent : INIntent <INPlayMediaIntentExport>
{
}

+ (id)_ignoredParameters;
- (id)_spotlightContentType;
- (void)setParametersByName:(id)arg1;
- (id)parametersByName;
- (void)setVerb:(id)arg1;
- (id)verb;
- (void)setDomain:(id)arg1;
- (id)domain;
- (id)_validParameterCombinationsWithSchema:(id)arg1;
- (id)_keyCodableAttributes;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (id)_dictionaryRepresentation;
@property(copy) NSString *proxiedBundleIdentifier;
@property long long parsecCategory;
@property(copy) NSArray *alternativeResults;
@property(copy) NSArray *audioSearchResults;
@property(copy) NSArray *hashedRouteUIDs;
- (void)setMediaSearch:(id)arg1;
@property(readonly, copy) INMediaSearch *mediaSearch;
- (void)setPlaybackSpeed:(id)arg1;
@property(readonly, copy) NSNumber *playbackSpeed;
- (void)setPlaybackQueueLocation:(long long)arg1;
@property(readonly) long long playbackQueueLocation;
@property(copy) NSString *recoID;
@property(copy) NSArray *buckets;
@property(copy) NSDate *expirationDate;
- (void)setResumePlayback:(id)arg1;
@property(readonly, copy) NSNumber *resumePlayback;
- (void)setPlaybackRepeatMode:(long long)arg1;
@property(readonly) long long playbackRepeatMode;
- (void)setPlayShuffled:(id)arg1;
@property(readonly, copy) NSNumber *playShuffled;
- (void)setMediaContainer:(id)arg1;
@property(readonly, copy) INMediaItem *mediaContainer;
- (void)setMediaItems:(id)arg1;
@property(readonly, copy) NSArray *mediaItems;
- (id)initWithMediaItems:(id)arg1 mediaContainer:(id)arg2 playShuffled:(id)arg3 playbackRepeatMode:(long long)arg4 resumePlayback:(id)arg5 playbackQueueLocation:(long long)arg6 playbackSpeed:(id)arg7 mediaSearch:(id)arg8;
- (id)_categoryVerb;
- (long long)_intentCategory;
- (void)_setMetadata:(id)arg1;
- (id)_metadata;
- (id)_typedBackingStore;
- (id)initWithMediaItems:(id)arg1 mediaContainer:(id)arg2 playShuffled:(id)arg3 playbackRepeatMode:(long long)arg4 resumePlayback:(id)arg5;
- (long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2;
- (id)_titleWithLocalizer:(id)arg1 fromBundleURL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

