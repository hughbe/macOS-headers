//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/JSExport-Protocol.h>

@class CAMediaTimingFunction, NSArray, NSString;

@protocol SCNJSKeyframeAnimationJSExport <JSExport>
+ (id)animationWithKeyPath:(NSString *)arg1;
@property(copy) NSString *fillMode;
@property BOOL autoreverses;
@property double repeatDuration;
@property float repeatCount;
@property double timeOffset;
@property float speed;
@property double beginTime;
@property(copy) NSArray *biasValues;
@property(copy) NSArray *continuityValues;
@property(copy) NSArray *tensionValues;
@property(copy) NSString *calculationMode;
@property(copy) NSArray *timingFunctions;
@property(copy) NSArray *keyTimes;
@property double duration;
@property struct CGPath *path;
@property(copy) NSArray *values;
@property(getter=isRemovedOnCompletion) BOOL removedOnCompletion;
@property(retain) CAMediaTimingFunction *timingFunction;
@property(getter=isCumulative) BOOL cumulative;
@property(getter=isAdditive) BOOL additive;
@property(copy) NSString *keyPath;
@property(retain) id byValue;
@property(retain) id toValue;
@property(retain) id fromValue;
@end

