//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@interface MLInt64ProbabilityDictionaryEnumerator : NSEnumerator
{
    __map_iterator_7eacffce _iter;
    __map_iterator_7eacffce _iterEnd;
}

+ (id)enumeratorFromMap:(map_f8690629 *)arg1;
- (id).cxx_construct;
@property(nonatomic) __map_iterator_7eacffce iterEnd; // @synthesize iterEnd=_iterEnd;
@property(nonatomic) __map_iterator_7eacffce iter; // @synthesize iter=_iter;
- (id)nextObject;
- (id)initWithIntMap:(map_f8690629 *)arg1;

@end

