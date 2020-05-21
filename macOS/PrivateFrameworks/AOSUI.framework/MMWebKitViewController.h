//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AOSUI/MMWebKitControllerDelegate-Protocol.h>

@class MMWebKitController, NSDictionary, NSImageView, NSMutableDictionary, NSNumber, NSProgressIndicator, NSString, NSTextField, NSView, NSWindow;
@protocol MMWebKitViewControllerDelegate;

@interface MMWebKitViewController : NSObject <MMWebKitControllerDelegate>
{
    MMWebKitController *_webKitController;
    SEL _classCreationSelector;
    NSString *_accountID;
    NSString *_password;
    NSMutableDictionary *_authenticationResults;
    NSNumber *_librarySize;
    unsigned long long _mmWebKitViewType;
    NSMutableDictionary *_webKitContext;
    NSMutableDictionary *_storageContext;
    struct {
        unsigned int delegateDidCancel:1;
        unsigned int delegateDidSucceed:1;
        unsigned int delegateDidFailLoading:1;
        unsigned int delegateDidFinishLoading:1;
        unsigned int delegateDidDismiss:1;
        unsigned int delegateDidReceiveResponse:1;
        unsigned int padding:3;
    } _delegateFlags;
    id <MMWebKitViewControllerDelegate> _delegate;
    NSTextField *_loadingText;
    NSProgressIndicator *_loadingProgress;
    NSView *_loadingView;
    NSImageView *_serverErrorImageView;
    NSTextField *_serverErrorTitle;
    NSView *_serverErrorView;
    NSView *_contentView;
    NSWindow *_window;
    NSWindow *_parentWindow;
}

- (void).cxx_destruct;
@property(nonatomic) NSWindow *parentWindow; // @synthesize parentWindow=_parentWindow;
@property(copy, nonatomic) NSDictionary *storageContext; // @synthesize storageContext=_storageContext;
@property(nonatomic) __weak NSWindow *window; // @synthesize window=_window;
@property(nonatomic) __weak NSView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) unsigned long long mmWebKitViewType; // @synthesize mmWebKitViewType=_mmWebKitViewType;
@property(retain, nonatomic) NSView *serverErrorView; // @synthesize serverErrorView=_serverErrorView;
@property(nonatomic) __weak NSTextField *serverErrorTitle; // @synthesize serverErrorTitle=_serverErrorTitle;
@property(nonatomic) __weak NSImageView *serverErrorImageView; // @synthesize serverErrorImageView=_serverErrorImageView;
@property(retain, nonatomic) NSMutableDictionary *webKitContext; // @synthesize webKitContext=_webKitContext;
@property(nonatomic) __weak NSView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) __weak NSProgressIndicator *loadingProgress; // @synthesize loadingProgress=_loadingProgress;
@property(nonatomic) __weak NSTextField *loadingText; // @synthesize loadingText=_loadingText;
@property(retain, nonatomic) NSNumber *librarySize; // @synthesize librarySize=_librarySize;
@property(retain, nonatomic) NSMutableDictionary *authenticationResults; // @synthesize authenticationResults=_authenticationResults;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
@property(retain, nonatomic) MMWebKitController *webKitController; // @synthesize webKitController=_webKitController;
@property(nonatomic) SEL classCreationSelector; // @synthesize classCreationSelector=_classCreationSelector;
@property(nonatomic) id <MMWebKitViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (struct OpaqueJSClass *)_createTOSMailNotesClass;
- (struct OpaqueJSClass *)_createQuotaClass;
- (struct OpaqueJSClass *)_createAccountCreationClass;
- (id)mmWebKitControllerWindow;
- (void)mmWebKitControllerDidReceiveResponse:(id)arg1 didReceiveResponse:(id)arg2;
- (void)mmWebKitControllerDidFinishLoading:(id)arg1;
- (void)mmWebKitControllerDidFailLoading:(id)arg1 error:(id)arg2;
- (void)mmWebKitControllerDidSucceed:(id)arg1;
- (void)mmWebKitControllerDidCancel:(id)arg1;
- (void)mmWebKitControllerConfigureForFrame:(id)arg1;
- (void)mmWebView:(id)arg1 setFrame:(struct CGRect)arg2;
- (void)_window:(id)arg1 setFrame:(struct CGRect)arg2;
- (void)_hideLoadingView:(BOOL)arg1;
- (void)okButton:(id)arg1;
- (void)handleLoadFailureWithError:(id)arg1;
- (void)transitionToServerErrorViewWithTitle:(id)arg1 image:(id)arg2 animated:(BOOL)arg3;
- (void)transitionToWebViewAnimated:(BOOL)arg1;
- (void)transitionToLoadingViewAnimated:(BOOL)arg1;
- (BOOL)isShowingSheet;
- (void)closeModalSheet;
- (void)beginModalDialogWithParentWindow:(id)arg1 shouldNest:(BOOL)arg2;
- (void)beginModalSheetForWindow:(id)arg1;
- (void)loadURLRequest:(id)arg1;
- (id)initForStorageUpgradeWithAccountID:(id)arg1;
- (id)initForStorageManagementWithAccountID:(id)arg1;
- (id)initForTermsOfServiceWithAccountID:(id)arg1 password:(id)arg2 authenticationResults:(id)arg3;
- (id)initForNotesAccountCreationWithAccountID:(id)arg1;
- (id)initForMailAccountCreationWithAccountID:(id)arg1;
- (id)initForAccountCreation;
- (void)dealloc;
- (id)initInView:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

