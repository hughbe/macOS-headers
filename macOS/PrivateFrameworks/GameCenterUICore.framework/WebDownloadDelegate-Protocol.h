//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUICore/NSURLDownloadDelegate-Protocol.h>

@class NSWindow, WebDownload;

@protocol WebDownloadDelegate <NSURLDownloadDelegate>

@optional
- (NSWindow *)downloadWindowForAuthenticationSheet:(WebDownload *)arg1;
@end

