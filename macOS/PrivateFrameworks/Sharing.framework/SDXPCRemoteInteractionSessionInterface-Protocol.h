//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDictionary, SFRemoteInteractionSession;

@protocol SDXPCRemoteInteractionSessionInterface
- (void)remoteInteractionSessionSendPayload:(NSDictionary *)arg1;
- (void)remoteInteractionSessionActivate:(SFRemoteInteractionSession *)arg1 completion:(void (^)(NSError *))arg2;
@end

