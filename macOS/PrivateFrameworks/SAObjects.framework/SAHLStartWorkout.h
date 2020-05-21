//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSString, SAHLWorkoutGoal, SAHLWorkoutType;

@interface SAHLStartWorkout : SADomainCommand
{
}

+ (id)startWorkoutWithDictionary:(id)arg1 context:(id)arg2;
+ (id)startWorkout;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSString *workoutUserMode;
@property(retain, nonatomic) SAHLWorkoutType *workoutType;
@property(retain, nonatomic) SAHLWorkoutGoal *workoutGoal;
@property(nonatomic) BOOL skipActivitySetup;
@property(nonatomic) BOOL isOpenGoal;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

