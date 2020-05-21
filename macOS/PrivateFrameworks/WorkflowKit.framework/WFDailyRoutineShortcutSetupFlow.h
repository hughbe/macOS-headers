//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, WFDailyRoutineShortcutSetupLocation, WFDailyRoutineShortcutSetupTriggerBuilder;

@interface WFDailyRoutineShortcutSetupFlow : NSObject
{
    NSString *_routineName;
    NSArray *_questions;
    WFDailyRoutineShortcutSetupTriggerBuilder *_trigger;
    WFDailyRoutineShortcutSetupLocation *_location;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) WFDailyRoutineShortcutSetupLocation *location; // @synthesize location=_location;
@property(readonly, nonatomic) WFDailyRoutineShortcutSetupTriggerBuilder *trigger; // @synthesize trigger=_trigger;
@property(readonly, copy, nonatomic) NSArray *questions; // @synthesize questions=_questions;
@property(readonly, copy, nonatomic) NSString *routineName; // @synthesize routineName=_routineName;
- (id)initWithRoutineName:(id)arg1 questions:(id)arg2 trigger:(id)arg3 location:(id)arg4;

@end

