//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface WFCategoryJudgement : NSObject
{
    float _score;
    long long _category;
}

+ (id)categoryJudgementWithCategory:(long long)arg1 score:(float)arg2;
@property long long category; // @synthesize category=_category;
@property float score; // @synthesize score=_score;
- (id)description;
- (long long)compareByScore:(id)arg1;
- (long long)compareByCategory:(id)arg1;

@end

