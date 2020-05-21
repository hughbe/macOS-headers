//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface OITSUIndexedStringStore : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_indexByString;
    NSMutableArray *_stringByIndex;
}

- (unsigned long long)count;
- (id)stringForIndex:(unsigned long long)arg1;
- (unsigned long long)indexForString:(id)arg1;
- (void)dealloc;
- (id)init;

@end

