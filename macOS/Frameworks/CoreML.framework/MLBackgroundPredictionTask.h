//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreML/MLBackgroundTask.h>

@class MLModelConfiguration, MLPredictionOptions, NSURL;

@interface MLBackgroundPredictionTask : MLBackgroundTask
{
    NSURL *_modelURL;
    MLModelConfiguration *_modelConfiguration;
    MLPredictionOptions *_predictionOptions;
}

+ (BOOL)supportsSecureCoding;
+ (Class)taskRunnerClass;
- (void).cxx_destruct;
@property(copy, nonatomic) MLPredictionOptions *predictionOptions; // @synthesize predictionOptions=_predictionOptions;
@property(copy, nonatomic) MLModelConfiguration *modelConfiguration; // @synthesize modelConfiguration=_modelConfiguration;
@property(copy, nonatomic) NSURL *modelURL; // @synthesize modelURL=_modelURL;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

