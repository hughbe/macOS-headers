//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, NSXPCListenerEndpoint;

@protocol DIConnectionHelperService
- (void)sendEndpointForUUID:(NSString *)arg1 withReply:(void (^)(NSXPCListenerEndpoint *))arg2;
- (void)receiveEndpoint:(NSXPCListenerEndpoint *)arg1 uuid:(NSString *)arg2 withReply:(void (^)(void))arg3;
@end

