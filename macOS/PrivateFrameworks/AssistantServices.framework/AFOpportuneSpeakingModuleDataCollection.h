//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface AFOpportuneSpeakingModuleDataCollection : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_speakableMap;
}

+ (id)sharedCollector;
- (void).cxx_destruct;
- (void)_deleteSpeakablesOlderThan:(id)arg1;
- (void)logInteractionEvents:(id)arg1 forSpeakableId:(id)arg2;
- (void)logRecommendedAction:(id)arg1 forSpeakableId:(id)arg2 withModelId:(id)arg3;
- (void)logFeedbackOfType:(long long)arg1 forSpeakableId:(id)arg2 withModelId:(id)arg3;
- (void)logSpeakable:(id)arg1 forContact:(id)arg2 withModelId:(id)arg3 withFeatures:(id)arg4 withScore:(float)arg5;
- (id)init;

@end

