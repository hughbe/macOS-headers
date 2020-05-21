//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLDaemonLibraryManagerMinimalProtocol-Protocol.h>

@class CPLChangeBatch, CPLChangeSessionContext, NSArray, NSString;

@protocol CPLDaemonLibraryManagerProtocol <CPLDaemonLibraryManagerMinimalProtocol>
- (void)acknowledgeChangedStatuses:(NSArray *)arg1;
- (void)checkResourcesAreSafeToPrune:(NSArray *)arg1 checkServerIfNecessary:(BOOL)arg2 completionHandler:(void (^)(NSArray *, NSDictionary *))arg3;
- (void)deleteResources:(NSArray *)arg1 checkServerIfNecessary:(BOOL)arg2 completionHandler:(void (^)(NSArray *, NSDictionary *))arg3;
- (void)commitChangeBatch:(CPLChangeBatch *)arg1 withCompletionHandler:(void (^)(NSError *, unsigned long long, CPLPushChangeTasks *, NSString *))arg2;
- (void)acknowledgeChangeBatch:(CPLChangeBatch *)arg1 withCompletionHandler:(void (^)(NSError *, NSString *))arg2;
- (void)getChangeBatchWithCompletionHandler:(void (^)(NSError *, CPLChangeBatch *))arg1;
- (void)finalizeSessionWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)beginPullSessionWithKnownLibraryVersion:(NSString *)arg1 context:(CPLChangeSessionContext *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)beginPushSessionWithKnownLibraryVersion:(NSString *)arg1 context:(CPLChangeSessionContext *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)boostPriorityForScopeWithIdentifier:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)disableMainScopeWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)enableMainScopeWithCompletionHandler:(void (^)(NSError *))arg1;
@end

