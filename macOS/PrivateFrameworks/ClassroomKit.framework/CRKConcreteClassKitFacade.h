//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKClassKitFacade-Protocol.h>

@class CLSDataStore, NSString;

@interface CRKConcreteClassKitFacade : NSObject <CRKClassKitFacade>
{
    CLSDataStore *_dataStore;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CLSDataStore *dataStore; // @synthesize dataStore=_dataStore;
- (void)currentUserWithCompletion:(CDUnknownBlockType)arg1;
- (id)currentUserDataObserverWithSortDescriptors:(id)arg1;
- (void)enrolledClassesWithCompletion:(CDUnknownBlockType)arg1;
- (id)classDataObserverWithSortDescriptors:(id)arg1;
- (void)instructorsInClassWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)instructorObserverWithSortDescriptors:(id)arg1;
- (void)deregisterDataObserver:(id)arg1;
- (void)registerDataObserver:(id)arg1;
@property(readonly, copy, nonatomic) NSString *currentUserInfoKey;
@property(readonly, copy, nonatomic) NSString *currentUserDidChangeNotificationName;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

