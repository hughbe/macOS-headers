//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNCDSaveContext;

__attribute__((visibility("hidden")))
@interface CNCDContactSaveExecutor : NSObject
{
    CNCDSaveContext *_saveContext;
}

+ (id)contactsLinkedToContact:(id)arg1 inSaveContext:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) CNCDSaveContext *saveContext; // @synthesize saveContext=_saveContext;
- (void)enumerateAddedContacts:(CDUnknownBlockType)arg1;
- (void)updateContactSnapshots;
- (void)deleteContacts;
- (void)updateMeContact;
- (void)applyDiff:(id)arg1 toUnifiedContact:(id)arg2 withIdentifierMap:(id)arg3;
- (void)updateUnifiedContacts:(id)arg1;
- (void)updateNonUnifiedContacts:(id)arg1;
- (void)updateContacts;
- (void)unlinkContacts;
- (void)linkContacts;
- (void)updateCacheWithAddedContacts;
- (void)addContacts;
- (void)saveContacts;
- (id)insertedContactIdentifiers;
- (id)allContactIdentifiers;
- (id)initWithSaveContext:(id)arg1;

@end

