//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class OITSUIntegerKeyDictionary;

__attribute__((visibility("hidden")))
@interface ECTwoIntegerKeyCache : NSObject
{
    OITSUIntegerKeyDictionary *mCache;
    BOOL _assertForCollisions;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL assertForCollisions; // @synthesize assertForCollisions=_assertForCollisions;
- (void)setObject:(id)arg1 forKey1:(long long)arg2 key2:(long long)arg3;
- (id)objectForKey1:(long long)arg1 key2:(long long)arg2;
- (id)init;

@end

