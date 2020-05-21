//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSMutableSet, NSString;
@protocol HMFLogging;

@interface HMDNotificationRegistration : HMFObject <HMFLogging>
{
    NSMutableSet *_registeredNotifications;
    id <HMFLogging> _registerer;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <HMFLogging> registerer; // @synthesize registerer=_registerer;
@property(readonly, nonatomic) NSMutableSet *registeredNotifications; // @synthesize registeredNotifications=_registeredNotifications;
- (void)addObserver:(SEL)arg1 name:(id)arg2 object:(id)arg3;
- (id)logIdentifier;
- (id)initWithRegisterer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

