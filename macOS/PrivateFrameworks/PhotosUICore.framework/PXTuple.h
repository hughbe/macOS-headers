//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface PXTuple : NSObject
{
    unsigned long long _hash;
    NSArray *_objects;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *objects; // @synthesize objects=_objects;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithObjects:(id)arg1;
- (id)init;

@end

