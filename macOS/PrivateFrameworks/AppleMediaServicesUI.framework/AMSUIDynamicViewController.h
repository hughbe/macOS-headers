//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <AppleMediaServicesUI/AMSBagConsumer-Protocol.h>

@class ACAccount, AMSProcessInfo, NSDictionary, NSString;
@protocol AMSBagProtocol;

@interface AMSUIDynamicViewController : NSViewController <AMSBagConsumer>
{
    AMSUIDynamicViewController *_dynamicViewController;
}

+ (id)bagSubProfileVersion;
+ (id)bagSubProfile;
+ (id)bagKeySet;
- (void).cxx_destruct;
@property(readonly) AMSUIDynamicViewController *dynamicViewController; // @synthesize dynamicViewController=_dynamicViewController;
- (void)_setupChildViewController:(id)arg1;
- (void)_setup;
- (void)viewWillLayout;
- (void)viewDidLoad;
- (void)setTitle:(id)arg1;
- (id)title;
@property(retain) NSDictionary *metricsOverlay;
@property(retain) AMSProcessInfo *clientInfo;
@property(retain) id <AMSBagProtocol> bag;
@property(retain) ACAccount *account;
- (id)initWithBag:(id)arg1 javaScriptURL:(id)arg2;
- (id)initWithBag:(id)arg1 javaScriptBagValue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

