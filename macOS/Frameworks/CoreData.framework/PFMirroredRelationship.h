//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PFMirroredRelationship : NSObject
{
}

+ (BOOL)isValidMirroredRelationshipRecord:(id)arg1 values:(id)arg2;
+ (id)mirroredRelationshipWithDeletedRecordType:(id)arg1 recordID:(id)arg2 andManagedObjectModel:(id)arg3;
+ (id)mirroredRelationshipWithManyToManyRecord:(id)arg1 values:(id)arg2 andManagedObjectModel:(id)arg3;
+ (id)mirroredRelationshipWithManagedObject:(id)arg1 withRecordID:(id)arg2 relatedToObjectWithRecordID:(id)arg3 byRelationship:(id)arg4;
- (BOOL)updateRelationshipValueUsingImportContext:(id)arg1 andManagedObjectContext:(id)arg2 error:(id *)arg3;

@end

