//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProactiveML/PMLPlistAndChunksSerializableProtocol-Protocol.h>

@class AWDProactiveModelFittingMinibatchStats, NSDictionary;

@protocol PMLMultiLabelEvaluationTrackerProtocol <PMLPlistAndChunksSerializableProtocol>
- (NSDictionary *)trackPrecisionAtK:(NSDictionary *)arg1 minibatchStats:(AWDProactiveModelFittingMinibatchStats *)arg2;
- (NSDictionary *)trackPrecisionAtK:(NSDictionary *)arg1;
@end

