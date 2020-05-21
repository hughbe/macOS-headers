//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AOSUI/JSExport-Protocol.h>

@class JSValue, NSArray, NSDictionary, NSNumber, NSString;

@protocol InternetAccountExports <JSExport>
@property(readonly, nonatomic) NSString *numberOfDaysSinceIMExit;
@property(readonly, nonatomic) NSNumber *isIMChangingEnabledState;
@property(readonly, nonatomic) NSNumber *isIMEnabled;
@property(readonly, nonatomic) NSDictionary *workflow;
@property(retain, nonatomic, getter=icaButtonBar, setter=icaSetButtonBar:) JSValue *buttonBar;
@property(readonly, nonatomic) NSDictionary *account;
@property(readonly, nonatomic) NSDictionary *environment;
@property(readonly, nonatomic) unsigned long long protocolVersion;
- (void)showAllPreferences;
- (void)updateReachableEmails:(NSArray *)arg1 callback:(JSValue *)arg2;
- (void)setIMEnabled:(BOOL)arg1;
- (void)refreshFamilyCircle;
- (void)refreshPage;
- (void)getIcon:(NSString *)arg1 bundleIconName:(NSString *)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 callback:(JSValue *)arg5;
- (void)selectFile:(NSString *)arg1 inFolder:(NSString *)arg2;
- (void)openPrefPane:(NSString *)arg1 userInfo:(NSDictionary *)arg2;
- (void)updateName:(NSString *)arg1 lastName:(NSString *)arg2 middleName:(NSString *)arg3 firstNamePronounce:(NSString *)arg4 lastNamePronounce:(NSString *)arg5;
- (void)refreshDeviceListAndSelectOverview;
- (void)setDataclassState:(BOOL)arg1 dataclass:(NSString *)arg2;
- (void)getDataclassState:(NSString *)arg1 callback:(JSValue *)arg2;
- (void)openApplicationWithBundleID:(NSString *)arg1;
- (void)setAuthKitDataValue:(NSString *)arg1 forKey:(NSString *)arg2;
- (void)setRecoveryKeyState:(BOOL)arg1 callback:(JSValue *)arg2;
- (void)openAccountDetailsToSection:(NSString *)arg1;
- (void)openPurchaseStorageWithQueryParams:(JSValue *)arg1;
- (void)startCDPRepair:(JSValue *)arg1;
- (void)replaceRecoveryKey:(JSValue *)arg1;
- (void)getContactFullName:(NSString *)arg1 lastName:(NSString *)arg2 callback:(JSValue *)arg3;
- (void)skipAndContinueSignIn;
- (void)skipSignIn;
- (void)dismiss:(NSString *)arg1;
- (void)showTermsAndConditions:(NSArray *)arg1 callback:(JSValue *)arg2;
- (void)resetCompleted:(NSString *)arg1 password:(NSString *)arg2;
- (void)saveTOS:(NSString *)arg1 localizedName:(NSString *)arg2 content:(NSString *)arg3;
- (void)saveTOS:(NSString *)arg1 content:(NSString *)arg2;
- (void)setTermsConfirmDialogTitle:(JSValue *)arg1;
- (void)setAlternateButton:(JSValue *)arg1 callback:(JSValue *)arg2;
- (void)setRightNavButton:(JSValue *)arg1 callback:(JSValue *)arg2;
- (void)setLeftNavButton:(JSValue *)arg1 callback:(JSValue *)arg2;
- (void)setPageSubTitle:(JSValue *)arg1;
- (void)setNavTitle:(JSValue *)arg1;
- (void)runAppleIDOptOut:(JSValue *)arg1;
- (void)obtainAuthRight:(JSValue *)arg1;
- (void)presentGenerateVerificationCodeUI;
- (void)authenticateUser:(NSString *)arg1 password:(NSString *)arg2 title:(NSString *)arg3 message:(NSString *)arg4 defaultButtonTitle:(NSString *)arg5 cancelButtonTitle:(NSString *)arg6 shouldPromptForPasswordOnly:(BOOL)arg7 isEphemeral:(BOOL)arg8 callback:(JSValue *)arg9;
- (void)webClientHasLoaded;
- (void)showNativeAddFamilyMember;
- (void)validateLocalPasswordWithTitle:(NSString *)arg1 forcingReprompt:(BOOL)arg2 callback:(JSValue *)arg3;
- (void)validateLocalPassword:(JSValue *)arg1;
- (void)showSpinnerWithLabelOnNativeScreen:(NSString *)arg1;
- (void)openHelp:(NSString *)arg1;
- (void)openExternalURL:(NSString *)arg1;
- (void)getNASToken:(JSValue *)arg1;
- (void)reauthenticateAlwaysWithTitle:(NSString *)arg1 andMessage:(NSString *)arg2 callback:(JSValue *)arg3;
- (void)reauthenticateWithTitle:(NSString *)arg1 andMessage:(NSString *)arg2 callback:(JSValue *)arg3;
- (void)reauthenticateAlways:(NSString *)arg1 callback:(JSValue *)arg2;
- (void)reauthenticate:(NSString *)arg1 callback:(JSValue *)arg2;
- (void)getContactInfoNew:(NSString *)arg1 callback:(JSValue *)arg2 retrieveFromServer:(BOOL)arg3 preferServerVersionToLocal:(BOOL)arg4 dsid:(NSString *)arg5;
- (void)getContactInfo:(NSString *)arg1 callback:(JSValue *)arg2;
- (void)getPhotoForContact:(NSString *)arg1 orFirstName:(NSString *)arg2 orLastName:(NSString *)arg3 callback:(JSValue *)arg4;
- (void)exitWebView:(NSDictionary *)arg1;
- (void)endSheet:(NSDictionary *)arg1;
- (void)beginSheetWithContent:(NSString *)arg1 initialWidth:(unsigned long long)arg2 initialHeight:(unsigned long long)arg3 callback:(JSValue *)arg4 optionalContext:(NSDictionary *)arg5;
- (void)beginSheetWithURL:(NSString *)arg1 initialWidth:(unsigned long long)arg2 initialHeight:(unsigned long long)arg3 callback:(JSValue *)arg4 optionalContext:(NSDictionary *)arg5;
- (void)webClientDidUpdatePassword:(NSString *)arg1 newPassword:(NSString *)arg2 appleID:(NSString *)arg3;
- (void)refreshView:(NSString *)arg1 section:(NSString *)arg2;
- (void)goToView:(NSString *)arg1 section:(NSString *)arg2;
- (void)resizeToWidth:(unsigned long long)arg1 heigth:(unsigned long long)arg2 callback:(JSValue *)arg3;
- (void)showAlert:(NSDictionary *)arg1 callback:(JSValue *)arg2;
- (void)webClientIsReady;
- (void)log:(NSString *)arg1 message:(NSString *)arg2;

