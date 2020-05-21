//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface BOSBundleComponentVersion : NSObject
{
    NSString *_shortVersionString;
    NSString *_bundleVersion;
    NSString *_sourceVersion;
    NSString *_buildVersion;
}

+ (id)_combinedVersionAndInfoDictionaryForCFBundle:(struct __CFBundle *)arg1;
+ (id)_combinedVersionAndInfoDictionaryForBundle:(id)arg1;
+ (id)_orderedVersionKeys;
+ (id)bundleComponentVersionWithOnDiskBundle:(id)arg1;
- (void).cxx_destruct;
@property(retain) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
@property(retain) NSString *sourceVersion; // @synthesize sourceVersion=_sourceVersion;
@property(retain) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(retain) NSString *shortVersionString; // @synthesize shortVersionString=_shortVersionString;
@property(readonly) NSDictionary *attributeDictionary;
- (long long)compare:(id)arg1;
- (id)initWithAttributes:(id)arg1;
- (id)initWithShortVersionString:(id)arg1 bundleVersion:(id)arg2 sourceVersion:(id)arg3 buildVersion:(id)arg4;
- (void)_setBuildVersion:(id)arg1;

@end

