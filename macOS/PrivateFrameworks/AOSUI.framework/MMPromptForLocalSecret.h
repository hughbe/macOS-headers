//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AOSUI/IASLocalSecretDelegate-Protocol.h>

@class IASLocalSecretPrompt, NSString;

@interface MMPromptForLocalSecret : NSObject <IASLocalSecretDelegate>
{
    IASLocalSecretPrompt *_promptController;
}

- (void).cxx_destruct;
- (id)userFullName;
- (void)secretEntered:(id)arg1;
- (void)secretEntryCancelled;
- (void)getLocalSecretWithWindow:(id)arg1 withTitle:(id)arg2 withMessage:(id)arg3 withSheetIcon:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (void)getLocalSecretWithWindow:(id)arg1 withTitle:(id)arg2 withMessage:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)getLocalSecretWithWindow:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

