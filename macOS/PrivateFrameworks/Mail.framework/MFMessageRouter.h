//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Mail/MCActivityTarget-Protocol.h>

@class MFMessageStore, NSConditionLock, NSMutableArray, NSString;

@interface MFMessageRouter : NSObject <MCActivityTarget>
{
    NSMutableArray *_queuedMessages;
    NSConditionLock *_queuedMessagesFull;
    NSConditionLock *_queuedMessagesEmpty;
    NSConditionLock *_queuedMessagesRouting;
    unsigned long long _bytesInQueue;
    unsigned long long _queueSize;
    BOOL _routingThreadShouldQuit;
    BOOL _isUserAction;
    MFMessageStore *_store;
    unsigned long long _estimatedNumberOfMessagesToRoute;
    unsigned long long _numMessagesRoutedSoFar;
}

+ (void)saveRulesIfNeeded;
+ (void)addInvitationsToCalendarFromMessages:(id)arg1;
+ (void)setAddInvitationsToCalendarAutomatically:(BOOL)arg1;
+ (BOOL)addInvitationsToCalendarAutomatically;
+ (void)applyRulesAsynchronouslyToMailboxes:(id)arg1;
+ (void)_applyRulesToMailboxes:(id)arg1;
+ (id)junkMailHeaderFlags;
+ (void)setJunkMailTrustHeaders:(BOOL)arg1;
+ (BOOL)junkMailTrustHeaders;
+ (void)setJunkMailEvaluationAfterRules:(BOOL)arg1;
+ (BOOL)junkMailEvaluationAfterRules;
+ (void)reloadRules;
+ (id)calendarRule;
+ (id)blockedSenderRule;
+ (id)_safeToMarkAsNotJunkRule;
+ (void)setJunkMailRule:(id)arg1;
+ (id)junkMailRule;
+ (id)_junkMailRuleForBehavior:(long long)arg1 abCriterion:(BOOL)arg2 ahCriterion:(BOOL)arg3 fnCriterion:(BOOL)arg4;
+ (void)routeJunkMessagesInMailboxes:(id)arg1;
+ (void)setJunkMailBehavior:(long long)arg1;
+ (long long)junkMailBehavior;
+ (id)colorForMessage:(id)arg1 highlightTextUsingColor:(char *)arg2;
+ (void)_putRulesThatWantToHandleMessage:(id)arg1 intoArray:(id)arg2 colorRulesOnly:(BOOL)arg3 fetchingBody:(BOOL)arg4 needsBody:(char *)arg5;
+ (void)headersRequiredForRoutingDidChange;
+ (id)headersRequiredForRouting;
+ (void)_mailboxListingChanged:(id)arg1;
+ (void)loadDestinationMailboxes;
+ (void)tryToReconnectAutoDeactivatedRules;
+ (void)_updateUnrecognizedRulesAfterRemovingIndex:(unsigned long long)arg1;
+ (void)_updateUnrecognizedRulesAfterAddingIndex:(unsigned long long)arg1;
+ (unsigned long long)numberOfDefaultRules;
+ (id)defaultRules;
+ (void)removeRule:(id)arg1;
+ (void)addRule:(id)arg1;
+ (void)insertRule:(id)arg1 atIndex:(unsigned long long)arg2;
+ (void)removeRuleAtIndex:(unsigned long long)arg1;
+ (id)ruleAtIndex:(unsigned long long)arg1;
+ (unsigned long long)numberOfRules;
+ (id)activeRules;
+ (id)rules;
+ (void)_setRules:(id)arg1;
+ (id)_rules;
+ (void)_synchronouslyWriteRulesToDisk;
+ (void)_writeRulesToDiskInBackground:(id)arg1;
+ (id)_readRulesFromDisk;
+ (id)_setupSortRules;
+ (id)_sortRuleDictionaryRepresentationsIncludingPII:(BOOL)arg1;
+ (id)_sortRulesFromDictionaryRepresentations:(id)arg1;
+ (id)_defaultSortRules;
+ (id)defaultAppleEmailAddresses;
+ (void)_mailboxWasRenamed:(id)arg1;
+ (void)_accountWillBeDeleted:(id)arg1;
+ (void)_mailboxBecameInvalid:(id)arg1;
+ (void)mailboxWillBeRenamedOrInvalidated;
+ (void)ruleDidChange:(id)arg1;
+ (void)ruleAffectingColorsDidChange:(id)arg1;
+ (BOOL)colorsUpdateDynamically;
+ (BOOL)_colorRuleExistsAfterRule:(id)arg1;
+ (void)enqueueColorRulesDidChange;
+ (void)setColorChangeCounter:(long long)arg1;
+ (long long)colorChangeCounter;
+ (BOOL)_hasColorRules;
+ (void)_diagnosticsNotificationReceived:(id)arg1;
+ (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
+ (void)_unScheduleWriteRules;
+ (void)scheduleWriteRules;
+ (void)_setWriteRulesTimer:(id)arg1;
+ (id)writeRulesScheduler;
+ (void)initialize;
+ (id)log;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long numMessagesRoutedSoFar; // @synthesize numMessagesRoutedSoFar=_numMessagesRoutedSoFar;
@property(nonatomic) unsigned long long estimatedNumberOfMessagesToRoute; // @synthesize estimatedNumberOfMessagesToRoute=_estimatedNumberOfMessagesToRoute;
@property(nonatomic) __weak MFMessageStore *store; // @synthesize store=_store;
@property(nonatomic) BOOL isUserAction; // @synthesize isUserAction=_isUserAction;
- (void)waitForRoutingToFinish;
- (void)_routeQueuedMessages;
- (void)asynchronouslyRouteMessages:(id)arg1;
- (id)routeMessages:(id)arg1 fromStores:(id)arg2 fetchingBodies:(BOOL)arg3 messagesNeedingBodies:(id)arg4;
- (BOOL)_routeMessagesIndividually;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

