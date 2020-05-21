//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKDDeviceManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_deviceIDs;
}

+ (id)sharedManager;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *deviceIDs; // @synthesize deviceIDs=_deviceIDs;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id)deviceIdentifierForContext:(id)arg1 skipInMemoryCache:(BOOL)arg2 createIfNecessary:(BOOL)arg3;
- (id)deviceIdentifierForContext:(id)arg1;
- (void)_deleteDeviceIdentifierForContext:(id)arg1;
- (void)_saveDeviceIdentifier:(id)arg1 forContext:(id)arg2;
- (struct __CFDictionary *)createQueryForDeviceIdentifierInContext:(id)arg1;
- (id)_savedDeviceIdentifierForContext:(id)arg1;
- (id)_lookupKeyForContext:(id)arg1;
- (id)_serviceForContext:(id)arg1;
- (id)init;

@end

