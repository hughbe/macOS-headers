//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class NSButton, NSImageView, NSProgressIndicator;
@protocol ReaderFontTableCellViewDelegate;

__attribute__((visibility("hidden")))
@interface ReaderFontTableCellView : NSTableCellView
{
    long long _fontAvailabilityState;
    NSButton *_downloadButton;
    NSProgressIndicator *_progressIndicator;
    NSImageView *_checkboxImage;
    id <ReaderFontTableCellViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <ReaderFontTableCellViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long fontAvailabilityState; // @synthesize fontAvailabilityState=_fontAvailabilityState;
@property(nonatomic) __weak NSImageView *checkboxImage; // @synthesize checkboxImage=_checkboxImage;
- (void)_startDownloadIfAppropriate;
- (void)_installProgressIndicator;
- (void)_installDownloadButton;
- (void)setProgressIndicatorProgress:(double)arg1;

@end

