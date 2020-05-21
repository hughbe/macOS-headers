//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarPersistence/CalDateRangeProtocol-Protocol.h>
#import <CalendarPersistence/OccurrenceModelProtocol-Protocol.h>

@class NSDate, NSDateComponents, NSString, NSTimeZone, NSURL;
@protocol EKProtocolStructuredLocation, EventOccurrenceModelProtocol;

@protocol EventOccurrenceModelProtocol <OccurrenceModelProtocol, CalDateRangeProtocol>
@property(readonly, copy, nonatomic) NSDate *proposedEndDateUnadjustedFromUTCForMe;
@property(readonly, copy, nonatomic) NSDate *proposedStartDateUnadjustedFromUTCForMe;
@property(readonly, nonatomic) BOOL isYearlessLeapMonthBirthday;
@property(readonly, nonatomic) BOOL isYearlessBirthday;
@property(readonly, nonatomic) NSString *nameForBirthday;
@property(readonly, nonatomic) NSString *suggestionInfoUniqueKey;
@property(readonly, nonatomic) NSDate *suggestionInfoTimestamp;
@property(readonly, nonatomic) NSString *suggestionInfoOpaqueKey;
@property(readonly, nonatomic) unsigned long long suggestionInfoChangedFields;
@property(nonatomic) BOOL suggestionInfoAcknowledged;
@property(readonly, nonatomic) NSDate *sliceDate;
@property(readonly, copy, nonatomic) NSString *sliceParentID;
@property(readonly, nonatomic) BOOL isPhantom;
@property(readonly, nonatomic) BOOL dontSendNotificationForChanges;
@property(readonly, copy, nonatomic) NSString *responseComment;
@property(readonly, nonatomic) unsigned long long participantsStatus;
@property(readonly, copy, nonatomic) id <EKProtocolStructuredLocation> ekStructuredEndLocation;
@property(readonly, copy, nonatomic) id <EKProtocolStructuredLocation> ekStructuredStartLocation;
@property(readonly, nonatomic) NSURL *conferenceURL;
@property(readonly, nonatomic) unsigned long long junkStatus;
@property(readonly, copy, nonatomic) NSString *travelAdvisoryBehaviorString;
@property(readonly, nonatomic) BOOL needsGeocoding;
@property(readonly, nonatomic) double travelDuration;
@property(readonly, nonatomic) int availabilityEnum;
@property(readonly, copy, nonatomic) NSString *statusString;
@property(readonly, copy, nonatomic) NSString *privacyLevelString;
@property(readonly, copy, nonatomic) NSTimeZone *endTimeZoneObject;
@property(readonly, copy, nonatomic) NSDate *endDateUnadjustedFromUTC;
@property(readonly, copy, nonatomic) NSString *lunarCalendarString;
- (NSDateComponents *)durationComponents;
- (BOOL)isDetached;

@optional
- (BOOL)isSignificantlyDetachedIgnoringParticipation;
- (BOOL)isSignificantlyDetached;
- (id <EventOccurrenceModelProtocol>)masterEventOccurrence;
@end

