//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PKVectorTimestampElement : NSObject
{
    unsigned long long _clock;
    unsigned long long _subclock;
}

@property(nonatomic) unsigned long long subclock; // @synthesize subclock=_subclock;
@property(nonatomic) unsigned long long clock; // @synthesize clock=_clock;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end

