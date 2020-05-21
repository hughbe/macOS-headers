//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBContactEventTrigger, _INPBDataString, _INPBIntentMetadata, _INPBSpatialEventTrigger, _INPBTask, _INPBTemporalEventTrigger;

@protocol _INPBSetTaskAttributeIntent <NSObject>
@property(readonly, nonatomic) BOOL hasTemporalEventTrigger;
@property(retain, nonatomic) _INPBTemporalEventTrigger *temporalEventTrigger;
@property(readonly, nonatomic) BOOL hasTaskTitle;
@property(retain, nonatomic) _INPBDataString *taskTitle;
@property(readonly, nonatomic) BOOL hasTargetTask;
@property(retain, nonatomic) _INPBTask *targetTask;
@property(nonatomic) BOOL hasStatus;
@property(nonatomic) int status;
@property(readonly, nonatomic) BOOL hasSpatialEventTrigger;
@property(retain, nonatomic) _INPBSpatialEventTrigger *spatialEventTrigger;
@property(nonatomic) BOOL hasPriority;
@property(nonatomic) int priority;
@property(readonly, nonatomic) BOOL hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(readonly, nonatomic) BOOL hasContactEventTrigger;
@property(retain, nonatomic) _INPBContactEventTrigger *contactEventTrigger;
- (int)StringAsStatus:(NSString *)arg1;
- (NSString *)statusAsString:(int)arg1;
- (int)StringAsPriority:(NSString *)arg1;
- (NSString *)priorityAsString:(int)arg1;
@end

