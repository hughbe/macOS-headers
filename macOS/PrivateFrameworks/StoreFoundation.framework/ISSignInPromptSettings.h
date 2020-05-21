//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreFoundation/NSSecureCoding-Protocol.h>

@class ISAuthenticationContext, ISStoreClient, NSNumber, NSString, NSURL, NSWindow;

@interface ISSignInPromptSettings : NSObject <NSSecureCoding>
{
    NSString *titleString;
    NSString *messageString;
    NSString *defaultButtonString;
    NSString *alternateButtonString;
    NSString *otherButtonString;
    NSString *suppressionCheckboxString;
    NSNumber *suppressionCheckboxState;
    NSURL *authenticateAccountURL;
    ISAuthenticationContext *context;
    ISStoreClient *storeClient;
    BOOL needsDedicatedUI;
    BOOL shouldUseAppStoreUI;
    BOOL forceActivate;
    NSWindow *_sheetWindow;
}

+ (BOOL)supportsSecureCoding;
+ (id)settingsWithTitle:(id)arg1 message:(id)arg2 defaultButton:(id)arg3 alternateButton:(id)arg4 otherButton:(id)arg5 suppressionCheckbox:(id)arg6 suppressionCheckboxState:(id)arg7 authenticateAccountURL:(id)arg8 authenticationContext:(id)arg9 needsDedicatedUI:(BOOL)arg10 storeClient:(id)arg11;
+ (id)settingsWithTitle:(id)arg1 message:(id)arg2 defaultButton:(id)arg3 alternateButton:(id)arg4 otherButton:(id)arg5 suppressionCheckbox:(id)arg6 suppressionCheckboxState:(id)arg7 authenticateAccountURL:(id)arg8 authenticationContext:(id)arg9 shouldUseAppStoreUI:(BOOL)arg10 storeClient:(id)arg11;
+ (id)settingsWithTitle:(id)arg1 message:(id)arg2 defaultButton:(id)arg3 alternateButton:(id)arg4 otherButton:(id)arg5 suppressionCheckbox:(id)arg6 suppressionCheckboxState:(id)arg7 authenticateAccountURL:(id)arg8 authenticationContext:(id)arg9 storeClient:(id)arg10;
- (void).cxx_destruct;
@property(retain) NSWindow *sheetWindow; // @synthesize sheetWindow=_sheetWindow;
@property(retain) ISStoreClient *storeClient; // @synthesize storeClient;
@property BOOL forceActivate; // @synthesize forceActivate;
@property BOOL shouldUseAppStoreUI; // @synthesize shouldUseAppStoreUI;
@property BOOL needsDedicatedUI; // @synthesize needsDedicatedUI;
@property(retain) ISAuthenticationContext *context; // @synthesize context;
@property(retain) NSURL *authenticateAccountURL; // @synthesize authenticateAccountURL;
@property(retain) NSNumber *suppressionCheckboxState; // @synthesize suppressionCheckboxState;
@property(retain) NSString *suppressionCheckboxString; // @synthesize suppressionCheckboxString;
@property(retain) NSString *otherButtonString; // @synthesize otherButtonString;
@property(retain) NSString *alternateButtonString; // @synthesize alternateButtonString;
@property(retain) NSString *defaultButtonString; // @synthesize defaultButtonString;
@property(retain) NSString *messageString; // @synthesize messageString;
@property(retain) NSString *titleString; // @synthesize titleString;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)_shortDescriptionForString:(id)arg1;

@end

