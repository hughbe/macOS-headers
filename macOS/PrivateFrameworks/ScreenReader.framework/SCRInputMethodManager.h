//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCRApplication, SCRElement;

__attribute__((visibility("hidden")))
@interface SCRInputMethodManager : NSObject
{
    SCRApplication *_currentApplication;
    SCRElement *__currentInputMethodWindow;
}

+ (id)shared;
- (void).cxx_destruct;
@property(retain, nonatomic) SCRElement *_currentInputMethodWindow; // @synthesize _currentInputMethodWindow=__currentInputMethodWindow;
@property(retain, nonatomic) SCRApplication *currentApplication; // @synthesize currentApplication=_currentApplication;
- (void)_delayedSendingRequest:(id)arg1;
- (void)_handleListSelectionChangeForUIElement:(id)arg1;
- (void)_inputMethodSelectionChanged:(id)arg1;
- (id)_valueStringForUIElement:(id)arg1;
- (BOOL)isShowingCandidateWindow;
- (void)handleCandidateWindowHidden;
- (void)handleCandidateWindowShown:(id)arg1 forApplication:(id)arg2;
- (BOOL)canActAsObserverTarget;

@end

