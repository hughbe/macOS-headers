//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface DDTypeInhabitant : NSObject
{
    unsigned long long _hash;
    NSArray *_names;
}

+ (id)emptyInhabitant;
+ (id)inhabitantWithName:(id)arg1;
- (id)description;
- (id)typeInhabitantByJoining:(id)arg1;
- (long long)compare:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithNames:(id)arg1;
- (id)init;

@end

