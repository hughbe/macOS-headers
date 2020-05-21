//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SharePointManagement/SPMVolumeObserverDelegate-Protocol.h>

@class NSArray, NSData, NSHashTable, NSString, ODNode, SPMVolumeObserver;
@protocol OS_dispatch_queue;

@interface SPMSharePointManager : NSObject <SPMVolumeObserverDelegate>
{
    ODNode *_node;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSHashTable *_observers;
    NSArray *_sharePoints;
    NSData *_authorizationToken;
    SPMVolumeObserver *_volumeObserver;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly) SPMVolumeObserver *volumeObserver; // @synthesize volumeObserver=_volumeObserver;
@property(retain) NSData *authorizationToken; // @synthesize authorizationToken=_authorizationToken;
@property(readonly) NSHashTable *observers; // @synthesize observers=_observers;
@property(readonly) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(readonly) ODNode *node; // @synthesize node=_node;
- (void)volumeObserver:(id)arg1 observedVolumeUnmounted:(id)arg2;
- (void)volumeObserver:(id)arg1 observedVolumeMounted:(id)arg2;
- (BOOL)_removeSharePointNamed:(id)arg1;
- (BOOL)_addSharePointNamed:(id)arg1 withInfo:(id)arg2;
- (void)_invalidateAndNotifyObservers;
- (void)_handleListChangeNotification:(id)arg1;
- (void)_fetchSharePoints;
- (id)_records;
- (BOOL)updateSharePoint:(id)arg1 error:(id *)arg2;
- (BOOL)removeSharePoint:(id)arg1 error:(id *)arg2;
- (BOOL)addSharePoint:(id)arg1 error:(id *)arg2;
- (id)connection;
@property(readonly) NSArray *sharePoints; // @synthesize sharePoints=_sharePoints;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

