//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Email/EMAccount.h>

#import <Email/EMDeliveryAccountBuilder-Protocol.h>

@class NSString;

@interface EMDeliveryAccount : EMAccount <EMDeliveryAccountBuilder>
{
    BOOL _primaryiCloudAccount;
    NSString *_name;
    NSString *_username;
    NSString *_hostname;
    unsigned long long _maximumMessageBytes;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property unsigned long long maximumMessageBytes; // @synthesize maximumMessageBytes=_maximumMessageBytes;
@property(getter=isPrimaryiCloudAccount) BOOL primaryiCloudAccount; // @synthesize primaryiCloudAccount=_primaryiCloudAccount;
@property(copy) NSString *hostname; // @synthesize hostname=_hostname;
@property(copy) NSString *username; // @synthesize username=_username;
- (id)name;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_commonInitName:(id)arg1 hostname:(id)arg2 builder:(CDUnknownBlockType)arg3;
- (id)initWithObjectID:(id)arg1 name:(id)arg2 hostname:(id)arg3 builder:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

