//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MDSPathFilter, NSSet, TMDisk, TMSpotlightOracle;

@interface TMDeviceRulesEngine : NSObject
{
    TMDisk *_disk;
    MDSPathFilter *_baseFilter;
    MDSPathFilter *_customExclusionsFilter;
    TMSpotlightOracle *_spotlightOracle;
    NSSet *_stickyExclusionPaths;
    struct _TMRulesEngineStatistics _stats;
    struct _CFBurstTrie *_undiscoveredStickyExclusionCache;
}

@property(copy) NSSet *stickyExclusionPaths; // @synthesize stickyExclusionPaths=_stickyExclusionPaths;
@property(readonly) struct _TMRulesEngineStatistics statistics; // @synthesize statistics=_stats;
@property(readonly) TMSpotlightOracle *spotlightOracle; // @synthesize spotlightOracle=_spotlightOracle;
@property(readonly) MDSPathFilter *customExclusionsFilter; // @synthesize customExclusionsFilter=_customExclusionsFilter;
@property(readonly) MDSPathFilter *baseFilter; // @synthesize baseFilter=_baseFilter;
@property(readonly) TMDisk *disk; // @synthesize disk=_disk;
- (void)_dumpCache;
- (void)_fillCachedExclusionAnswer:(BOOL)arg1 forRawPath:(const char *)arg2 length:(unsigned long long)arg3;
- (void)_fillCachedExclusionAnswer:(BOOL)arg1 forParentLevels:(unsigned int)arg2 ofRawPath:(const char *)arg3 length:(unsigned long long)arg4;
- (BOOL)_cacheContainsRawPath:(const char *)arg1 length:(unsigned long long)arg2 isExcluded:(char *)arg3;
- (BOOL)_rawPathHasStickyExclusionXattr:(const char *)arg1;
- (BOOL)_rawPathIsUndiscoveredStickyExclusion:(const char *)arg1 filterRules:(CDStruct_b7969f8e)arg2;
- (BOOL)_rawPathIsFile:(const char *)arg1 hints:(struct _TMRulesQueryHints *)arg2;
- (BOOL)_rawPathIsExcluded:(const char *)arg1 hints:(struct _TMRulesQueryHints *)arg2 details:(struct _TMRulesQueryDetails *)arg3;
- (unsigned long long)realmForRawPath:(const char *)arg1;
- (unsigned long long)realmForPath:(id)arg1;
- (unsigned long long)realmForURL:(id)arg1;
- (BOOL)rawPathIsExcluded:(const char *)arg1 hints:(struct _TMRulesQueryHints *)arg2 details:(struct _TMRulesQueryDetails *)arg3;
- (BOOL)rawPathIsExcluded:(const char *)arg1 hints:(struct _TMRulesQueryHints *)arg2;
- (BOOL)pathIsExcluded:(id)arg1 hints:(struct _TMRulesQueryHints *)arg2 details:(struct _TMRulesQueryDetails *)arg3;
- (BOOL)pathIsExcluded:(id)arg1 hints:(struct _TMRulesQueryHints *)arg2;
- (BOOL)pathIsExcluded:(id)arg1 isDir:(BOOL)arg2;
- (BOOL)URLIsExcluded:(id)arg1 hints:(struct _TMRulesQueryHints *)arg2 details:(struct _TMRulesQueryDetails *)arg3;
- (BOOL)URLIsExcluded:(id)arg1 isDir:(BOOL)arg2;
- (BOOL)URLIsExcluded:(id)arg1 hints:(struct _TMRulesQueryHints *)arg2;
- (void)dealloc;
- (id)initWithDisk:(id)arg1 baseFilter:(id)arg2 customExclusionsFilter:(id)arg3 spotlightOracle:(id)arg4;

@end

