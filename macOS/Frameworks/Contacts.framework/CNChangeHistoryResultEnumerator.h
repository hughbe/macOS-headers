//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@class CNQueue;
@protocol CNEnumeratorRefillStrategy;

__attribute__((visibility("hidden")))
@interface CNChangeHistoryResultEnumerator : NSEnumerator
{
    CNQueue *_changes;
    CNQueue *_batchFetchQueue;
    id <CNEnumeratorRefillStrategy> _refillStrategy;
}

+ (id)groupEnumeratorWithChanges:(id)arg1 contactStore:(id)arg2;
+ (id)contactEnumeratorWithChanges:(id)arg1 keysToFetch:(id)arg2 unifyResults:(BOOL)arg3 contactStore:(id)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <CNEnumeratorRefillStrategy> refillStrategy; // @synthesize refillStrategy=_refillStrategy;
@property(readonly, nonatomic) CNQueue *batchFetchQueue; // @synthesize batchFetchQueue=_batchFetchQueue;
@property(readonly, copy, nonatomic) CNQueue *changes; // @synthesize changes=_changes;
- (void)_fetchNextBatch;
- (id)nextObject;
- (id)initWithChanges:(id)arg1 refillStrategy:(id)arg2;

@end

