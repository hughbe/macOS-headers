//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/SGSuggestHistoryObserver-Protocol.h>

@class NSString, SGSqlEntityStore;

@interface SGHistoryObserver : NSObject <SGSuggestHistoryObserver>
{
    SGSqlEntityStore *_store;
}

- (void).cxx_destruct;
- (void)hashesDidChange;
- (void)processNewConfirmedOrRejectedReminderHashes:(id)arg1;
- (void)processNewConfirmOrRejectEventHashes:(id)arg1;
- (id)initWithStore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

