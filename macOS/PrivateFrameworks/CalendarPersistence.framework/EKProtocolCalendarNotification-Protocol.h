//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarPersistence/EKProtocolObject-Protocol.h>

@class NSDate, NSNumber, NSString;
@protocol CalendarSourceModelProtocol, EventOccurrenceModelProtocol;

@protocol EKProtocolCalendarNotification <EKProtocolObject>
@property(readonly, nonatomic) unsigned long long junkStatus;
@property(readonly) BOOL dismissed;
@property(readonly, nonatomic) id <CalendarSourceModelProtocol> containerSource;
@property(readonly, nonatomic) id <EventOccurrenceModelProtocol> occurrence;
@property(readonly, nonatomic) NSString *principalName;
@property(readonly) NSString *calendarName;
@property(readonly, nonatomic) BOOL attachmentsChanged;
@property(readonly, nonatomic) BOOL titleChanged;
@property(readonly, nonatomic) BOOL locationChanged;
@property(readonly, nonatomic) BOOL timeChanged;
@property(readonly, nonatomic) BOOL dateChanged;
@property(readonly, nonatomic) NSDate *proposedEndDateUnadjustedFromUTC;
@property(readonly, nonatomic) NSDate *proposedStartDateUnadjustedFromUTC;
@property(readonly) NSNumber *deletedCount;
@property(readonly) NSNumber *updatedCount;
@property(readonly) NSNumber *createdCount;
@property(readonly) NSString *filename;
@property(readonly) NSString *attendeeComment;
@property(readonly, nonatomic) NSNumber *senders;
@property(readonly, nonatomic) NSString *phoneNumber;
@property(readonly, nonatomic) NSString *emailAddress;
@property(readonly, nonatomic) NSString *lastName;
@property(readonly, nonatomic) NSString *firstName;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSString *componentType;
@property(readonly, nonatomic) NSNumber *notificationType;
@property(readonly) NSString *uuid;
- (BOOL)isProposedNewTime;
- (BOOL)isSharedCalendarReply;
- (BOOL)isSuggestion;
- (BOOL)isResourceChange;
- (BOOL)isSharedCalendarInvitation;
- (BOOL)isInvitation;
@end

