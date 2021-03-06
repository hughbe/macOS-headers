//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSSQLStoreRequestContext.h>

@class NSBatchUpdateRequest, NSFetchRequest, NSSQLiteStatement;

__attribute__((visibility("hidden")))
@interface NSSQLBatchUpdateRequestContext : NSSQLStoreRequestContext
{
    NSSQLiteStatement *_updateStatement;
    NSFetchRequest *_fetchRequest;
}

- (id)dropObjectIDCaptureStatements;
- (id)createObjectIDCaptureStatements;
- (BOOL)executeRequestCore:(id *)arg1;
- (void)executePrologue;
- (BOOL)isWritingRequest;
- (id)createFetchRequestContextForObjectsToUpdate;
- (id)fetchRequestDescribingObjectsToUpdate;
@property(readonly, nonatomic) NSSQLiteStatement *updateStatement;
- (void)_createUpdateStatement;
@property(readonly, nonatomic) NSBatchUpdateRequest *request;
- (id)tempTableName;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 context:(id)arg2 sqlCore:(id)arg3;

@end

