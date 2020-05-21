//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock;

@interface NSPrefPaneSearchCenter : NSObject
{
    struct __SKIndex *mIndexRef;
    BOOL mValidated;
    BOOL mDebug;
    NSLock *mSKLock;
}

+ (id)preferencesSearchIndexCacheFilePath;
+ (id)sharedCenter;
- (void).cxx_destruct;
- (void)setValidated;
- (id)searchString:(id)arg1 inPreferencePane:(id)arg2;
- (id)searchString:(id)arg1;
- (BOOL)openSearchIndex;
- (void)createSearchIndexForPrefPaneBundles:(id)arg1;
- (id)_indexExtensions;
- (void)dealloc;
- (id)init;
- (id)loadSearchTermsForPath:(id)arg1 key:(id)arg2;

@end

