//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriUI/AFUISiriSessionDelegate-Protocol.h>
#import <SiriUI/AFUISpeechSynthesisDelegate-Protocol.h>
#import <SiriUI/NSObject-Protocol.h>

@class NSDictionary, NSString, SiriUIRequestOptions;
@protocol AFUISiriSession, AFUISpeechSynthesis;

@protocol SVSSiriViewControllerServing <NSObject, AFUISiriSessionDelegate, AFUISpeechSynthesisDelegate>
- (void)didChangeWindowHeight:(BOOL)arg1;
- (double)contentHeight;
- (void)didPresentCreateBugTemplateWithConfirm:(BOOL)arg1 values:(NSDictionary *)arg2;
- (void)didReceiveReportBugAction;
- (void)didReceiveHelpAction;
- (void)siriDidDeactivate;
- (void)showPresentationWithIdentifier:(NSString *)arg1 properties:(NSDictionary *)arg2;
- (void)setSpeechSynthesis:(id <AFUISpeechSynthesis>)arg1;
- (void)setSession:(id <AFUISiriSession>)arg1;
- (void)setRequestOptions:(SiriUIRequestOptions *)arg1;
- (void)siriDidActivateFromSource:(long long)arg1;
- (void)siriWillActivateFromSource:(long long)arg1;
@end

