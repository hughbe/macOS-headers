//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class BrowserWKView, ReaderContainerView;
@protocol PageWithHeaderViewDelegate;

__attribute__((visibility("hidden")))
@interface PageWithHeaderView : NSView
{
    BrowserWKView *_browserWKView;
    NSView *_headerBannerView;
    ReaderContainerView *_readerContainerView;
    id <PageWithHeaderViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <PageWithHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak ReaderContainerView *readerContainerView; // @synthesize readerContainerView=_readerContainerView;
@property(nonatomic) __weak NSView *headerBannerView; // @synthesize headerBannerView=_headerBannerView;
@property(nonatomic) __weak BrowserWKView *browserWKView; // @synthesize browserWKView=_browserWKView;
- (struct CGRect)_pageContentFrame;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

