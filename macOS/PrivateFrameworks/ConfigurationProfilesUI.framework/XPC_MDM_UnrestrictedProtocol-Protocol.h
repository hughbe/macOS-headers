//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationProfilesUI/XPCMessageProtocol-Protocol.h>

@class NSDictionary;

@protocol XPC_MDM_UnrestrictedProtocol <XPCMessageProtocol>
- (void)unitTestRequest:(NSDictionary *)arg1 reply:(void (^)(NSDictionary *))arg2;
- (void)unrestrictedRequest:(NSDictionary *)arg1 reply:(void (^)(NSDictionary *))arg2;
- (void)generateProfilesSystemInfoReport:(NSDictionary *)arg1 reply:(void (^)(NSDictionary *))arg2;
@end

