//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMRemoteLoginMessage.h>

#import <HomeKit/HMRemoteLoginMessageProtocol-Protocol.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface HMProvisionAnisetteDataResponse : HMRemoteLoginMessage <HMRemoteLoginMessageProtocol>
{
    BOOL _didSucceed;
}

+ (id)xpcMessageName;
+ (id)messageName;
+ (BOOL)supportsSecureCoding;
+ (id)objWithMessage:(id)arg1;
+ (id)objWithDict:(id)arg1;
@property(nonatomic) BOOL didSucceed; // @synthesize didSucceed=_didSucceed;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDictionary *messagePayload;
@property(readonly, copy, nonatomic) NSString *xpcMessageName;
@property(readonly, copy, nonatomic) NSString *messageName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

