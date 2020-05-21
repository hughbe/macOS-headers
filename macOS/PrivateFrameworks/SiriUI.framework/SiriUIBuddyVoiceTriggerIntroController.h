//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <SiriUI/SiriUIBuddySubviewController-Protocol.h>

@class NSButton, SiriUIBuddyController;

__attribute__((visibility("hidden")))
@interface SiriUIBuddyVoiceTriggerIntroController : NSViewController <SiriUIBuddySubviewController>
{
    SiriUIBuddyController *_parentController;
    NSButton *_skipButton;
}

- (void).cxx_destruct;
@property __weak NSButton *skipButton; // @synthesize skipButton=_skipButton;
@property __weak SiriUIBuddyController *parentController; // @synthesize parentController=_parentController;
- (void)didCloseLid;
- (void)didOpenLid;
- (void)updateViewForClamshellMode:(BOOL)arg1;
@property(readonly) BOOL shouldShowPane;
- (void)skipVoiceTrigger:(id)arg1;
- (void)viewWillDisappear;
- (void)viewWillAppear;
- (void)loadView;
- (id)initWithParentController:(id)arg1;

@end

