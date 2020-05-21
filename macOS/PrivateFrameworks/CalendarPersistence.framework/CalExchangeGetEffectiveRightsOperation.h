//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarPersistence/CalExchangeOperation.h>

@class NSManagedObjectID;

@interface CalExchangeGetEffectiveRightsOperation : CalExchangeOperation
{
    NSManagedObjectID *_calendarObjectID;
}

+ (id)responseShape;
+ (void)setPermission:(id)arg1 withEffectiveRights:(id)arg2;
- (BOOL)executeWithBinding:(id)arg1 inSession:(id)arg2 inContext:(id)arg3 error:(id *)arg4;
- (void)dealloc;
- (id)initWithSession:(id)arg1 calendarObjectID:(id)arg2;

@end

