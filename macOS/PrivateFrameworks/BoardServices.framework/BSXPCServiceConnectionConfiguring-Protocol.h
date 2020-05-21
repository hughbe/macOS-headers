//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class BSServiceInterface, BSServiceQuality, NSObject, NSString;
@protocol BSServiceDispatchingQueue, OS_dispatch_queue;

@protocol BSXPCServiceConnectionConfiguring
- (void)setTargetDispatchingQueue:(id <BSServiceDispatchingQueue>)arg1;
- (void)setTargetQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (void)setInvalidationHandler:(void (^)(BSXPCServiceConnection *))arg1;
- (void)setInterruptionHandler:(void (^)(BSXPCServiceConnection *))arg1;
- (void)setActivationHandler:(void (^)(BSXPCServiceConnection *))arg1;
- (void)setErrorHandler:(void (^)(id <BSInvalidatable>, NSError *))arg1;
- (void)setMessageHandler:(void (^)(id <BSInvalidatable>, id <BSXPCServiceConnectionMessage>))arg1;
- (void)setNoMoreChildrenHandler:(void (^)(BSXPCServiceConnection *))arg1;
- (void)setConnectionHandler:(void (^)(BSXPCServiceConnection *, BSXPCServiceConnection *))arg1;
- (void)setNonLaunchingAware;
- (void)setInterfaceTarget:(id)arg1;
- (void)setInterface:(BSServiceInterface *)arg1;
- (void)encodeInitiatingContext:(void (^)(id <BSXPCEncoding>))arg1;
- (void)setServiceQuality:(BSServiceQuality *)arg1;
- (void)setName:(NSString *)arg1;
- (void)setContext:(id)arg1;
@end

