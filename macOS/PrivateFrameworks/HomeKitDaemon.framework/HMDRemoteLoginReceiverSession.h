//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMDRemoteLoginAuthentication, NSString;

@interface HMDRemoteLoginReceiverSession : HMFObject
{
    NSString *_sessionID;
    HMDRemoteLoginAuthentication *_remoteAuthentication;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) HMDRemoteLoginAuthentication *remoteAuthentication; // @synthesize remoteAuthentication=_remoteAuthentication;
@property(readonly, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
- (id)description;
- (void)dealloc;
- (id)initWithSessionID:(id)arg1 remoteAuthentication:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

