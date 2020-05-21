//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSupport/MSPContainerPersister.h>

#import <MapsSupport/MSPMapsPushDaemonProxyObserver-Protocol.h>

@class NSString, NSUUID;

@interface MSPRemoteCollectionsContainerPersister : MSPContainerPersister <MSPMapsPushDaemonProxyObserver>
{
    BOOL _hasRemoteProxy;
    NSUUID *_lastOperationIdentifier;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSUUID *lastOperationIdentifier; // @synthesize lastOperationIdentifier=_lastOperationIdentifier;
@property(nonatomic) BOOL hasRemoteProxy; // @synthesize hasRemoteProxy=_hasRemoteProxy;
- (void)pushDaemonProxyReceivedNotificationData:(id)arg1 forType:(id)arg2 recordIdentifier:(id)arg3;
- (void)historyDidChange;
- (void)favoritesDidChange;
- (void)eraseWithCompletion:(CDUnknownBlockType)arg1;
- (void)commitByMergingWithStateSnapshot:(id)arg1 mergeOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)commitEditWithNewContents:(id)arg1 edits:(id)arg2 appliedToOldContents:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)fetchStateSnapshotWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

