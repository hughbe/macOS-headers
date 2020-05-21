//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol AnalyticsConfigurationObserverDelegate, OS_dispatch_queue;

@interface AnalyticsConfigurationObserver : NSObject
{
    struct shared_ptr<(anonymous namespace)::ConfigurationObserverImpl> observer;
    NSObject<OS_dispatch_queue> *_queue;
    id <AnalyticsConfigurationObserverDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <AnalyticsConfigurationObserverDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (BOOL)stopObservingConfigurationType:(id)arg1;
- (BOOL)startObservingConfigurationType:(id)arg1;
- (void)setConfigurationObserverDelegate:(id)arg1 queue:(id)arg2;
- (void)dealloc;
- (id)init;

@end

