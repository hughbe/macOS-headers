//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFAccessResource.h>

@interface WFRequestPaymentAccessResource : WFAccessResource
{
}

+ (BOOL)isSystemResource;
- (id)localizedWorkflowLevelMessageTemplate;
- (id)localizedWorkflowLevelPromptTemplate;
- (id)localizedWorkflowLevelDeniedStatusMessage;
- (id)localizedWorkflowLevelNotDeterminedStatusMessage;
- (unsigned long long)globalLevelStatus;
- (id)associatedAppIdentifier;

@end

