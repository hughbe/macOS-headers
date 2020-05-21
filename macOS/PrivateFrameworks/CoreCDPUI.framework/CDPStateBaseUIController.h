//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreCDPUI/CDPStateUIProvider-Protocol.h>

@class CDPEnrollViewController, CDPOption, CDPRecoveryKeySheetController, NSImage, NSString, NSView, NSWindow;

@interface CDPStateBaseUIController : NSObject <CDPStateUIProvider>
{
    BOOL _viewBasedUI;
    NSWindow *_parentWindow;
    NSImage *_displayImage;
    CDPEnrollViewController *_cdpViewController;
    NSView *_hostView;
    NSView *_iCDPContainerView;
    NSView *_iCDPContentView;
    CDPRecoveryKeySheetController *_recoveryKeyController;
    CDPOption *_cdpOptionViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CDPOption *cdpOptionViewController; // @synthesize cdpOptionViewController=_cdpOptionViewController;
@property(retain, nonatomic) CDPRecoveryKeySheetController *recoveryKeyController; // @synthesize recoveryKeyController=_recoveryKeyController;
@property(retain, nonatomic) NSView *iCDPContentView; // @synthesize iCDPContentView=_iCDPContentView;
@property(retain, nonatomic) NSView *iCDPContainerView; // @synthesize iCDPContainerView=_iCDPContainerView;
@property(retain, nonatomic) NSView *hostView; // @synthesize hostView=_hostView;
@property(nonatomic) BOOL viewBasedUI; // @synthesize viewBasedUI=_viewBasedUI;
@property(retain, nonatomic) CDPEnrollViewController *cdpViewController; // @synthesize cdpViewController=_cdpViewController;
@property(retain, nonatomic) NSImage *displayImage; // @synthesize displayImage=_displayImage;
@property(retain, nonatomic) NSWindow *parentWindow; // @synthesize parentWindow=_parentWindow;
- (void)generateNewRecoveryKey:(CDUnknownBlockType)arg1;
- (void)cdpContext:(id)arg1 promptForRecoveryKeyWithValidator:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cdpContext:(id)arg1 presentRecoveryKeyWithValidator:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cdpContext:(id)arg1 promptForInteractiveAuthenticationWithCompletion:(CDUnknownBlockType)arg2;
- (void)cdpContext:(id)arg1 showError:(id)arg2 withDefaultIndex:(long long)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)cdpContext:(id)arg1 showError:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)cdpContext:(id)arg1 beginRemoteApprovalWithValidator:(id)arg2;
- (void)cdpContext:(id)arg1 promptForAdoptionOfMultipleICSC:(CDUnknownBlockType)arg2;
- (void)cdpContext:(id)arg1 promptForICSCWithIsNumeric:(BOOL)arg2 numericLength:(id)arg3 isRandom:(BOOL)arg4 validator:(id)arg5;
- (void)cdpContext:(id)arg1 promptForRemoteSecretWithDevices:(id)arg2 offeringRemoteApproval:(BOOL)arg3 validator:(id)arg4;
- (void)cdpContext:(id)arg1 promptForLocalSecretWithCompletion:(CDUnknownBlockType)arg2;
- (void)endCDPView;
- (void)changeView:(id)arg1;
- (id)initWithParentWindow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

