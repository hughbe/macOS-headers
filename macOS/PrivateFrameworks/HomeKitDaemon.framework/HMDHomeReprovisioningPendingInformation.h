//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HMDAccessoryNetworkCredential, NSUUID;

@interface HMDHomeReprovisioningPendingInformation : NSObject
{
    NSUUID *_messageIdentifier;
    HMDAccessoryNetworkCredential *_networkCredential;
}

- (void).cxx_destruct;
@property(readonly) HMDAccessoryNetworkCredential *networkCredential; // @synthesize networkCredential=_networkCredential;
@property(readonly) NSUUID *messageIdentifier; // @synthesize messageIdentifier=_messageIdentifier;
- (id)initWithMessageUUID:(id)arg1 networkCredential:(id)arg2;

@end

