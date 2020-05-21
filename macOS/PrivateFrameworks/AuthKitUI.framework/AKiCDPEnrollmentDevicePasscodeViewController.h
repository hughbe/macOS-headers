//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <AuthKitUI/AKiCSCEntryViewDelegate-Protocol.h>
#import <AuthKitUI/NSTableViewDelegate-Protocol.h>

@class AKiCDPDeviceValidationFlowViewController, AKiCDPValidationDevice, AKiCSCEntryView, NSString, NSView;

@interface AKiCDPEnrollmentDevicePasscodeViewController : NSViewController <AKiCSCEntryViewDelegate, NSTableViewDelegate>
{
    BOOL _usesClientSpecifiedDevice;
    BOOL _showSpinner;
    BOOL _forgotAllPasswordsEnabled;
    NSView *_passcodePlaceholderView;
    AKiCDPValidationDevice *_selectedDevice;
    NSString *_errorString;
    AKiCDPDeviceValidationFlowViewController *_flowController;
    AKiCSCEntryView *_icscEntryView;
}

- (void).cxx_destruct;
@property(retain) AKiCSCEntryView *icscEntryView; // @synthesize icscEntryView=_icscEntryView;
@property AKiCDPDeviceValidationFlowViewController *flowController; // @synthesize flowController=_flowController;
@property BOOL forgotAllPasswordsEnabled; // @synthesize forgotAllPasswordsEnabled=_forgotAllPasswordsEnabled;
@property(retain) NSString *errorString; // @synthesize errorString=_errorString;
@property BOOL showSpinner; // @synthesize showSpinner=_showSpinner;
@property(retain) AKiCDPValidationDevice *selectedDevice; // @synthesize selectedDevice=_selectedDevice;
@property BOOL usesClientSpecifiedDevice; // @synthesize usesClientSpecifiedDevice=_usesClientSpecifiedDevice;
@property NSView *passcodePlaceholderView; // @synthesize passcodePlaceholderView=_passcodePlaceholderView;
- (void)didEnterCode:(id)arg1;
- (void)codeDidChange;
- (void)validateDevice;
- (id)secondAlternateViewIdentifier;
- (id)alternateViewIdentifier;
@property(readonly) NSString *enterSecretString;
@property(readonly) NSString *forgotPasscodeTitle;
- (void)useAnotherDevicePressed:(id)arg1;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (BOOL)allowBackwardsNavigation;
- (id)initWithFlowController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

