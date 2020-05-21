//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ToneKit/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol TLToneStoreDownloadObserver <NSObject>

@optional
- (void)toneStoreDownloadsDidFinish:(NSArray *)arg1;
- (void)toneStoreDownloadsDidProgress:(NSArray *)arg1;
- (void)toneStoreDownloadsDidStart:(NSArray *)arg1;
- (void)didFinishCheckingForAvailableToneStoreDownloads:(BOOL)arg1;
- (void)storeAccountNameDidChange:(NSString *)arg1;
@end

