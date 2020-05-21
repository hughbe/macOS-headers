//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFMessage.h>

@class HMDHomeKitVersion, HMFLogEventSession, NSUUID;

@interface HMDRemoteMessage : HMFMessage
{
    double _remoteTimeout;
    long long _type;
    NSUUID *_transactionIdentifier;
    HMDHomeKitVersion *_sourceVersion;
}

+ (id)secureMessageWithName:(id)arg1 qualityOfService:(long long)arg2 destination:(id)arg3 messagePayload:(id)arg4;
+ (id)secureMessageWithName:(id)arg1 destination:(id)arg2 messagePayload:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) HMDHomeKitVersion *sourceVersion; // @synthesize sourceVersion=_sourceVersion;
@property(copy, nonatomic) NSUUID *transactionIdentifier; // @synthesize transactionIdentifier=_transactionIdentifier;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) unsigned long long restriction;
- (void)setInternalResponseHandler:(CDUnknownBlockType)arg1;
- (void)setResponseHandler:(CDUnknownBlockType)arg1;
@property(nonatomic, getter=isSecure) BOOL secure;
@property(readonly, nonatomic) double timeout; // @synthesize timeout=_remoteTimeout;
- (BOOL)isRemote;
- (id)description;
- (id)debugDescription;
- (id)descriptionWithPointer:(BOOL)arg1;
- (id)initWithName:(id)arg1 qualityOfService:(long long)arg2 destination:(id)arg3 payload:(id)arg4 type:(long long)arg5 timeout:(double)arg6 secure:(BOOL)arg7 restriction:(unsigned long long)arg8;
- (id)initWithName:(id)arg1 qualityOfService:(long long)arg2 destination:(id)arg3 payload:(id)arg4 type:(long long)arg5 timeout:(double)arg6 secure:(BOOL)arg7;
- (id)initWithName:(id)arg1 destination:(id)arg2 payload:(id)arg3 type:(long long)arg4 timeout:(double)arg5 secure:(BOOL)arg6 restriction:(unsigned long long)arg7;
- (id)initWithName:(id)arg1 destination:(id)arg2 payload:(id)arg3 type:(long long)arg4 timeout:(double)arg5 secure:(BOOL)arg6;
- (id)initWithName:(id)arg1 qualityOfService:(long long)arg2 destination:(id)arg3 userInfo:(id)arg4 headers:(id)arg5 payload:(id)arg6;
- (id)initWithName:(id)arg1 qualityOfService:(long long)arg2 destination:(id)arg3 payload:(id)arg4;
- (id)initWithName:(id)arg1 destination:(id)arg2 payload:(id)arg3;

// Remaining properties
@property(retain, nonatomic) HMFLogEventSession *logEventSession; // @dynamic logEventSession;

@end

