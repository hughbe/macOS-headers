//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClassroomKit/NSObject-Protocol.h>

@class CATTaskClient, NSDictionary, NSError, NSString;

@protocol CATTaskClientDelegate <NSObject>
- (void)client:(CATTaskClient *)arg1 didInterruptWithError:(NSError *)arg2;

@optional
- (void)clientDidInvalidate:(CATTaskClient *)arg1;
- (void)clientWillInvalidate:(CATTaskClient *)arg1;
- (void)clientDidDisconnect:(CATTaskClient *)arg1;
- (void)client:(CATTaskClient *)arg1 didReceiveNotificationWithName:(NSString *)arg2 userInfo:(NSDictionary *)arg3;
- (void)clientDidConnect:(CATTaskClient *)arg1;
@end

