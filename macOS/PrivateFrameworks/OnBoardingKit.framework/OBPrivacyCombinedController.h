//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <OnBoardingKit/OBPrivacyPresenting-Protocol.h>

@class NSString;

@interface OBPrivacyCombinedController : NSWindowController <OBPrivacyPresenting>
{
    BOOL _allowsOpeningSafari;
    BOOL _presentedFromPrivacyPane;
    NSString *_displayLanguage;
}

+ (void)presentPrivacyCombinedControllerOnWindow:(id)arg1 identifiers:(id)arg2 dismissHandler:(CDUnknownBlockType)arg3;
+ (void)presentPrivacyCombinedControllerOnWindow:(id)arg1 dismissHandler:(CDUnknownBlockType)arg2;
+ (id)new;
- (void).cxx_destruct;
@property BOOL presentedFromPrivacyPane; // @synthesize presentedFromPrivacyPane=_presentedFromPrivacyPane;
@property(retain) NSString *displayLanguage; // @synthesize displayLanguage=_displayLanguage;
@property BOOL allowsOpeningSafari; // @synthesize allowsOpeningSafari=_allowsOpeningSafari;
- (void)reloadWindow;
- (void)prepareToPresent;
- (id)initWithIdentifiers:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

