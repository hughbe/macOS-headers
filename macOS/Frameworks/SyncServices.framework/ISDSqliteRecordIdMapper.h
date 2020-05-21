//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SyncServices/ISDRecordIdMapper.h>

@class ISDRecordIdMapDatabase;

@interface ISDSqliteRecordIdMapper : ISDRecordIdMapper
{
    ISDRecordIdMapDatabase *_mapDatabase;
}

+ (id)recordIdMapperInDataDirectory:(id)arg1;
+ (id)defaultMapperFileName;
+ (void)setLegacyMode:(BOOL)arg1;
- (void)disableSqliteTracing;
- (void)enableSqliteTracing:(id)arg1;
- (BOOL)removeRecordIdentifierOfUnknownType:(id)arg1;
- (BOOL)isRecordIdentifierOfUnknownType:(id)arg1;
- (id)recordIdentifiersOfUnknownType;
- (void)replaceGlobalId:(id)arg1 withGlobalId:(id)arg2;
- (void)replaceLocalId:(id)arg1 withLocalId:(id)arg2;
- (void)removeMappingForGlobalId:(id)arg1;
- (void)removeMappingsForGlobalIds:(id)arg1;
- (void)removeMappingsForEntityNames:(id)arg1 truth:(id)arg2;
- (void)setDirty:(BOOL)arg1;
- (void)flushMappingsIfNowIsAGoodTime;
- (BOOL)hasMappingForGlobalId:(id)arg1;
- (BOOL)hasMappingForLocalId:(id)arg1 useConstructedIdMap:(BOOL)arg2;
- (BOOL)_hasMappingForLocalId:(id)arg1;
- (id)recordIdMapForGlobalId:(id)arg1 isCached:(char *)arg2;
- (id)recordIdMapForLocalId:(id)arg1 isCached:(char *)arg2;
- (id)allGlobalIds;
- (id)allLocalIds;
- (void)vacuum;
- (BOOL)commitMappings;
- (BOOL)commitMappings:(BOOL)arg1;
- (void)enableFlush;
- (void)disableFlush;
- (void)resetState;
- (id)verboseDescription;
- (id)description;
- (void)dealloc;
- (void)freeOSResources;
- (id)init;
- (id)initRecordIdMapperWithPath:(id)arg1;
- (id)initRecordIdMapperInDataDirectory:(id)arg1;

@end

