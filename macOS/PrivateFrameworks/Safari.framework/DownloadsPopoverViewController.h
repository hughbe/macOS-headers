//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <Safari/NSPopoverDelegate-Protocol.h>

@class DownloadViewController, NSPopover, NSScrollView, NSSegmentedControl, NSString, NSTextField;

__attribute__((visibility("hidden")))
@interface DownloadsPopoverViewController : NSViewController <NSPopoverDelegate>
{
    NSSegmentedControl *_clearSegment;
    DownloadViewController *_listViewController;
    NSTextField *_titleLabel;
    NSScrollView *_listScrollView;
    NSPopover *_popover;
}

+ (void)determinePopoverAvailabilityWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (BOOL)canShowPopover;
+ (id)sharedController;
- (void).cxx_destruct;
@property(retain, nonatomic) NSPopover *popover; // @synthesize popover=_popover;
- (void)_updateContentSizeForDownloadsChange;
- (void)_updateContentSizeAllowingSmallerWidth:(BOOL)arg1;
- (void)_downloadsDidChange:(id)arg1;
- (void)_downloadViewSizeDidChange:(id)arg1;
- (void)_downloadEntryStageChanged:(id)arg1;
- (void)_updateClearSegment;
- (void)_windowWillClose:(id)arg1;
- (void)popoverDidDetach:(id)arg1;
- (BOOL)popoverShouldDetach:(id)arg1;
- (void)popoverWillClose:(id)arg1;
- (void)popoverWillShow:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)togglePopoverWithPositioningView:(id)arg1;
@property(readonly, nonatomic, getter=isShowingPopover) BOOL showingPopover;
- (id)popoverPositioningView;
- (struct CGSize)bestSizeAllowingSmallerWidth:(BOOL)arg1;
- (void)closePopoverIfNecessary;
- (void)clear:(id)arg1;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

