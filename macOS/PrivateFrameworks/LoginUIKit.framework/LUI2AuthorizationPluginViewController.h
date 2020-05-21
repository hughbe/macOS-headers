//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LoginUIKit/LUI2PasswordViewController.h>

@class LUI2View, NSLayoutConstraint, NSView, SFAuthorizationPluginView;

@interface LUI2AuthorizationPluginViewController : LUI2PasswordViewController
{
    int _viewTypeInternal;
    SFAuthorizationPluginView *_authorizationPluginView;
    LUI2View *_containerView;
    NSLayoutConstraint *_containerViewWidthConstraint;
    NSLayoutConstraint *_containerViewHeightConstraint;
    NSView *_authPluginView;
}

@property(retain) NSView *authPluginView; // @synthesize authPluginView=_authPluginView;
@property int viewTypeInternal; // @synthesize viewTypeInternal=_viewTypeInternal;
@property(retain) NSLayoutConstraint *containerViewHeightConstraint; // @synthesize containerViewHeightConstraint=_containerViewHeightConstraint;
@property(retain) NSLayoutConstraint *containerViewWidthConstraint; // @synthesize containerViewWidthConstraint=_containerViewWidthConstraint;
@property(retain) LUI2View *containerView; // @synthesize containerView=_containerView;
@property(readonly) SFAuthorizationPluginView *authorizationPluginView; // @synthesize authorizationPluginView=_authorizationPluginView;
- (void)dealloc;
- (id)initWithAuthorizationPluginView:(id)arg1;
- (void)viewDidLoad;
- (id)viewForPopover;
- (void)setEnabled:(BOOL)arg1;
- (void)updateView;
- (void)setButton:(int)arg1 enabled:(BOOL)arg2;
@property int viewType;
- (void)_updateView;

@end

