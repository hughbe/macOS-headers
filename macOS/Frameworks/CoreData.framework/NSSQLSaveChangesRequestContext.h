//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSSQLStoreRequestContext.h>

@class NSDictionary, NSFaultHandler, NSMutableDictionary, NSSQLModel, NSSQLRowCache, NSSQLSavePlan, NSSaveChangesRequest, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface NSSQLSaveChangesRequestContext : NSSQLStoreRequestContext
{
    NSDictionary *_metadataToWrite;
    NSSQLSavePlan *_savePlan;
    NSFaultHandler *_faultHandler;
    NSSet *_objectIDsInsertUpdatedToPruneDATrigger;
    NSSet *_objectIDsUpdatedToPruneDATrigger;
    NSSet *_objectIDsToPruneTrigger;
    NSMutableDictionary *_originalCachedRows;
    NSMutableDictionary *_updateMasksForHistoryTracking;
    NSString *_externalDataReferencesDirectory;
    NSString *_externalDataLinksDirectory;
    NSString *_fileBackedFuturesDirectory;
    NSSQLRowCache *_primaryRowCache;
    NSSQLRowCache *_contextGenerationRowCache;
}

@property(readonly, nonatomic) NSMutableDictionary *originalCachedRows; // @synthesize originalCachedRows=_originalCachedRows;
@property(readonly, nonatomic) NSFaultHandler *faultHandler; // @synthesize faultHandler=_faultHandler;
@property(readonly, nonatomic) NSSQLSavePlan *savePlan; // @synthesize savePlan=_savePlan;
@property(readonly, nonatomic) NSDictionary *metadataToWrite; // @synthesize metadataToWrite=_metadataToWrite;
@property(readonly, nonatomic) NSString *fileBackedFuturesDirectory; // @synthesize fileBackedFuturesDirectory=_fileBackedFuturesDirectory;
@property(readonly, nonatomic) NSString *externalDataLinksDirectory; // @synthesize externalDataLinksDirectory=_externalDataLinksDirectory;
@property(readonly, nonatomic) NSString *externalDataReferencesDirectory; // @synthesize externalDataReferencesDirectory=_externalDataReferencesDirectory;
- (id)dataMaskForKey:(id)arg1;
- (void)addDataMask:(id)arg1 forEntityKey:(id)arg2;
- (void)setOriginalRow:(id)arg1 forObjectID:(id)arg2;
- (id)originalRowForObjectID:(id)arg1;
- (BOOL)executeRequestCore:(id *)arg1;
- (void)executeEpilogue;
- (void)executePrologue;
- (BOOL)isWritingRequest;
- (id)contextRowCache;
- (id)rowCache;
@property(readonly, nonatomic) NSSaveChangesRequest *request;
@property(readonly, nonatomic) NSSQLModel *model;
- (BOOL)hasChangesForWriting;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 context:(id)arg2 sqlCore:(id)arg3;

@end