@optional
- (void)updateReachableEmails:(NSArray *)arg1 callback:(JSValue *)arg2 __JS_EXPORT_AS__updateReachableEmails:(id)arg3;
- (void)setIMEnabled:(BOOL)arg1 __JS_EXPORT_AS__setIMEnabled:(id)arg2;
- (void)getIcon:(NSString *)arg1 bundleIconName:(NSString *)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 callback:(JSValue *)arg5 __JS_EXPORT_AS__getIcon:(id)arg6;
- (void)selectFile:(NSString *)arg1 inFolder:(NSString *)arg2 __JS_EXPORT_AS__selectFile:(id)arg3;
- (void)openPrefPane:(NSString *)arg1 userInfo:(NSDictionary *)arg2 __JS_EXPORT_AS__openPrefPane:(id)arg3;
- (void)updateName:(NSString *)arg1 lastName:(NSString *)arg2 middleName:(NSString *)arg3 firstNamePronounce:(NSString *)arg4 lastNamePronounce:(NSString *)arg5 __JS_EXPORT_AS__updateName:(id)arg6;
- (void)setDataclassState:(BOOL)arg1 dataclass:(NSString *)arg2 __JS_EXPORT_AS__setDataclassState:(id)arg3;
- (void)getDataclassState:(NSString *)arg1 callback:(JSValue *)arg2 __JS_EXPORT_AS__getDataclassState:(id)arg3;
- (void)openApplicationWithBundleID:(NSString *)arg1 __JS_EXPORT_AS__openApplicationWithBundleID:(id)arg2;
- (void)setAuthKitDataValue:(NSString *)arg1 forKey:(NSString *)arg2 __JS_EXPORT_AS__setAuthKitDataValue:(id)arg3;
- (void)openAccountDetailsToSection:(NSString *)arg1 __JS_EXPORT_AS__openAccountDetailsToSection:(id)arg2;
- (void)openPurchaseStorageWithQueryParams:(JSValue *)arg1 __JS_EXPORT_AS__openPurchaseStorageWithQueryParams:(id)arg2;
- (void)startCDPRepair:(JSValue *)arg1 __JS_EXPORT_AS__startCDPRepair:(id)arg2;
- (void)replaceRecoveryKey:(JSValue *)arg1 __JS_EXPORT_AS__replaceRecoveryKey:(id)arg2;
- (void)getContactFullName:(NSString *)arg1 lastName:(NSString *)arg2 callback:(JSValue *)arg3 __JS_EXPORT_AS__getContactFullName:(id)arg4;
- (void)dismiss:(NSString *)arg1 __JS_EXPORT_AS__dismiss:(id)arg2;
- (void)showTermsAndConditions:(NSArray *)arg1 callback:(JSValue *)arg2 __JS_EXPORT_AS__showTermsAndConditions:(id)arg3;
- (void)resetCompleted:(NSString *)arg1 password:(NSString *)arg2 __JS_EXPORT_AS__resetCompleted:(id)arg3;
- (void)saveTOS:(NSString *)arg1 localizedName:(NSString *)arg2 content:(NSString *)arg3 __JS_EXPORT_AS__saveTOSWithName:(id)arg4;
- (void)saveTOS:(NSString *)arg1 content:(NSString *)arg2 __JS_EXPORT_AS__saveTOS:(id)arg3;
- (void)setTermsConfirmDialogTitle:(JSValue *)arg1 __JS_EXPORT_AS__setTermsConfirmDialogTitle:(id)arg2;
- (void)setAlternateButton:(JSValue *)arg1 callback:(JSValue *)arg2 __JS_EXPORT_AS__setAlternateButton:(id)arg3;
- (void)setRightNavButton:(JSValue *)arg1 callback:(JSValue *)arg2 __JS_EXPORT_AS__setRightNavButton:(id)arg3;
- (void)setLeftNavButton:(JSValue *)arg1 callback:(JSValue *)arg2 __JS_EXPORT_AS__setLeftNavButton:(id)arg3;
- (void)setPageSubTitle:(JSValue *)arg1 __JS_EXPORT_AS__setPageSubTitle:(id)arg2;
- (void)setNavTitle:(JSValue *)arg1 __JS_EXPORT_AS__setNavTitle:(id)arg2;
- (void)runAppleIDOptOut:(JSValue *)arg1 __JS_EXPORT_AS__runAppleIDOptOut:(id)arg2;
- (void)obtainAuthRight:(JSValue *)arg1 __JS_EXPORT_AS__obtainAuthRight:(id)arg2;
- (void)authenticateUser:(NSString *)arg1 password:(NSString *)arg2 title:(NSString *)arg3 message:(NSString *)arg4 defaultButtonTitle:(NSString *)arg5 cancelButtonTitle:(NSString *)arg6 shouldPromptForPasswordOnly:(BOOL)arg7 isEphemeral:(BOOL)arg8 callback:(JSValue *)arg9 __JS_EXPORT_AS__authenticateUser:(id)arg10;
- (void)validateLocalPasswordWithTitle:(NSString *)arg1 forcingReprompt:(BOOL)arg2 callback:(JSValue *)arg3 __JS_EXPORT_AS__validateLocalPasswordWithTitle:(id)arg4;
- (void)validateLocalPassword:(JSValue *)arg1 __JS_EXPORT_AS__validateLocalPassword:(id)arg2;
- (void)showSpinnerWithLabelOnNativeScreen:(NSString *)arg1 __JS_EXPORT_AS__showSpinnerWithLabelOnNativeScreen:(id)arg2;
- (void)openHelp:(NSString *)arg1 __JS_EXPORT_AS__openHelp:(id)arg2;
- (void)openExternalURL:(NSString *)arg1 __JS_EXPORT_AS__openExternalURL:(id)arg2;
- (void)getNASToken:(JSValue *)arg1 __JS_EXPORT_AS__getNASToken:(id)arg2;
- (void)reauthenticateAlwaysWithTitle:(NSString *)arg1 andMessage:(NSString *)arg2 callback:(JSValue *)arg3 __JS_EXPORT_AS__reauthenticateAlwaysWithTitle:(id)arg4;
- (void)reauthenticateWithTitle:(NSString *)arg1 andMessage:(NSString *)arg2 callback:(JSValue *)arg3 __JS_EXPORT_AS__reauthenticateWithTitle:(id)arg4;
- (void)reauthenticateAlways:(NSString *)arg1 callback:(JSValue *)arg2 __JS_EXPORT_AS__reauthenticateAlways:(id)arg3;
- (void)reauthenticate:(NSString *)arg1 callback:(JSValue *)arg2 __JS_EXPORT_AS__reauthenticate:(id)arg3;
- (void)getContactInfoNew:(NSString *)arg1 callback:(JSValue *)arg2 retrieveFromServer:(BOOL)arg3 preferServerVersionToLocal:(BOOL)arg4 dsid:(NSString *)arg5 __JS_EXPORT_AS__getContactInfoNew:(id)arg6;
- (void)getContactInfo:(NSString *)arg1 callback:(JSValue *)arg2 __JS_EXPORT_AS__getContactInfo:(id)arg3;
- (void)getPhotoForContact:(NSString *)arg1 orFirstName:(NSString *)arg2 orLastName:(NSString *)arg3 callback:(JSValue *)arg4 __JS_EXPORT_AS__getPhotoForContact:(id)arg5;
- (void)exitWebView:(NSDictionary *)arg1 __JS_EXPORT_AS__exit:(id)arg2;
- (void)endSheet:(NSDictionary *)arg1 __JS_EXPORT_AS__endSheet:(id)arg2;
- (void)beginSheetWithContent:(NSString *)arg1 initialWidth:(unsigned long long)arg2 initialHeight:(unsigned long long)arg3 callback:(JSValue *)arg4 optionalContext:(NSDictionary *)arg5 __JS_EXPORT_AS__beginSheetWithContent:(id)arg6;
- (void)beginSheetWithURL:(NSString *)arg1 initialWidth:(unsigned long long)arg2 initialHeight:(unsigned long long)arg3 callback:(JSValue *)arg4 optionalContext:(NSDictionary *)arg5 __JS_EXPORT_AS__beginSheetWithURL:(id)arg6;
- (void)webClientDidUpdatePassword:(NSString *)arg1 newPassword:(NSString *)arg2 appleID:(NSString *)arg3 __JS_EXPORT_AS__webClientDidUpdatePassword:(id)arg4;
- (void)refreshView:(NSString *)arg1 section:(NSString *)arg2 __JS_EXPORT_AS__refreshView:(id)arg3;
- (void)goToView:(NSString *)arg1 section:(NSString *)arg2 __JS_EXPORT_AS__goToView:(id)arg3;
- (void)resizeToWidth:(unsigned long long)arg1 heigth:(unsigned long long)arg2 callback:(JSValue *)arg3 __JS_EXPORT_AS__resize:(id)arg4;
- (void)showAlert:(NSDictionary *)arg1 callback:(JSValue *)arg2 __JS_EXPORT_AS__showAlert:(id)arg3;
- (void)log:(NSString *)arg1 message:(NSString *)arg2 __JS_EXPORT_AS__log:(id)arg3;
@end

