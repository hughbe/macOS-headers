//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSObject-Protocol.h>

@class FIFinderView, NSArray, NSSet, NSString, NSURL, QLPreviewPanel;

@protocol FIFinderViewDelegate <NSObject>

@optional
- (BOOL)finderViewSelectedURLsCanIncludeItemsNeedingDownload:(FIFinderView *)arg1;
- (void)finderView:(FIFinderView *)arg1 hideExtension:(BOOL)arg2;
- (void)finderViewCollapseSavePanel:(FIFinderView *)arg1;
- (NSSet *)finderViewQuerySearchUTIs:(FIFinderView *)arg1;
- (BOOL)finderView:(FIFinderView *)arg1 acceptsPreviewPanelControl:(QLPreviewPanel *)arg2;
- (void)finderView:(FIFinderView *)arg1 configureForGotoWithFilename:(NSString *)arg2;
- (void)finderView:(FIFinderView *)arg1 scopeChanged:(BOOL)arg2;
- (void)finderViewViewStyleChanged:(FIFinderView *)arg1;
- (NSArray *)finderView:(FIFinderView *)arg1 requestMenuItemsForURLs:(NSArray *)arg2 andUTIs:(NSArray *)arg3;
- (NSArray *)finderViewRequestRecentPlaces:(FIFinderView *)arg1;
- (void)finderView:(FIFinderView *)arg1 clickedOnDisabledURL:(NSURL *)arg2;
- (void)finderView:(FIFinderView *)arg1 populationInProgress:(BOOL)arg2;
- (BOOL)finderViewOpenSelection:(FIFinderView *)arg1;
- (void)finderViewSelectionDidChange:(FIFinderView *)arg1;
- (void)finderView:(FIFinderView *)arg1 didChangeToDirectoryURL:(NSURL *)arg2;
- (BOOL)finderView:(FIFinderView *)arg1 showAsPackageForURL:(NSURL *)arg2;
- (BOOL)finderView:(FIFinderView *)arg1 canSelectURL:(NSURL *)arg2 itemIsContainer:(BOOL)arg3 itemIsPackage:(BOOL)arg4 pathExtension:(NSString *)arg5 itemHFSType:(unsigned int)arg6 typeIdentifier:(NSString *)arg7;
- (BOOL)finderView:(FIFinderView *)arg1 canSelectURL:(NSURL *)arg2 itemIsContainer:(BOOL)arg3 itemIsPackage:(BOOL)arg4;
- (BOOL)finderView:(FIFinderView *)arg1 canSelectURL:(NSURL *)arg2;
- (BOOL)finderView:(FIFinderView *)arg1 shouldEnableURL:(NSURL *)arg2;
- (BOOL)finderView:(FIFinderView *)arg1 shouldEnableURL:(NSURL *)arg2 itemIsContainer:(BOOL)arg3 itemIsPackage:(BOOL)arg4;
- (BOOL)finderView:(FIFinderView *)arg1 shouldEnableURL:(NSURL *)arg2 itemIsContainer:(BOOL)arg3 itemIsPackage:(BOOL)arg4 pathExtension:(NSString *)arg5 itemHFSType:(unsigned int)arg6 typeIdentifier:(NSString *)arg7;
- (void)finderView:(FIFinderView *)arg1 shouldEnableItems:(NSArray *)arg2 completionHandler:(void (^)(NSArray *))arg3;
@end

