//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface EventsFolderItemsSyncContext : NSObject
{
    int _calEventChangeId;
    int _calRecurrenceChangeId;
    int _calAlarmChangeId;
    int _calAttendeeChangeId;
    int _calAttachmentChangeId;
    int _highestSequenceNumber;
}

@property(nonatomic) int highestSequenceNumber; // @synthesize highestSequenceNumber=_highestSequenceNumber;
@property(nonatomic) int calAttachmentChangeId; // @synthesize calAttachmentChangeId=_calAttachmentChangeId;
@property(nonatomic) int calAttendeeChangeId; // @synthesize calAttendeeChangeId=_calAttendeeChangeId;
@property(nonatomic) int calAlarmChangeId; // @synthesize calAlarmChangeId=_calAlarmChangeId;
@property(nonatomic) int calRecurrenceChangeId; // @synthesize calRecurrenceChangeId=_calRecurrenceChangeId;
@property(nonatomic) int calEventChangeId; // @synthesize calEventChangeId=_calEventChangeId;

@end

