//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface PGRankedZeroKeyword : NSObject
{
    NSDictionary *_zeroKeyword;
    double _score;
}

- (void).cxx_destruct;
@property(readonly) double score; // @synthesize score=_score;
@property(readonly) NSDictionary *zeroKeyword; // @synthesize zeroKeyword=_zeroKeyword;
- (BOOL)isEqual:(id)arg1;
- (id)initWithKeyword:(id)arg1 score:(double)arg2;

@end

