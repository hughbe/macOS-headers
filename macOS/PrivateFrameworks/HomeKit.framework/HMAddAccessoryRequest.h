//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMAccessoryCategory, HMHome, NSString, NSUUID;

@interface HMAddAccessoryRequest : NSObject <NSSecureCoding>
{
    BOOL _requiresSetupPayloadURL;
    BOOL _requiresOwnershipToken;
    HMHome *_home;
    NSString *_accessoryName;
    HMAccessoryCategory *_accessoryCategory;
    NSUUID *_requestIdentifier;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSUUID *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(readonly, nonatomic) BOOL requiresOwnershipToken; // @synthesize requiresOwnershipToken=_requiresOwnershipToken;
@property(readonly, nonatomic) BOOL requiresSetupPayloadURL; // @synthesize requiresSetupPayloadURL=_requiresSetupPayloadURL;
@property(readonly, nonatomic) HMAccessoryCategory *accessoryCategory; // @synthesize accessoryCategory=_accessoryCategory;
@property(readonly, nonatomic) NSString *accessoryName; // @synthesize accessoryName=_accessoryName;
@property(retain, nonatomic) HMHome *home; // @synthesize home=_home;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithIdentifer:(id)arg1 accessoryName:(id)arg2 accessoryCategory:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)payloadWithURL:(id)arg1 ownershipToken:(id)arg2;
- (id)payloadWithOwnershipToken:(id)arg1;

@end

