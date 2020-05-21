//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface SGQuickResponsesReplyOption : NSObject
{
    NSNumber *_position;
    NSNumber *_ucb;
}

+ (id)imputedDisplayedForRecords:(id)arg1 config:(id)arg2;
+ (double)totalDisplayedCountForRecords:(id)arg1;
+ (id)sortedReplyOptionsForRecords:(id)arg1 config:(id)arg2;
+ (double)ucbCombinedForSelected:(double)arg1 displayed:(double)arg2 actualOptionsDisplayed:(double)arg3 matched:(double)arg4 imputedDisplayed:(double)arg5 imputedOptionsDisplayed:(double)arg6 explorationFactor:(double)arg7;
+ (double)ucbCombinedWithMeanA:(double)arg1 meanB:(double)arg2 varianceA:(double)arg3 varianceB:(double)arg4 explorationFactor:(double)arg5;
+ (double)ucbWithMean:(double)arg1 varianceOfMean:(double)arg2 explorationFactor:(double)arg3;
+ (double)ucbTunedVarianceForMean:(double)arg1 displayed:(double)arg2 totalDisplayed:(double)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *ucb; // @synthesize ucb=_ucb;
@property(readonly, nonatomic) NSNumber *position; // @synthesize position=_position;
- (long long)compare:(id)arg1;
- (id)initWithPosition:(unsigned long long)arg1 records:(id)arg2 actualOptionsDisplayedCount:(double)arg3 imputedOptionsDisplayedCount:(double)arg4 imputedOptionsDisplayed:(id)arg5 config:(id)arg6;

@end

