//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_xpc_object;

@interface IMRemoteObject : NSObject
{
    id _internal;
}

+ (void)initialize;
+ (void)_unregisterIMRemoteObject:(id)arg1;
+ (void)_registerIMRemoteObject:(id)arg1;
+ (id)_remoteObjects;
- (id)_queue;
- (id)description;
- (void)invalidate;
- (void)setPortName:(id)arg1;
@property(readonly, nonatomic) NSString *portName;
@property(retain, nonatomic) NSString *processName;
@property(nonatomic) int pid;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *connection;
- (void)forwardInvocation:(id)arg1;
- (unsigned long long)forwardXPCObject:(id)arg1 messageContext:(id)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)_systemShutdown:(id)arg1;
@property(readonly, nonatomic) BOOL isValid;
- (void)_portDidBecomeInvalid;
- (void)dealloc;
- (void)_cleanupMachBitsCanPost:(BOOL)arg1;
- (id)initWithConnection:(id)arg1 protocol:(id)arg2 alreadyConfigured:(BOOL)arg3;
- (id)initWithConnection:(id)arg1 protocol:(id)arg2 alreadyConfigured:(BOOL)arg3 forceSecureCoding:(BOOL)arg4;
- (id)initWithPortName:(id)arg1 protocol:(id)arg2;
- (id)initWithConnection:(id)arg1 protocol:(id)arg2;
- (id)_initWithConnection:(id)arg1 portName:(id)arg2 protocol:(id)arg3 alreadyConfigured:(BOOL)arg4 forceSecureCoding:(BOOL)arg5;

@end

