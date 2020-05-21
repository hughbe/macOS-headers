//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContactStore, NSMutableSet, NSSet, _CDInteractionStore;

@interface _PSInteractionAndContactMonitor : NSObject
{
    _CDInteractionStore *_interactionStore;
    CNContactStore *_contactStore;
    NSMutableSet *_mutableContactIdsSeen;
    NSMutableSet *_mutableContactIdsInContactStore;
}

- (void).cxx_destruct;
@property(retain) NSMutableSet *mutableContactIdsInContactStore; // @synthesize mutableContactIdsInContactStore=_mutableContactIdsInContactStore;
@property(retain) NSMutableSet *mutableContactIdsSeen; // @synthesize mutableContactIdsSeen=_mutableContactIdsSeen;
@property(readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(readonly, nonatomic) _CDInteractionStore *interactionStore; // @synthesize interactionStore=_interactionStore;
@property(readonly, copy, nonatomic) NSSet *contactIdsInContactStore;
@property(readonly, copy, nonatomic) NSSet *contactIdsSeen;
- (void)notifyWhenContactStoreChanged;
- (void)notifyWhenContactAddedToInteractionStore:(id)arg1;
- (void)fetchAllContactIdsFromContactStore;
- (void)populateContactIdCachesWithMessageCache:(id)arg1 shareCache:(id)arg2;
- (id)initWithInteractionStore:(id)arg1 contactStore:(id)arg2;

@end

