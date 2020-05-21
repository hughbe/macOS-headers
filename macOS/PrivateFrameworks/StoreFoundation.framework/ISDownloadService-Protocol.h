//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreFoundation/ISServiceRemoteObject-Protocol.h>

@class ISStoreAccount, NSArray, NSDictionary, NSError, NSString, NSURL, SSDownload, SSDownloadMetadata;
@protocol ISDownloadQueueObserver;

@protocol ISDownloadService <ISServiceRemoteObject>
- (void)restoreDownloadsWithArchivedFiles:(NSArray *)arg1 replyBlock:(void (^)(BOOL, NSError *))arg2;
- (void)runWarningDialogForDownloadMetadata:(SSDownloadMetadata *)arg1 error:(NSError *)arg2 replyBlock:(void (^)(BOOL))arg3;
- (void)runErrorDialogForDownloadMetadata:(SSDownloadMetadata *)arg1 error:(NSError *)arg2;
- (void)checkPreflightWithItemIdentifier:(unsigned long long)arg1 url:(NSURL *)arg2 systemVersionInfo:(NSDictionary *)arg3 replyBlock:(void (^)(BOOL, NSError *))arg4;
- (void)lockedApplicationTriedToLaunchAtPath:(NSString *)arg1;
- (void)unlockApplicationsWithBundleIdentifier:(NSString *)arg1;
- (void)lockApplicationsForBundleID:(NSString *)arg1;
- (void)performedIconAnimationForDownloadWithIdentifier:(unsigned long long)arg1;
- (void)fetchIconForItemIdentifier:(unsigned long long)arg1 atURL:(NSURL *)arg2 replyBlock:(void (^)(unsigned long long, BOOL, NSURL *, NSError *))arg3;
- (void)cacheReceiptAsString:(id)arg1 forDownload:(SSDownload *)arg2 reply:(void (^)(BOOL, NSError *))arg3;
- (void)checkAutomaticDownloadQueue;
- (void)triggerDownloadsWithReplyBlock:(void (^)(void))arg1;
- (void)checkServerDownloadQueueWithReplyBlock:(void (^)(BOOL, long long, long long))arg1;
- (void)checkStoreDownloadQueueForAccount:(ISStoreAccount *)arg1;
- (void)downloadWithItemIdentifier:(unsigned long long)arg1 reply:(void (^)(SSDownload *))arg2;
- (void)downloadsWithTypeMask:(long long)arg1 reply:(void (^)(NSArray *))arg2;
- (void)removeDownloadQueueObserver:(NSString *)arg1;
- (void)addDownloadQueueObserver:(id <ISDownloadQueueObserver>)arg1 reply:(void (^)(NSString *))arg2;
- (void)resetStatusForDownloadWithItemIdentifier:(unsigned long long)arg1;
- (void)removeDownloadWithItemIdentifier:(unsigned long long)arg1;
- (void)cancelDownloadWithItemIdentifier:(unsigned long long)arg1 promptToConfirm:(BOOL)arg2 askToDelete:(BOOL)arg3;
- (void)resumeDownloadWithItemIdentifier:(unsigned long long)arg1;
- (void)pauseDownloadWithItemIdentifier:(unsigned long long)arg1;
- (void)addDownload:(SSDownload *)arg1 replyBlock:(void (^)(unsigned long long, NSError *))arg2;
- (void)performDownload:(SSDownload *)arg1 withOptions:(unsigned long long)arg2 replyBlock:(void (^)(unsigned long long, NSError *))arg3;
@end

