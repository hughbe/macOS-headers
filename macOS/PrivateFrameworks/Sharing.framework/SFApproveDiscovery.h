//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, SFDeviceDiscovery;
@protocol OS_dispatch_queue;

@interface SFApproveDiscovery : NSObject
{
    BOOL _activateCalled;
    CDUnknownBlockType _activateHandler;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    SFDeviceDiscovery *_deviceDiscovery;
    NSMutableDictionary *_deviceDictionary;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _deviceFoundHandler;
    CDUnknownBlockType _deviceLostHandler;
    CDUnknownBlockType _invalidationHandler;
    NSArray *_devices;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *devices; // @synthesize devices=_devices;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceLostHandler; // @synthesize deviceLostHandler=_deviceLostHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceFoundHandler; // @synthesize deviceFoundHandler=_deviceFoundHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)_discoveryLostDevice:(id)arg1;
- (void)_discoveryDeviceChanged:(id)arg1;
- (void)_discoveryFoundDevice:(id)arg1;
- (void)_discoveryEnsureStopped;
- (void)_discoveryEnsureStarted;
- (void)_invalidated;
- (void)invalidate;
- (void)_activatedWithError:(id)arg1;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

@end

