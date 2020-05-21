//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserManagement/NSObject-Protocol.h>

@class NSDictionary;

@protocol UMXPCClient <NSObject>
- (void)personaUpdateCallbackForMachServiceCompletionHandler:(void (^)(void))arg1;
- (void)personaListDidUpdateCompletionHandler:(void (^)(void))arg1;
- (void)bubbleDidPop;
- (void)deviceLoginSessionStateDidUpdate;
- (void)userSwitchTaskListDidUpdate;
- (void)readyToSwitchToLoginSession:(NSDictionary *)arg1 completionHandler:(void (^)(void))arg2;
- (void)readyToSwitchToUser:(NSDictionary *)arg1 completionHandler:(void (^)(void))arg2;
- (void)willSwitchToUser:(NSDictionary *)arg1 completionHandler:(void (^)(void))arg2;
- (void)uploadContentWithCompletionHandler:(void (^)(void))arg1;
@end

