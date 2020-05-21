//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreKnowledge/CKPermanentEventStore.h>

#import <CoreKnowledge/CKPermanentEventStorePrivate-Protocol.h>

@class CKKnowledgeStore;

@interface CKPermanentEventStore (CoreKnowledge2) <CKPermanentEventStorePrivate>
- (void)deleteEventWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)deleteEventWithIdentifier:(id)arg1 error:(id *)arg2;
- (void)setTotalDuration:(double)arg1 forEventWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setLastDuration:(double)arg1 forEventWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setFrequency:(long long)arg1 forEventWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setLastSeen:(id)arg1 forEventWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setFirstSeen:(id)arg1 forEventWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)historicEventsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)historicEventsAndReturnError:(id *)arg1;
@property(nonatomic, readonly) CKKnowledgeStore *backingStore;
@end

