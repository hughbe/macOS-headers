//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class WBSPasswordPatternMatch;

@interface WBSPasswordPatternPartialSolution : NSObject
{
    WBSPasswordPatternMatch *_patternMatch;
    double _guessesRequiredWithoutPatternCountPenalty;
    double _guessesRequiredWithPatternCountPenalty;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double guessesRequiredWithPatternCountPenalty; // @synthesize guessesRequiredWithPatternCountPenalty=_guessesRequiredWithPatternCountPenalty;
@property(readonly, nonatomic) double guessesRequiredWithoutPatternCountPenalty; // @synthesize guessesRequiredWithoutPatternCountPenalty=_guessesRequiredWithoutPatternCountPenalty;
@property(readonly, nonatomic) WBSPasswordPatternMatch *patternMatch; // @synthesize patternMatch=_patternMatch;
- (id)initWithPatternMatch:(id)arg1 guessesRequiredWithoutPatternCountPenalty:(double)arg2 withPatternCountPenalty:(double)arg3;

@end

