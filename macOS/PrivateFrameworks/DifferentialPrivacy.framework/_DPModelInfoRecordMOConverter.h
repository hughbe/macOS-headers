//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DifferentialPrivacy/_DPRecordConverter-Protocol.h>

@interface _DPModelInfoRecordMOConverter : NSObject <_DPRecordConverter>
{
}

- (id)updateRecords:(id)arg1 inManagedObjectContext:(id)arg2;
- (id)insertRecords:(id)arg1 inManagedObjectContext:(id)arg2;
- (id)insertRecord:(id)arg1 inManagedObjectContext:(id)arg2;
- (BOOL)copyRecord:(id)arg1 intoManagedObject:(id)arg2;
- (id)createRecordFromManagedObject:(id)arg1;

@end

