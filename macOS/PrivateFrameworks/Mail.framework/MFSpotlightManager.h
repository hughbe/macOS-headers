//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Mail/MCActivityTarget-Protocol.h>

@class MCInvocationQueue, NSConditionLock, NSMutableDictionary, NSMutableSet, NSString;

@interface MFSpotlightManager : NSObject <MCActivityTarget>
{
    NSConditionLock *_attachmentIndexingLock;
    NSMutableSet *_messsagesScheduledForAttachmentIndexing;
    NSMutableDictionary *_queryObserverDictionary;
    MCInvocationQueue *_indexQueue;
}

+ (id)_log;
+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) MCInvocationQueue *indexQueue; // @synthesize indexQueue=_indexQueue;
- (id)acquireQueryObserver:(long long)arg1;
- (void)unregisterQueryObserver:(long long)arg1;
- (long long)registerQueryObserver:(id)arg1;
@property(readonly, nonatomic, getter=isSpotlightEnabled) BOOL spotlightEnabled;
- (void)immediatelyIndexAttachmentsForMessage:(id)arg1;
- (void)indexAttachmentsForMessage:(id)arg1;
- (void)_synchronouslyIndexAttachmentsForMessages:(id)arg1 messageCount:(unsigned long long)arg2;
- (void)_indexAttachmentsForScheduledMessages;
- (void)_triggerNowAttachmentIndexing;
- (void)_triggerDelayedAttachmentIndexing;
- (void)markMessagesAsPrinted:(id)arg1;
- (void)_markMessagesAsPrinted:(id)arg1;
- (void)setAttributesForFileWrapper:(id)arg1 atFile:(id)arg2;
- (void)_setAttributesForFileWrapper:(id)arg1 atFile:(id)arg2;
- (id)sharedKeySetForFileWrapperSpotlightAttributes;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

