//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SFTokenBucket;

@interface SFTokenBucketWithDups : NSObject
{
    SFTokenBucket *_bucket;
    unsigned long long _maxDups;
    struct __CFArray *_dups;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (BOOL)acquireTokenForIdentifier:(unsigned long long)arg1;
- (id)initWithBucket:(id)arg1 dupHistoryLength:(unsigned long long)arg2;

@end

