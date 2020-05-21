//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXPeopleDataSource.h>

#import <PhotosUICore/PHPhotoLibraryChangeObserver-Protocol.h>

@class NSArray, NSObject, NSString, PXPeopleDetailsContext;
@protocol OS_dispatch_queue;

@interface PXPeopleWidgetDataSource : PXPeopleDataSource <PHPhotoLibraryChangeObserver>
{
    NSObject<OS_dispatch_queue> *_fetchQueue;
    BOOL _containsSocialGroups;
    BOOL _isForOneUp;
    BOOL _prefetchingStarted;
    PXPeopleDetailsContext *_context;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL prefetchingStarted; // @synthesize prefetchingStarted=_prefetchingStarted;
@property(nonatomic) BOOL isForOneUp; // @synthesize isForOneUp=_isForOneUp;
@property(retain, nonatomic) PXPeopleDetailsContext *context; // @synthesize context=_context;
@property(nonatomic) BOOL containsSocialGroups; // @synthesize containsSocialGroups=_containsSocialGroups;
- (id)_socialGroupsForIdentifiers:(id)arg1;
- (void)loadMembersWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_updateMembers;
- (void)prefetchThumbnailsForTargetSize:(struct CGSize)arg1 maxFetchCount:(unsigned long long)arg2;
- (id)titleAtIndex:(unsigned long long)arg1;
- (void)imageCacheDidChanged:(id)arg1;
- (void)photoLibraryDidChange:(id)arg1;
- (void)stopListeningForChanges;
- (void)startListeningForChanges;
- (void)dealloc;
- (id)initWithName:(id)arg1 objectsReloadBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSArray *members; // @dynamic members;
@property(readonly) Class superclass;

@end

