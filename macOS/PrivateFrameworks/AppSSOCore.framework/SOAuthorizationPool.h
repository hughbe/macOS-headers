//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface SOAuthorizationPool : NSObject
{
    NSMutableArray *_pool;
}

- (void).cxx_destruct;
- (void)removeAuthorization:(id)arg1;
- (void)addAuthorization:(id)arg1 delegate:(id)arg2;
- (id)init;

@end

