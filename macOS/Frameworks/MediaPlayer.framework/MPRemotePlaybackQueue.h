//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/NSSecureCoding-Protocol.h>

@class ICUserIdentity, NSDictionary, NSString;

@interface MPRemotePlaybackQueue : NSObject <NSSecureCoding>
{
    struct _MRSystemAppPlaybackQueue *_mediaRemotePlaybackQueue;
    ICUserIdentity *_userIdentity;
}

+ (BOOL)supportsSecureCoding;
+ (void)registerRemotePlaybackQueueClass:(Class)arg1 forPlaybackQueueType:(int)arg2;
+ (id)queueWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue *)arg1 options:(id)arg2;
+ (id)queueWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue *)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) ICUserIdentity *userIdentity; // @synthesize userIdentity=_userIdentity;
- (struct _MRSystemAppPlaybackQueue *)_mediaRemotePlaybackQueue;
- (BOOL)verifyWithError:(id *)arg1;
@property(copy, nonatomic) NSDictionary *userInfo;
@property(nonatomic) long long replaceIntent;
@property(nonatomic) BOOL shouldOverrideManuallyCuratedQueue;
@property(copy, nonatomic) NSString *siriRecommendationIdentifier;
@property(readonly, copy, nonatomic) NSDictionary *siriWHAMetricsInfo;
@property(readonly, copy, nonatomic) NSString *featureName;
@property(readonly, copy, nonatomic) NSString *siriAssetInfo;
@property(nonatomic, getter=isRequestingImmediatePlayback) BOOL requestingImmediatePlayback;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue *)arg1 options:(id)arg2;

@end

