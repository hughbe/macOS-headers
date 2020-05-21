//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/PFMirroredRelationship.h>

@class CKRecordID, NSRelationshipDescription, NSString;

__attribute__((visibility("hidden")))
@interface PFMirroredManyToManyRelationship : PFMirroredRelationship
{
    unsigned long long _type;
    NSRelationshipDescription *_relationshipDescription;
    NSRelationshipDescription *_inverseRelationshipDescription;
    CKRecordID *_manyToManyRecordID;
    NSString *_manyToManyRecordType;
    CKRecordID *_ckRecordID;
    CKRecordID *_relatedCKRecordID;
}

+ (BOOL)_isValidMirroredRelationshipRecord:(id)arg1 values:(id)arg2;
+ (id)ckRecordNameForOrderedRecordNames:(id)arg1;
+ (id)recordNamesFromManyToManyCKRecordName:(id)arg1;
+ (id)orderedRelationshipsForRecordType:(id)arg1 andManagedObjectModel:(id)arg2;
+ (id)ckRecordTypeForOrderedRelationships:(id)arg1;
+ (id)orderRelationships:(id)arg1;
@property(readonly, nonatomic) CKRecordID *relatedCKRecordID; // @synthesize relatedCKRecordID=_relatedCKRecordID;
@property(readonly, nonatomic) CKRecordID *ckRecordID; // @synthesize ckRecordID=_ckRecordID;
@property(readonly, nonatomic) NSString *manyToManyRecordType; // @synthesize manyToManyRecordType=_manyToManyRecordType;
@property(readonly, nonatomic) CKRecordID *manyToManyRecordID; // @synthesize manyToManyRecordID=_manyToManyRecordID;
@property(readonly, nonatomic) NSRelationshipDescription *inverseRelationshipDescription; // @synthesize inverseRelationshipDescription=_inverseRelationshipDescription;
@property(readonly, nonatomic) NSRelationshipDescription *relationshipDescription; // @synthesize relationshipDescription=_relationshipDescription;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)recordTypeToRecordID;
- (BOOL)updateRelationshipValueUsingImportContext:(id)arg1 andManagedObjectContext:(id)arg2 error:(id *)arg3;
- (void)_setManyToManyRecordID:(id)arg1 manyToManyRecordType:(id)arg2 ckRecordID:(id)arg3 relatedCKRecordID:(id)arg4 relationshipDescription:(id)arg5 inverseRelationshipDescription:(id)arg6 type:(unsigned long long)arg7;
- (id)description;
- (void)dealloc;
- (id)initWithRecordID:(id)arg1 recordType:(id)arg2 managedObjectModel:(id)arg3 andType:(unsigned long long)arg4;

@end

