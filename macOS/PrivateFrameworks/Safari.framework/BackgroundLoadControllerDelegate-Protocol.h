//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class BackgroundLoad, BackgroundLoadController, BrowserTabViewItem, BrowserViewController, WKWebView;

@protocol BackgroundLoadControllerDelegate <NSObject>
- (BrowserTabViewItem *)backgroundLoadController:(BackgroundLoadController *)arg1 destinationTabViewItemForCommittingBackgroundLoad:(BackgroundLoad *)arg2;
- (BrowserViewController *)backgroundLoadController:(BackgroundLoadController *)arg1 browserViewControllerForSettingUpBackgroundLoad:(BackgroundLoad *)arg2;
- (BrowserViewController *)makeBrowserViewControllerForBackgroundLoadController:(BackgroundLoadController *)arg1 relatedToWebView:(WKWebView *)arg2;

@optional
- (BOOL)backgroundLoadController:(BackgroundLoadController *)arg1 handleBackgroundLoadDidPerformFirstVisuallyNonEmptyLayout:(BackgroundLoad *)arg2;
- (void)backgroundLoadController:(BackgroundLoadController *)arg1 didCommitBackgroundLoad:(BackgroundLoad *)arg2 intoTabViewItem:(BrowserTabViewItem *)arg3;
- (void)backgroundLoadController:(BackgroundLoadController *)arg1 willCommitBackgroundLoad:(BackgroundLoad *)arg2 wasDeferred:(BOOL)arg3;
- (void)backgroundLoadController:(BackgroundLoadController *)arg1 didReissueBackgroundLoad:(BackgroundLoad *)arg2;
- (void)backgroundLoadController:(BackgroundLoadController *)arg1 didCancelBackgroundLoad:(BackgroundLoad *)arg2 beingCommittedIntoTabViewItem:(BrowserTabViewItem *)arg3;
- (void)backgroundLoadController:(BackgroundLoadController *)arg1 willCancelBackgroundLoad:(BackgroundLoad *)arg2;
- (void)backgroundLoadController:(BackgroundLoadController *)arg1 didDeferCommitOfBackgroundLoad:(BackgroundLoad *)arg2;
@end

