//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface CIMResourcePathManager : NSObject
{
    struct __FSEventStream *_stream;
    BOOL _rebuildResourcePaths;
    NSMutableDictionary *_updateDictionaryPaths;
}

+ (id)sharedResourcePathManager;
+ (id)userDictionaryURL;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *updateDictionaryPaths; // @synthesize updateDictionaryPaths=_updateDictionaryPaths;
@property(nonatomic) struct __FSEventStream *stream; // @synthesize stream=_stream;
- (id)combinedResourcePathsForKeys:(id)arg1 inputMode:(id)arg2;
- (id)resourcePathsForKey:(id)arg1 inputMode:(id)arg2;
- (id)resourcePathsForUpdateDictionaries:(id)arg1;
- (void)rebuildUpdateResourcePaths:(id)arg1;
- (void)addUpdateDictionaryPath:(id)arg1 forInputModePrefix:(id)arg2;
- (void)tearDownDirectoryNotificationChangesForPath;
- (void)setUpDirectoryNotificationChangesForPath:(id)arg1;
- (void)additionalDictionariesUpdated;
- (void)dealloc;
- (id)init;

@end

