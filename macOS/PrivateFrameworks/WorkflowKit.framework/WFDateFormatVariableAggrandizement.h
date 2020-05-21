//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFVariableAggrandizement.h>

@class NSString;

@interface WFDateFormatVariableAggrandizement : WFVariableAggrandizement
{
}

+ (id)defaultAggrandizement;
- (void)applyToContentCollection:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)processedContentClasses:(id)arg1;
@property(readonly, nonatomic) BOOL includesTimeForISO8601;
@property(readonly, nonatomic) NSString *customDateFormat;
@property(readonly, nonatomic) NSString *relativeDateStyle;
@property(readonly, nonatomic) NSString *timeStyle;
@property(readonly, nonatomic) NSString *dateStyle;
- (id)initWithCustomDateFormat:(id)arg1;
- (id)initWithRFC2822DateStyle;
- (id)initWithISO8601DateStyleAndTime:(BOOL)arg1;
- (id)initWithRelativeTimeStyle;
- (id)initWithRelativeDateStyle:(id)arg1 timeStyle:(id)arg2;
- (id)initWithDateStyle:(id)arg1 timeStyle:(id)arg2 relativeDateStyle:(id)arg3;
- (id)initWithDateStyle:(id)arg1 timeStyle:(id)arg2 relativeDateStyle:(id)arg3 customDateFormat:(id)arg4 includesTimeForISO8601:(BOOL)arg5;

@end

