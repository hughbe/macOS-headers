//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface WFAccessResourcePerWorkflowAuthorizationManager : NSObject
{
}

+ (void)setNotDeterminedAccessResourcesAuthorizedInAction:(id)arg1 forReference:(id)arg2 inDatabase:(id)arg3 existingAccessResources:(id)arg4;
+ (void)setAccessResourcesToAuthorizedIfNotDetermined:(id)arg1 otherActions:(id)arg2;
+ (void)setStatusForAllAccessResourcesTo:(long long)arg1 inWorkflow:(id)arg2 forReference:(id)arg3 inDatabase:(id)arg4;
+ (void)setAccessResourcesToAuthorizedIfNotDeterminedInWorkflow:(id)arg1 forReference:(id)arg2 inDatabase:(id)arg3;
+ (void)setAccessResourcesToAuthorizedIfNotDeterminedInActions:(id)arg1 existingActions:(id)arg2 forReference:(id)arg3 inDatabase:(id)arg4;

@end

