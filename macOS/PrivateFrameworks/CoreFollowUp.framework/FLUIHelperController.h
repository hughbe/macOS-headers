//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSXPCConnection;

@interface FLUIHelperController : NSObject
{
    NSLock *_connLock;
    NSXPCConnection *_conn;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)remoteObjectInterface;
- (id)connection;
- (void)tearDownUIForHSA2LoginNotificationWithPushMessageID:(id)arg1;
- (void)showUIForHSA2LoginCode:(id)arg1 notification:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showHSA2PasswordChangeForAppleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showUIForHSA2LoginNotification:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end

