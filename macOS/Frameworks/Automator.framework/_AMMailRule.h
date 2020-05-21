//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScriptingBridge/SBObject.h>

@class NSArray, NSString, _AMMailMailbox;

@interface _AMMailRule : SBObject
{
}

- (void)moveTo:(id)arg1;
- (void)duplicateTo:(id)arg1 withProperties:(id)arg2;
- (void)delete;
- (void)printWithProperties:(id)arg1 printDialog:(BOOL)arg2;
- (void)saveIn:(id)arg1 as:(int)arg2;
- (void)closeSaving:(int)arg1 savingIn:(id)arg2;
@property BOOL stopEvaluatingRules;
@property BOOL shouldMoveMessage;
@property BOOL shouldCopyMessage;
@property(copy) NSString *name;
@property BOOL enabled;
@property BOOL highlightTextUsingColor;
@property(copy) _AMMailMailbox *moveMessage;
@property(copy) _AMMailMailbox *copyMessage;
@property BOOL allConditionsMustBeMet;
@property(copy) id runScript;
@property(copy) NSString *replyText;
@property(copy) NSArray *redirectMessage;
@property(copy) NSString *playSound;
@property BOOL markRead;
@property BOOL markFlagged;
@property(copy) NSString *forwardMessage;
@property(copy) NSString *forwardText;
@property BOOL deleteMessage;
@property int colorMessage;
- (id)ruleConditions;

@end

