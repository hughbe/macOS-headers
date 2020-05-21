//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface STYUserScenario : NSObject
{
    NSString *_scenarioGroup;
    NSString *_scenarioID;
    long long _kpi;
    NSString *_titleText;
    NSString *_appBundleId;
    NSString *_appName;
}

+ (id)wakeScenario:(id)arg1 wakeSubtype:(id)arg2 error:(id *)arg3;
+ (id)scenarioFromSignpostInterval:(id)arg1 error:(id *)arg2;
+ (id)scenarioFromSignpostEvent:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(readonly) NSString *appName; // @synthesize appName=_appName;
@property(readonly) NSString *appBundleId; // @synthesize appBundleId=_appBundleId;
@property(readonly) NSString *titleText; // @synthesize titleText=_titleText;
@property(readonly) long long kpi; // @synthesize kpi=_kpi;
@property(readonly) NSString *scenarioID; // @synthesize scenarioID=_scenarioID;
@property(readonly) NSString *scenarioGroup; // @synthesize scenarioGroup=_scenarioGroup;
- (id)initWithConfiguration:(id)arg1 scenarioGroup:(id)arg2 kpi:(long long)arg3 processBundleID:(id)arg4 titleText:(id)arg5 processName:(id)arg6;
- (id)initWithLifecycleScenarioCategoryAndModelName:(id)arg1 modelName:(id)arg2 titleText:(id)arg3;

@end

