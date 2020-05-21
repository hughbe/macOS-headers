//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FinderKit/FI_TViewController.h>

@class FI_TImageView, FI_TTextField, FI_TView, NSButton, NSView;

__attribute__((visibility("hidden")))
@interface FI_TICloudNoDocumentsViewController : FI_TViewController
{
    FI_TImageView *_cloudAndAppImageView;
    FI_TView *_cloudAndAppView;
    FI_TImageView *_cloudImageView;
    FI_TImageView *_appIconImageView;
    FI_TTextField *_appInfoTextFld;
    FI_TTextField *_explanationTextFld;
    NSButton *_upgradeButton;
    struct TNotificationCenterObserver _backingPropertiesChangedObserver;
    struct TFENode _target;
    _Bool _isUpgradeToICloudUI;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct TFENode target; // @synthesize target=_target;
- (void)upgradeToiCloudDrive:(id)arg1;
- (void)learnAboutICloudBtnPressed:(id)arg1;
@property(retain, nonatomic) NSView *dropTargetView;
- (id)nibName;
- (void)viewLoaded;
- (id)initWithTarget:(const struct TFENode *)arg1;

@end

