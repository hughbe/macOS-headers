//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSOperationQueue;

@interface CKDAccountNotifier : NSObject
{
    int _accountChangedToken;
    NSMapTable *_notificationHandlers;
    NSOperationQueue *_accountChangeHandlerQueue;
}

+ (id)sharedNotifier;
- (void).cxx_destruct;
@property(retain, nonatomic) NSOperationQueue *accountChangeHandlerQueue; // @synthesize accountChangeHandlerQueue=_accountChangeHandlerQueue;
@property(retain, nonatomic) NSMapTable *notificationHandlers; // @synthesize notificationHandlers=_notificationHandlers;
@property(nonatomic) int accountChangedToken; // @synthesize accountChangedToken=_accountChangedToken;
- (void)unregisterObserverForAccountChangeNotification:(id)arg1;
- (void)registerObserver:(id)arg1 forAccountChangeNotification:(CDUnknownBlockType)arg2;
- (void)postAccountChangedNotificationToClients;
- (void)postAccountChangedNotificationWithAccountID:(id)arg1 changeType:(long long)arg2;
- (void)dealloc;
- (id)init;

@end

