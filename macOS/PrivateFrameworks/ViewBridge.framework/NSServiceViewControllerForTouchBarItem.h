//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ViewBridge/NSServiceViewController.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NSServiceViewControllerForTouchBarItem : NSServiceViewController
{
    NSString *_touchBarItemIdentifier;
    unsigned int _observingBridge:1;
}

+ (id)controllerWithTouchBarItem:(id)arg1 andAppearance:(id)arg2;
+ (void)touchBarItemViewAbsentFromViewHierarchy:(id)arg1;
+ (BOOL)hideOverlayTouchBar:(id)arg1;
+ (void)showOverlayTouchBar:(id)arg1 withOptions:(id)arg2;
+ (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
+ (id)viewServiceTouchBarControllerIdentifier:(id)arg1;
+ (id)describeTouchBars:(id)arg1;
+ (id)touchBarsForProviders:(id)arg1;
+ (id)touchBarProvidersForWindow:(id)arg1 includingWindowItself:(BOOL)arg2;
+ (void)touchBarProviders:(id)arg1 inWindow:(id)arg2 includingWindowItself:(BOOL)arg3;
+ (void)initialize;
- (void)informRemoteViewOfNewSize:(struct CGSize)arg1;
- (unsigned long long)awakeFromRemoteView;
- (void)loadView;
- (void)prepareItemsOfBar:(id)arg1;
- (id)initWithAppearance:(id)arg1;
- (BOOL)_isSecondary;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)observeChangeToCompressionItemContainingItem:(id)arg1;
- (void)invalidate;
- (void)dealloc;
- (BOOL)remoteViewSizeChanged:(struct CGSize)arg1 transaction:(id)arg2;
- (void)_didAssociateWithHostWindow;

@end

