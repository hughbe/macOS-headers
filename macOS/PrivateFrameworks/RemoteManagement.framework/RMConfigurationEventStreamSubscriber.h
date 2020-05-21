//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RemoteManagement/RMConfigurationSubscriberClient.h>

@class NSArray, NSObject;
@protocol RMConfigurationEventStreamSubscriberDelegate;

@interface RMConfigurationEventStreamSubscriber : RMConfigurationSubscriberClient
{
    NSObject *_delegationLock;
    NSArray *_configurationTypes;
    id <RMConfigurationEventStreamSubscriberDelegate> _delegate;
    id _eventStreamObserver;
}

+ (void)_setupEventHandler;
+ (id)_eventDescriptorByNameForEventStreamNamed:(id)arg1;
+ (id)configuredConfigurationTypes;
- (void).cxx_destruct;
@property(retain, nonatomic) id eventStreamObserver; // @synthesize eventStreamObserver=_eventStreamObserver;
@property(nonatomic) __weak id <RMConfigurationEventStreamSubscriberDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_delegateDidFailToFetchConfigurationsWithTypes:(id)arg1 error:(id)arg2;
- (void)_delegateDidFetchConfigurationsByType:(id)arg1;
- (void)_fetchConfigurationsAndNotifyDelegateIfNeeded:(id)arg1;
- (void)_handleEvent:(id)arg1;
- (void)_setupEventHandler;
- (void)start;
- (void)dealloc;
- (id)init;
@property(readonly, nonatomic) NSArray *configurationTypes; // @synthesize configurationTypes=_configurationTypes;

@end

