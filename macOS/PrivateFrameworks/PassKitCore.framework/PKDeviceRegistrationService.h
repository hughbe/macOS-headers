//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PKXPCService;

@interface PKDeviceRegistrationService : NSObject
{
    PKXPCService *_remoteService;
    BOOL _isRegistering;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_remoteObjectProxyWithSemaphore:(id)arg1;
- (id)_remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxyWithFailureHandler:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxy;
- (void)performDeviceRegistrationForReason:(id)arg1 actionType:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)performDeviceRegistrationWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

