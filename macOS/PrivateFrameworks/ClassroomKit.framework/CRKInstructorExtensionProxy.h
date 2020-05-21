//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/LSApplicationWorkspaceObserverProtocol-Protocol.h>

@class LSApplicationWorkspace, NSExtension, NSString, NSUUID;

@interface CRKInstructorExtensionProxy : NSObject <LSApplicationWorkspaceObserverProtocol>
{
    LSApplicationWorkspace *mWorkspace;
    NSExtension *mInstructorExtension;
    NSUUID *mContextIdentifier;
}

+ (id)sharedExtensionProxy;
- (void).cxx_destruct;
- (void)applicationInstallsDidStart:(id)arg1;
- (BOOL)proxiesContainClassroomApp:(id)arg1;
- (void)establishEndpointWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)beginExtensionRequestWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)configureInstructorExtensionAfterFetchError:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)fetchListenerEndpointFromClassroomBundleWithURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)fetchListenerEndpointWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)resetExtension;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

