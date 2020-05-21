//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSButton, NSMatrix, NSProgressIndicator, NSString, NSTextField, NSWindow;
@protocol SSSessionSelectViewControllerDelegate><SSConnectionPromptObserver;

@interface SSSessionSelectViewController : NSViewController
{
    NSString *displayIsBusyDescriptiveText;
    NSString *logIntoYourAccountRadioTitle;
    NSString *authenticatingUser;
    NSString *machineName;
    NSString *userOnMainDisplay;
    NSWindow *waitingForAnswerSheet;
    NSProgressIndicator *waitingForAnswerProgress;
    NSButton *waitingButton;
    NSTextField *waitingMessageTextField;
    NSMatrix *askOrLoginRadioButtons;
    id <SSSessionSelectViewControllerDelegate><SSConnectionPromptObserver> delegate;
    NSString *_mainDisplayButtonText;
    NSString *_shareDisplayInformativeText;
}

+ (id)keyPathsForValuesAffectingLoginUserNameText;
+ (id)keyPathsForValuesAffectingMainText;
+ (id)keyPathsForValuesAffectingVirtualSessionInformativeText;
+ (id)keyPathsForValuesAffectingShareDisplayInformativeText;
@property(copy) NSString *shareDisplayInformativeText; // @synthesize shareDisplayInformativeText=_shareDisplayInformativeText;
@property(copy) NSString *mainDisplayButtonText; // @synthesize mainDisplayButtonText=_mainDisplayButtonText;
@property id <SSSessionSelectViewControllerDelegate><SSConnectionPromptObserver> delegate; // @synthesize delegate;
@property NSMatrix *askOrLoginRadioButtons; // @synthesize askOrLoginRadioButtons;
@property NSTextField *waitingMessageTextField; // @synthesize waitingMessageTextField;
@property NSButton *waitingButton; // @synthesize waitingButton;
@property NSProgressIndicator *waitingForAnswerProgress; // @synthesize waitingForAnswerProgress;
@property NSWindow *waitingForAnswerSheet; // @synthesize waitingForAnswerSheet;
@property(copy) NSString *userOnMainDisplay; // @synthesize userOnMainDisplay;
@property(copy) NSString *machineName; // @synthesize machineName;
@property(copy) NSString *authenticatingUser; // @synthesize authenticatingUser;
- (void)setAskOrShareText:(BOOL)arg1;
@property(readonly) NSString *displayIsBusyDescriptiveText; // @synthesize displayIsBusyDescriptiveText;
@property(readonly) NSString *logIntoYourAccountRadioTitle; // @synthesize logIntoYourAccountRadioTitle;
- (id)loginUserNameText;
- (void)didEndSheet:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)showUserDeclined;
- (void)showWaitingForAnswerSheet;
- (void)acknowledgeUserDeclinedPressed:(id)arg1;
- (void)stopWaitingButtonPressed:(id)arg1;
- (void)backButtonClicked:(id)arg1;
- (void)shareScreenButtonClicked:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

