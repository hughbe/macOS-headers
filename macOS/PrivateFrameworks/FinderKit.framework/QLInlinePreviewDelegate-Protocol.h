//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FinderKit/NSObject-Protocol.h>

@class QLInlinePreviewController;
@protocol QLPreviewItem;

@protocol QLInlinePreviewDelegate <NSObject>
- (struct CGRect)inlinePreview:(QLInlinePreviewController *)arg1 frameForPreviewItem:(id <QLPreviewItem>)arg2;

@optional
- (void)inlinePreview:(QLInlinePreviewController *)arg1 didChangeToState:(int)arg2;
- (void)inlinePreview:(QLInlinePreviewController *)arg1 didLoadPreviewItem:(id <QLPreviewItem>)arg2;
- (void)inlinePreview:(QLInlinePreviewController *)arg1 willLoadPreviewItem:(id <QLPreviewItem>)arg2;
- (BOOL)inlinePreviewShouldAlwaysHandleMultiClicks:(QLInlinePreviewController *)arg1;
- (int)inlinePreview:(QLInlinePreviewController *)arg1 expectedModeForPreviewItem:(id <QLPreviewItem>)arg2 flavor:(int *)arg3;
- (struct CGRect)inlinePreview:(QLInlinePreviewController *)arg1 rolloverFrameForPreviewItem:(id <QLPreviewItem>)arg2;
- (struct CGRect)inlinePreview:(QLInlinePreviewController *)arg1 contentFrameForPreviewItem:(id <QLPreviewItem>)arg2;
@end

