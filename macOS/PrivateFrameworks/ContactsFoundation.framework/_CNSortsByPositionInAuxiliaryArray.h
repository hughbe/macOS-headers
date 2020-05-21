//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface _CNSortsByPositionInAuxiliaryArray : NSObject
{
    NSDictionary *_ranks;
    NSArray *_auxiliaryValues;
    CDUnknownBlockType _transform;
}

+ (CDUnknownBlockType)comparatorForSortingAccordingToAuxiliaryValues:(id)arg1 transform:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *auxiliaryValues; // @synthesize auxiliaryValues=_auxiliaryValues;
@property(readonly, copy, nonatomic) NSDictionary *ranks; // @synthesize ranks=_ranks;
@property(readonly, copy, nonatomic) CDUnknownBlockType transform; // @synthesize transform=_transform;
- (id)rankForObject:(id)arg1;
- (CDUnknownBlockType)comparator;
- (void)prepareRankingIndex;
- (id)initWithAuxiliaryValues:(id)arg1 transform:(CDUnknownBlockType)arg2;

@end

