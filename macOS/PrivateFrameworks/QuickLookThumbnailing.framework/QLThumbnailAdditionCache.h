//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache;

__attribute__((visibility("hidden")))
@interface QLThumbnailAdditionCache : NSObject
{
    NSCache *_additionsCache;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)cacheAddition:(id)arg1 forDocumentID:(id)arg2;
- (void)purgeCachedAdditionForItemAtURL:(id)arg1;
- (id)thumbnailAdditionForItemAtURL:(id)arg1 error:(id *)arg2;
- (id)init;

@end

