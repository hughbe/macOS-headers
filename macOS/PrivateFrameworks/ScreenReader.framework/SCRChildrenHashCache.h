//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface SCRChildrenHashCache : NSObject
{
    NSMutableArray *_childrenHashCache;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *childrenHashCache; // @synthesize childrenHashCache=_childrenHashCache;
- (BOOL)didChildrenHashChange;
- (void)clearCache;
- (void)addCachedElement:(id)arg1 childrenHash:(unsigned long long)arg2;
- (id)init;

@end

