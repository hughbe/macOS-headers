//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PGTitleGeneratorTypeMatching : NSObject
{
    long long _type;
    CDUnknownBlockType _eventEvaluationBlock;
}

+ (id)typeMatchingWithType:(long long)arg1 eventEvaluationBlock:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CDUnknownBlockType eventEvaluationBlock; // @synthesize eventEvaluationBlock=_eventEvaluationBlock;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)initWithType:(long long)arg1 eventEvaluationBlock:(CDUnknownBlockType)arg2;

@end

