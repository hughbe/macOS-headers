//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <Safari/PerSitePreferencesPopoverItem-Protocol.h>

@class NSButton, NSString, WBSPerSitePreference;
@protocol WBSPerSitePreferenceManager;

__attribute__((visibility("hidden")))
@interface PerSitePreferenceCheckBoxItemViewController : NSViewController <PerSitePreferencesPopoverItem>
{
    WBSPerSitePreference *_perSitePreference;
    id <WBSPerSitePreferenceManager> _perSitePreferenceManager;
    id _onValue;
    id _offValue;
    NSString *_domain;
    NSButton *_switchButton;
    NSString *_title;
}

- (void).cxx_destruct;
- (void)_togglePreferenceValue:(id)arg1;
- (void)_updateCheckBoxStateForDomain:(id)arg1;
- (void)updateStateForDomain:(id)arg1;
- (void)viewWillAppear;
- (void)loadView;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithPreference:(id)arg1 manager:(id)arg2 title:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

