//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class DimmingView, NSView;
@protocol TabDialogView;

@protocol TabDialogInstallationTarget <NSObject>
- (void)uninstallTabDialogViewAnimated:(BOOL)arg1 completionHandler:(void (^)(void))arg2;
- (void)transplantTabDialogView:(NSView<TabDialogView> *)arg1 andDimmingView:(DimmingView *)arg2 placement:(long long)arg3;
- (void)installTabDialogView:(NSView<TabDialogView> *)arg1 andDimmingView:(DimmingView *)arg2 placement:(long long)arg3 completionHandler:(void (^)(void))arg4;
@end

