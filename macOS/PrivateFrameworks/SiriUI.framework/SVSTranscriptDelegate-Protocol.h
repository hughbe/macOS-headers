//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriUI/NSObject-Protocol.h>

@class NSArray, NSIndexSet, NSUUID, SVSTranscript;
@protocol SiriUISnippetViewControllerDelegate><SiriUIAceObjectViewControllerDelegate;

@protocol SVSTranscriptDelegate <NSObject>
- (void)transcript:(SVSTranscript *)arg1 performAceCommands:(NSArray *)arg2 conversationItemIdentifier:(NSUUID *)arg3;
- (void)transcript:(SVSTranscript *)arg1 presentationStateDidChangeForItemsAtIndexPaths:(NSIndexSet *)arg2;
- (void)transcript:(SVSTranscript *)arg1 didRemoveTranscriptItems:(NSArray *)arg2 atIndexes:(NSIndexSet *)arg3;
- (void)transcript:(SVSTranscript *)arg1 didReloadTranscriptItemsAtIndexes:(NSIndexSet *)arg2;
- (void)transcript:(SVSTranscript *)arg1 didReplaceTranscriptItemsAtIndexes:(NSIndexSet *)arg2 replacedTranscriptItems:(NSArray *)arg3;
- (void)transcript:(SVSTranscript *)arg1 didDiscardTranscriptItemsWithConversationItemIdentifiers:(NSArray *)arg2;
- (void)transcript:(SVSTranscript *)arg1 didInsertTranscriptItemsAtIndexes:(NSIndexSet *)arg2;
- (id <SiriUISnippetViewControllerDelegate><SiriUIAceObjectViewControllerDelegate>)viewControllerDelegateForTranscript:(SVSTranscript *)arg1;
@end

