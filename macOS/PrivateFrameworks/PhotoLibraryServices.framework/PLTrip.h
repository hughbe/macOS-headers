//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface PLTrip : NSObject
{
    unsigned long long _type;
    NSArray *_items;
}

- (void).cxx_destruct;
@property(readonly) NSArray *items; // @synthesize items=_items;
@property(readonly) unsigned long long type; // @synthesize type=_type;
- (double)duration;
- (id)typeDescription;
- (id)description;
- (id)initWithItems:(id)arg1 type:(unsigned long long)arg2;

@end

