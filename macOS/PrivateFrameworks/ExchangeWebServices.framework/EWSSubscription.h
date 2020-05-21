//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ExchangeWebServices/EWSExchangeServiceBindingTaskDelegate-Protocol.h>

@class EWSExchangeServiceBinding, EWSExchangeServiceBindingTask, NSArray, NSString;
@protocol EWSSubscriptionDelegate;

@interface EWSSubscription : NSObject <EWSExchangeServiceBindingTaskDelegate>
{
    id _currentTaskLock;
    EWSExchangeServiceBindingTask *_currentTask;
    BOOL _isValid;
    BOOL _shouldSubscribe;
    id <EWSSubscriptionDelegate> _delegate;
    NSArray *_folderIds;
    NSArray *_eventTypes;
    EWSExchangeServiceBinding *_binding;
    EWSExchangeServiceBindingTask *_subscribeTask;
    EWSExchangeServiceBindingTask *_unsubscribeTask;
    NSString *_subscriptionId;
    NSString *_watermark;
}

- (void).cxx_destruct;
@property BOOL shouldSubscribe; // @synthesize shouldSubscribe=_shouldSubscribe;
@property(copy) NSString *watermark; // @synthesize watermark=_watermark;
@property(copy) NSString *subscriptionId; // @synthesize subscriptionId=_subscriptionId;
@property(retain, nonatomic) EWSExchangeServiceBindingTask *unsubscribeTask; // @synthesize unsubscribeTask=_unsubscribeTask;
@property(retain, nonatomic) EWSExchangeServiceBindingTask *subscribeTask; // @synthesize subscribeTask=_subscribeTask;
@property(nonatomic) __weak EWSExchangeServiceBinding *binding; // @synthesize binding=_binding;
@property(copy) NSArray *eventTypes; // @synthesize eventTypes=_eventTypes;
@property(copy) NSArray *folderIds; // @synthesize folderIds=_folderIds;
@property __weak id <EWSSubscriptionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)exchangeServiceBindingTask:(id)arg1 didReceiveResponse:(id)arg2;
- (void)_clearTask:(id)arg1;
- (void)exchangeServiceBindingTaskCompleted:(id)arg1;
- (void)exchangeServiceBindingTask:(id)arg1 didFailWithError:(id)arg2;
- (id)nextTask;
- (void)scheduleTaskIfNeeded;
- (void)unsubscribe;
- (void)subscribe;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

