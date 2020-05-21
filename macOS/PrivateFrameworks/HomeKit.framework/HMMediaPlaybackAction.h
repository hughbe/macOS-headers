//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMAction.h>

#import <HomeKit/HMObjectMerge-Protocol.h>
#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSMutableCopying-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMFUnfairLock, MPPlaybackArchive, NSNumber, NSSet, NSString, NSUUID;

@interface HMMediaPlaybackAction : HMAction <NSSecureCoding, HMObjectMerge, NSCopying, NSMutableCopying>
{
    NSSet *_mediaProfiles;
    long long _state;
    NSNumber *_volume;
    MPPlaybackArchive *_playbackArchive;
    HMFUnfairLock *_lock;
}

+ (id)_actionWithInfo:(id)arg1 home:(id)arg2;
+ (BOOL)supportsSecureCoding;
+ (id)mediaPlaybackActionWithProtoBuf:(id)arg1 home:(id)arg2;
+ (BOOL)isSupportedForHome:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MPPlaybackArchive *playbackArchive; // @synthesize playbackArchive=_playbackArchive;
@property(retain, nonatomic) NSNumber *volume; // @synthesize volume=_volume;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(copy, nonatomic) NSSet *mediaProfiles; // @synthesize mediaProfiles=_mediaProfiles;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (BOOL)_handleUpdates:(id)arg1;
- (BOOL)_updateWithSerializedAction:(id)arg1 home:(id)arg2;
- (BOOL)isValid;
- (id)_serializeForAdd;
- (void)_updateWithAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateWithAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)accessoryProfiles;
- (id)encodeAsProtoBuf;
- (unsigned long long)type;
- (id)initWithPlaybackAction:(id)arg1 uuid:(id)arg2;
- (id)initWithMediaProfiles:(id)arg1 playbackState:(long long)arg2 volume:(id)arg3 playbackArchive:(id)arg4;
- (id)initWithMediaProfiles:(id)arg1 playbackState:(long long)arg2 volume:(id)arg3 playbackArchive:(id)arg4 uuid:(id)arg5;
- (id)initWithUUID:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier;

@end

