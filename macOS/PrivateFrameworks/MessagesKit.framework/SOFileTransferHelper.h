//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MessagesKit/SOHelper.h>

@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface SOFileTransferHelper : SOHelper
{
    NSMutableDictionary *_guidToResolvedBookmarkMap;
    NSObject<OS_dispatch_queue> *_workerQueue;
}

+ (id)sharedInstance;
+ (id)bundleName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workerQueue; // @synthesize workerQueue=_workerQueue;
@property(retain) NSMutableDictionary *guidToResolvedBookmarkMap; // @synthesize guidToResolvedBookmarkMap=_guidToResolvedBookmarkMap;
- (id)archiveURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)runBlockWhenDoneArchiving:(CDUnknownBlockType)arg1;
- (id)accountIDForFileTransferGUID:(id)arg1;
- (id)otherPersonForFileTransferGUID:(id)arg1;
- (id)fileTransfersIncompleteAlert;
- (BOOL)atLeastOneTransferIncomplete;
- (id)userVisibleURLForGUID:(id)arg1;
- (void)setUserVisibleURL:(id)arg1 fileTransferGUID:(id)arg2;
- (void)removeVisibleTransferGUIDs:(id)arg1;
- (void)addVisibleTransferGUIDs:(id)arg1;
- (id)visibleFileTransferGUIDs;
- (id)init;

@end

