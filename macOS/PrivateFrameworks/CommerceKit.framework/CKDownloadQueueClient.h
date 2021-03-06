//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CommerceKit/ISDownloadQueueObserver-Protocol.h>

@interface CKDownloadQueueClient : NSObject <ISDownloadQueueObserver>
{
    long long _downloadTypesMask;
    CDUnknownBlockType _observerBlock;
}

- (void).cxx_destruct;
@property(copy) CDUnknownBlockType observerBlock; // @synthesize observerBlock=_observerBlock;
@property long long downloadTypesMask; // @synthesize downloadTypesMask=_downloadTypesMask;
- (void)downloadQueueDidCheckServerDownloadQueueForAccount:(id)arg1 withDownloadCount:(long long)arg2 newDownloads:(id)arg3;
- (void)download:(id)arg1 didUpdateStatus:(id)arg2;
- (void)downloadQueueDidRemoveDownload:(id)arg1 queueIsIdle:(BOOL)arg2;
- (void)downloadQueueDidAddDownload:(id)arg1;

@end

