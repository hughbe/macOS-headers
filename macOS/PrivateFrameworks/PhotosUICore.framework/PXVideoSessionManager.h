//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

@class NSArray, NSCountedSet, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PXVideoSessionManager : PXObservable
{
    NSMutableDictionary *_sessionsByIdentifier;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSCountedSet *_sessionCounts;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)mutableChangeObject;
@property(readonly, nonatomic) NSArray *activeSessions;
- (id)description;
- (void)checkInVideoSession:(id)arg1;
- (id)checkOutSessionWithContentProvider:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)videoSessionForAsset:(id)arg1 mediaProvider:(id)arg2 livePhotosLoopCrossfadeDuration:(double)arg3 loopTimeRange:(CDStruct_e83c9415)arg4;
- (id)videoSessionForAsset:(id)arg1 mediaProvider:(id)arg2;

@end

