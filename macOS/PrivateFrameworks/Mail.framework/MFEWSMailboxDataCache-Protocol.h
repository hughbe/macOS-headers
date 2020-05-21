//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Mail/NSObject-Protocol.h>

@class NSString;

@protocol MFEWSMailboxDataCache <NSObject>
- (void)dataNotFoundForURL:(NSString *)arg1;
- (void)updateCachedFolderID:(NSString *)arg1 andSyncState:(NSString *)arg2 forMailboxURL:(NSString *)arg3;
- (NSString *)cachedSyncStateForMailboxURL:(NSString *)arg1;
- (NSString *)cachedFolderIDForMailboxURL:(NSString *)arg1;
@end

