//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSharedKeySet;

@interface PASScoreInterpreter : NSObject
{
    NSDictionary *_varPrograms;
    NSSharedKeySet *_scoreInputSharedKeySet;
}

+ (id)scoreInterpreterParseRootFromAsset:(id)arg1;
- (void).cxx_destruct;
- (double)_evalVariable:(id)arg1 withCtx:(id)arg2;
- (void)_compileRoot:(id)arg1;
- (id)initWithParseRoot:(id)arg1 scoreInputSharedKeySet:(id)arg2;
- (id)initWithParseRoot:(id)arg1;
- (id)evaluateWithInputScoreDict:(id)arg1;
- (id)evaluateWithInputScores:(id)arg1;
- (id)init;

@end

