//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle, NSDictionary;

__attribute__((visibility("hidden")))
@interface NSManagedObjectModelBundle : NSObject
{
    NSBundle *_bundle;
    NSDictionary *_versionInfoDictionary;
}

- (id)_modelForVersionHashes:(id)arg1;
- (id)_modelForVersionHashes:(id)arg1 inStyle:(unsigned long long)arg2;
- (id)optimizedVersionURL;
- (id)currentVersionURL;
- (id)urlForModelVersionWithName:(id)arg1;
- (id)modelVersions;
- (id)currentVersion;
- (id)versionHashInfo;
- (id)versionInfoDictionary;
- (id)bundle;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end

