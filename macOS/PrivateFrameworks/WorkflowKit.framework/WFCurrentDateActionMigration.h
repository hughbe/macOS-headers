//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFWorkflowMigration.h>

@class NSDateFormatter;

@interface WFCurrentDateActionMigration : WFWorkflowMigration
{
    NSDateFormatter *_dateFormatter;
}

+ (BOOL)workflowNeedsMigration:(id)arg1 fromClientVersion:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
- (void)migrateWorkflow;

@end

