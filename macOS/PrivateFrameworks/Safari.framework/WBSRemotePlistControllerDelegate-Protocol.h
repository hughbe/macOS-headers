//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class WBSRemotePlistController;

@protocol WBSRemotePlistControllerDelegate <NSObject>

@optional
- (void)didDownloadPlistForRemotePlistController:(WBSRemotePlistController *)arg1;
- (BOOL)shouldRemotePlistControllerUpdateOnSchedule:(WBSRemotePlistController *)arg1;
@end

