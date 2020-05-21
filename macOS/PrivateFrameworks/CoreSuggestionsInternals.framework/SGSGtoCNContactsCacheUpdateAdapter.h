//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/SGJournalContactsObserver-Protocol.h>

@class NSString, SGSqlEntityStore;

@interface SGSGtoCNContactsCacheUpdateAdapter : NSObject <SGJournalContactsObserver>
{
    SGSqlEntityStore *_store;
}

- (void).cxx_destruct;
@property(nonatomic) __weak SGSqlEntityStore *store; // @synthesize store=_store;
- (void)removeAllStoredPseudoContacts;
- (void)rejectContact:(id)arg1;
- (void)confirmContact:(id)arg1;
- (void)addContact:(id)arg1;
- (id)initWithSGSqlEntityStore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

