//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <Safari/ResponsiveDesignContainerViewDelegate-Protocol.h>

@class NSLayoutConstraint, NSString, ResponsiveDesignContainerView, ResponsiveDesignShelfViewController, WKWebView, WindowBackdropVisualEffectView;

__attribute__((visibility("hidden")))
@interface ResponsiveDesignViewController : NSViewController <ResponsiveDesignContainerViewDelegate>
{
    ResponsiveDesignShelfViewController *_shelfViewController;
    WindowBackdropVisualEffectView *_visualEffectView;
    ResponsiveDesignContainerView *_responsiveDesignContainerView;
    NSLayoutConstraint *_visualEffectViewTopConstraint;
    BOOL _ignoreDisplayBrowserSizeChange;
    WKWebView *_webView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
- (void)responsiveDesignContainerView:(id)arg1 didChangeBrowserSize:(struct CGSize)arg2;
- (id)snapHeightsForResponsiveDesignContainerView:(id)arg1;
- (id)snapWidthsForResponsiveDesignContainerView:(id)arg1;
- (void)viewFrameChanged:(id)arg1;
- (void)magnifyToFitResponsiveDesignContainerView;
@property(nonatomic) struct CGSize browserSize;
@property(nonatomic) unsigned long long pixelRatio;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)webViewDidNavigateOrReload;
- (void)updateViewConstraints;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithWebView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

