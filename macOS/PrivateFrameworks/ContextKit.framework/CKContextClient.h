//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKContextSemaphore, NSMutableArray, NSSet, NSString;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface CKContextClient : NSObject
{
    NSObject<OS_dispatch_queue> *_notificationsQueue;
    NSSet *_capabilities;
    NSString *_indexVersionId;
    NSMutableArray *_updateHandlers;
    NSObject<OS_dispatch_semaphore> *_sema_capabilities;
    CKContextSemaphore *_serviceSemaphore;
    unsigned long long _defaultRequestType;
}

+ (id)clientWithDefaultRequestType:(unsigned long long)arg1;
+ (id)new;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long defaultRequestType; // @synthesize defaultRequestType=_defaultRequestType;
- (void)ancestorsForTopics:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)workWithServiceSemaphore:(CDUnknownBlockType)arg1;
- (BOOL)tryAcquireServiceSemaphore;
- (BOOL)hasServiceSemaphore;
@property(readonly, nonatomic) NSSet *capabilities;
- (id)indexVersionId;
- (id)retrieveCapabilites;
- (void)registerConfigurationUpdateHandler:(CDUnknownBlockType)arg1;
- (void)capabilitiesWithReply:(CDUnknownBlockType)arg1;
- (id)newRequest;
- (void)_updateCachedCapabilites;
- (void)_handleConfigurationUpdate;
- (void)ensureFullyInitialized;
- (id)initWithDefaultRequestType:(unsigned long long)arg1;
- (id)init;

@end

