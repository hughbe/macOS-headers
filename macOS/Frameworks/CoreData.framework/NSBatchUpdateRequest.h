//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSPersistentStoreRequest.h>

#import <CoreData/NSPredicatedStoreRequest-Protocol.h>

@class NSDictionary, NSEntityDescription, NSPredicate, NSString;

@interface NSBatchUpdateRequest : NSPersistentStoreRequest <NSPredicatedStoreRequest>
{
    id _entity;
    NSPredicate *_predicate;
    struct _requestFlags {
        unsigned int includesSubentities:1;
        unsigned int resultType:2;
        unsigned int entityIsName:1;
        unsigned int secureOperation:1;
        unsigned int _RESERVED:27;
    } _flags;
    NSDictionary *_columnsToUpdate;
}

+ (id)batchUpdateRequestWithEntityName:(id)arg1;
+ (id)decodeFromXPCArchive:(id)arg1 withContext:(id)arg2;
@property(retain) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(nonatomic, getter=_secureOperation, setter=_setSecureOperation:) BOOL shouldPerformSecureOperation;
- (void)_resolveEntityWithContext:(id)arg1;
@property(copy) NSDictionary *propertiesToUpdate; // @synthesize propertiesToUpdate=_columnsToUpdate;
- (void)_setValidatedPropertiesToUpdate:(id)arg1;
- (id)_newValidatedPropertiesToUpdate:(id)arg1 error:(id *)arg2;
@property unsigned long long resultType;
@property BOOL includesSubentities;
- (unsigned long long)requestType;
@property(readonly) NSEntityDescription *entity; // @synthesize entity=_entity;
@property(readonly, copy) NSString *entityName;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithEntity:(id)arg1;
- (id)initWithEntityName:(id)arg1;
- (id)init;
- (id)encodeForXPC;
- (BOOL)shouldPerformSecureOperation;
- (void)setShouldPerformSecureOperation:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

