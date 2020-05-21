//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriUI/NSObject-Protocol.h>

@class AFUserUtteranceSelectionResults, AceObject, NSArray, NSBundle, NSIndexPath, NSString, NSURL, NSUUID, NSView, NSViewController, SASSpeechRecognized, SVSTranscriptStackViewController, SiriUICard;
@protocol SAAceCommand;

@protocol SVSTranscriptStackViewControllerDelegate <NSObject>
- (void)transcriptStackViewController:(SVSTranscriptStackViewController *)arg1 stashSnippetControllerCard:(SiriUICard *)arg2;
- (void)transcriptStackViewController:(SVSTranscriptStackViewController *)arg1 didShowSnippetWithIdentifier:(NSUUID *)arg2 metricsContext:(NSString *)arg3 forInterval:(double)arg4;
- (void)transcriptStackViewController:(SVSTranscriptStackViewController *)arg1 didScrollForInterval:(double)arg2;
- (void)transcriptStackViewController:(SVSTranscriptStackViewController *)arg1 didEditSpeechRecognized:(SASSpeechRecognized *)arg2 forInterval:(double)arg3;
- (void)transcriptStackViewController:(SVSTranscriptStackViewController *)arg1 shouldPresentPicker:(NSViewController *)arg2 completion:(void (^)(BOOL))arg3;
- (void)transcriptStackViewController:(SVSTranscriptStackViewController *)arg1 willDismissViewController:(NSViewController *)arg2;
- (void)transcriptStackViewController:(SVSTranscriptStackViewController *)arg1 willPresentViewController:(NSViewController *)arg2;
- (void)transcriptStackViewController:(SVSTranscriptStackViewController *)arg1 setStatusViewHidden:(BOOL)arg2;
- (BOOL)transcriptStackViewControllerShouldPreventUserInteraction:(SVSTranscriptStackViewController *)arg1;
- (void)transcriptStackViewControllerDidPunchout;
- (void)transcriptStackViewController:(SVSTranscriptStackViewController *)arg1 openURL:(NSURL *)arg2 conversationItemIdentifier:(NSUUID *)arg3 completion:(void (^)(BOOL))arg4;
- (NSBundle *)effectiveCoreLocationBundleForTranscriptStackViewController:(SVSTranscriptStackViewController *)arg1;
- (void)transcriptStackViewController:(SVSTranscriptStackViewController *)arg1 synthesizeSpeechWithPhoneticText:(NSString *)arg2 completion:(void (^)(void))arg3;
- (void)stopSpeakingForTranscriptStackViewController:(SVSTranscriptStackViewController *)arg1;
- (void)transcriptStackViewController:(SVSTranscriptStackViewController *)arg1 speakText:(NSString *)arg2 isPhonetic:(BOOL)arg3 completion:(void (^)(void))arg4;
- (void)cancelRequestForTranscriptStackViewController:(SVSTranscriptStackViewController *)arg1;
- (void)transcriptStackViewController:(SVSTranscriptStackViewController *)arg1 performAceCommand:(AceObject<SAAceCommand> *)arg2 conversationItemIdentifier:(NSUUID *)arg3 completion:(void (^)(BOOL))arg4;
- (void)transcriptStackViewController:(SVSTranscriptStackViewController *)arg1 didCorrectRecognition:(NSString *)arg2 correctionIdentifier:(id)arg3 forItemAtIndexPath:(NSIndexPath *)arg4 userSelectionResults:(AFUserUtteranceSelectionResults *)arg5;
- (void)transcriptStackViewControllerWillBeginEditing:(SVSTranscriptStackViewController *)arg1;
- (void)transcriptStackViewController:(SVSTranscriptStackViewController *)arg1 didPresentConversationItemsWithIdentifiers:(NSArray *)arg2;
- (void)transcriptStackViewControllerDidChangeContentHeight:(SVSTranscriptStackViewController *)arg1;
- (void)transcriptStackViewController:(SVSTranscriptStackViewController *)arg1 didHideVibrantView:(NSView *)arg2;
- (void)transcriptStackViewControllerDidShowHelp:(SVSTranscriptStackViewController *)arg1;
- (BOOL)transcriptStackViewControllerCanShowHelp:(SVSTranscriptStackViewController *)arg1;
- (void)showHelpForTranscriptStackViewController:(SVSTranscriptStackViewController *)arg1;
- (long long)initialDisplayTypeForTranscriptStackViewController:(SVSTranscriptStackViewController *)arg1;
- (void)transcriptStackViewControllerDidExitSiriland:(SVSTranscriptStackViewController *)arg1;
- (void)transcriptStackViewControllerWillEnterSiriland:(SVSTranscriptStackViewController *)arg1;
- (double)windowWidthForTranscriptStackViewController:(SVSTranscriptStackViewController *)arg1;
- (double)contentWidthForTranscriptStackViewController:(SVSTranscriptStackViewController *)arg1;
@end

