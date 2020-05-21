//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarPersistence/CalManagedCalendarItem.h>

#import <CalendarPersistence/EventOccurrenceModelProtocol-Protocol.h>

@class CalManagedAttendee, CalManagedLocation, CalManagedRecurrenceException, NSArray, NSData, NSDate, NSDictionary, NSManagedObjectID, NSMutableSet, NSNumber, NSString, NSTimeZone, NSURL;
@protocol CalendarModelProtocol, EKProtocolParticipant, EKProtocolStructuredLocation;

@interface CalManagedEvent : CalManagedCalendarItem <EventOccurrenceModelProtocol>
{
}

+ (id)locationStringFromArray:(id)arg1;
+ (BOOL)isOrganizerMeForManagedEvent:(id)arg1 inManagedCalendar:(id)arg2;
+ (int)attendeeIconStateForManagedEvent:(id)arg1 inManagedCalendar:(id)arg2;
+ (id)fetchRequestForEventsWithStartDateInFutureForCalendars:(id)arg1 inContext:(id)arg2;
+ (id)fetchRequestForFutureEventsNeedingReplyForCalendars:(id)arg1 inContext:(id)arg2;
+ (id)fetchRequestWithSharedUID:(id)arg1 occurrence:(id)arg2 calendars:(id)arg3 inManagedObjectContext:(id)arg4;
+ (id)fetchRequestWithSharedUID:(id)arg1 occurrence:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)fetchRequestWithLocalUID:(id)arg1 occurrence:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)fetchRequestWithPredicate:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)propertiesRequiringExchangeReschedule;
+ (id)recognizedICSPropertyParameterMap;
+ (id)recognizedICSProperties;
+ (id)entityName;
+ (id)stringIDForUTCDateTime:(id)arg1;
+ (id)stringIDForFloatingDateTime:(id)arg1;
+ (id)stringIDForAllDayDate:(id)arg1;
@property(readonly, nonatomic, getter=isSuggestedEvent) BOOL suggestedEvent;
- (void)setDontSendNotificationForChanges:(BOOL)arg1;
@property(readonly, nonatomic) BOOL dontSendNotificationForChanges;
@property(readonly, nonatomic) NSString *nameForBirthday;
@property(readonly, nonatomic) BOOL isYearlessBirthday;
- (void)setLunarCalendarString:(id)arg1;
@property(readonly, copy, nonatomic) NSString *lunarCalendarString;
@property(readonly, copy, nonatomic) NSString *sliceParentID;
@property(readonly, nonatomic) BOOL cachedIsCurrentUserInvitedAttendee;
@property(readonly, nonatomic) BOOL cachedIsCalendarOwnerInvitedAttendee;
@property(readonly, nonatomic) BOOL cachedHasAttendee;
- (void)setResponseComment:(id)arg1;
- (void)setScheduleAgentString:(id)arg1;
@property(readonly, copy, nonatomic) NSString *scheduleAgentString;
@property(readonly, copy, nonatomic) NSString *responseComment;
- (void)setPrivacyLevelString:(id)arg1;
@property(readonly, copy, nonatomic) NSString *privacyLevelString;
- (void)setEkStructuredEndLocation:(id)arg1;
- (void)setEkStructuredStartLocation:(id)arg1;
@property(readonly, copy, nonatomic) id <EKProtocolStructuredLocation> ekStructuredEndLocation;
@property(readonly, copy, nonatomic) id <EKProtocolStructuredLocation> ekStructuredStartLocation;
@property(readonly) NSArray *locationStrings;
@property(readonly) NSString *locationString;
@property(readonly, retain, nonatomic) NSDate *recurrenceDateUnadjustedFromUTC;
@property(readonly, nonatomic) unsigned long long participantsStatus;
- (void)resetNewTimeProposals;
@property(readonly, copy, nonatomic) NSDate *proposedEndDateUnadjustedFromUTCForMe;
@property(readonly, copy, nonatomic) NSDate *proposedStartDateUnadjustedFromUTCForMe;
@property(readonly, copy, nonatomic) id <EKProtocolParticipant> participantForMe;
- (id)attendeeSet;
@property(readonly, nonatomic) BOOL organizedByMe;
- (void)setOrganizerEncodedLikenessData:(id)arg1;
@property(readonly, copy, nonatomic) NSString *organizerEncodedLikenessData;
@property(copy, nonatomic) NSString *organizerPhoneNumber;
- (void)setOrganizerEmail:(id)arg1;
@property(readonly, copy, nonatomic) NSString *organizerEmail;
- (void)setOrganizerURL:(id)arg1;
@property(readonly, copy, nonatomic) NSURL *organizerURL;
- (void)setOrganizerName:(id)arg1;
@property(readonly, copy, nonatomic) NSString *organizerName;
- (void)setAvailabilityEnum:(int)arg1;
@property(readonly, nonatomic) int availabilityEnum;
- (void)setJunkStatus:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long junkStatus;
- (void)setStatusString:(id)arg1;
@property(readonly, copy, nonatomic) NSString *statusString;
- (id)durationComponents;
- (void)setEndTimeZoneObject:(id)arg1;
@property(readonly, copy, nonatomic) NSTimeZone *endTimeZoneObject;
- (void)setEndDateUnadjustedFromUTC:(id)arg1;
@property(readonly, copy, nonatomic) NSDate *endDateUnadjustedFromUTC;
- (void)setStartDateUnadjustedFromUTC:(id)arg1;
@property(readonly, copy, nonatomic) NSDate *startDateUnadjustedFromUTC;
- (id)masterEventOccurrence;
- (BOOL)isEvent;
- (void)overwriteStructuredLocationIfNeeded:(id)arg1;
- (id)changedValuesIncludingLocation;
- (id)committedMasterItem;
- (id)masterItem;
- (void)_fetchManagedAttachmentsWithSource:(id)arg1 userInitiated:(BOOL)arg2;
- (void)_queueScanDropboxOperationUserInitiated:(BOOL)arg1;
- (void)queueScanDropboxOperationUserInitiated;
- (void)queueScanDropboxOperation;
- (void)agentScanDropboxOperation;
- (id)expandAndTranslateEventsFromDate:(id)arg1 toDate:(id)arg2 translateBlock:(CDUnknownBlockType)arg3 sortSelector:(SEL)arg4;
- (void)setNeedsGeocoding:(BOOL)arg1;
@property(readonly, nonatomic) BOOL needsGeocoding;
@property(nonatomic) double travelDuration;
- (id)travelRouteType;
- (void)updateScheduleTag:(id)arg1;
- (void)updateETag:(id)arg1;
@property(retain, nonatomic) NSDate *endDate; // @dynamic endDate;
- (void)setStartDate:(id)arg1;
- (void)updateDurationDerivedProperties;
- (id)defaultAlarmsBasedOnItemAndPreferencesFromServer:(BOOL)arg1;
- (id)defaultAlarmsBasedOnItemAndPreferences;
- (void)setTravelAdvisoryBehaviorString:(id)arg1;
@property(readonly, copy, nonatomic) NSString *travelAdvisoryBehaviorString;
- (double)duration;
- (BOOL)allowAttendeePreservingMoveToCalendar:(id)arg1;
- (BOOL)isOlderThanICSEvent:(id)arg1 fromICSCalendar:(id)arg2;
- (BOOL)isOrganizerScheduleAgentNonServer;
- (id)relationshipsToCompareForMerge;
- (id)attributesToCompareForMerge;
- (BOOL)hasAlarmWithDuration:(id)arg1 thatOverlapsOccWithStartDate:(id)arg2 andEndDate:(id)arg3;
- (BOOL)isOverlappingAlarmForStartDate:(id)arg1 endDate:(id)arg2 newDuration:(id)arg3;
- (BOOL)hasOccurrencesThatOverlap;
- (BOOL)isOverlappingAdjacentOccurrenceForStartDate:(id)arg1 endDate:(id)arg2 originalStartDate:(id)arg3;
- (BOOL)_isDate:(id)arg1 betweenStart:(id)arg2 andEnd:(id)arg3;
- (BOOL)isExchangeCompatible;
- (id)_makeExchangeCompatible;
- (BOOL)hasOccurrenceAfter:(id)arg1;
- (BOOL)hasOccurrenceOnOrAfter:(id)arg1 includingExceptions:(BOOL)arg2;
- (BOOL)hasOccurrenceOnOrAfter:(id)arg1;
- (BOOL)hasInvitedAttendee;
- (BOOL)isInvitationStatusPending;
- (int)calculateInvitationModeInCalendar:(id)arg1;
- (BOOL)isAnyAttendeeMeInCalendar:(id)arg1;
- (BOOL)isAnInvitation;
- (BOOL)isAnInvitationInCalendar:(id)arg1;
- (BOOL)isOrganizerOwner;
- (void)refreshRelationships;
- (id)earliestOccurrenceDateBetweenStartDate:(id)arg1 endDate:(id)arg2 withOffSet:(long long)arg3;
- (id)occurrencesBinnedByDayForEvents:(id)arg1 inCalendar:(id)arg2 startDate:(id)arg3 endDate:(id)arg4;
- (BOOL)hasOccurrenceInRangeFromDate:(id)arg1 toDate:(id)arg2 withExcludingOption:(int)arg3;
- (id)occurrencesFromDate:(id)arg1 toDate:(id)arg2 withExcludingOption:(int)arg3;
- (id)occurrenceHelperFromDate:(id)arg1 toDate:(id)arg2 withExcludingOption:(int)arg3 justChecking:(BOOL)arg4;
- (id)_occurrenceWithOccurrenceDate:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3 exception:(id)arg4 withExcludingOption:(int)arg5;
- (id)_endDateForRecurrenceID:(id)arg1;
- (id)_exceptionsWithIntervalKeysDictionary;
- (id)_occurrenceDatesFromDate:(id)arg1 toDate:(id)arg2;
- (id)_occurrencesWithNoRecurrenceRuleFromDate:(id)arg1 toDate:(id)arg2 withExcludingOption:(int)arg3;
- (id)_occurrenceForException:(id)arg1 onDate:(id)arg2 fromDate:(id)arg3 toDate:(id)arg4 withExcludingOption:(int)arg5;
- (BOOL)hasOccurrenceInRangeFromDate:(id)arg1 toDate:(id)arg2;
- (BOOL)hasOccurrenceWithStartDate:(id)arg1;
- (id)occurrencesFromDate:(id)arg1 toDate:(id)arg2 excludeDetached:(BOOL)arg3;
- (id)occurrencesFromDate:(id)arg1 toDate:(id)arg2;
- (id)detachedEventWithOccurrence:(id)arg1;
- (id)detachForOccurrence:(id)arg1;
- (id)_detachForOccurrence:(id)arg1;
- (id)timeToLeaveAlarm;
- (id)allAlarms;
- (BOOL)validateForUpdate:(id *)arg1;
- (BOOL)validateForInsert:(id *)arg1;
- (BOOL)validateForWrite:(id *)arg1;
- (void)_updateLikenessPropertiesForSave;
- (void)willSave;
- (BOOL)isSignificantlyDetachedIgnoringParticipation;
@property(readonly) BOOL isSignificantlyDetached;
- (BOOL)shouldShowSeparateInvite;
- (int)_commonDetachmentTests;
- (id)newestInvitation;
@property(retain) NSURL *organizerAddress; // @dynamic organizerAddress;
- (void)setConferenceURL:(id)arg1;
@property(readonly, nonatomic) NSURL *conferenceURL;
@property(nonatomic) int statusType;
- (void)updateAttendeeDerivedPropertiesInCalendar:(id)arg1 processPendingChanges:(BOOL)arg2 myAttendee:(id)arg3;
- (void)updateAttendeeDerivedPropertiesInCalendar:(id)arg1 processPendingChanges:(BOOL)arg2;
- (void)updateAttendeeDerivedPropertiesInCalendar:(id)arg1 myAttendee:(id)arg2;
- (void)updateAttendeeDerivedPropertiesInCalendar:(id)arg1;
- (void)updateMyParstatDerivedPropertiesInCalendar:(id)arg1;
- (id)filenameWithoutExtension;
- (void)willRefresh:(BOOL)arg1;
- (id)attendeesExcludingOrganizer;
@property(readonly) BOOL changesWillResultIniMIPScheduling;
- (void)sendiTIP:(int)arg1 withInfo:(id)arg2 changeRequest:(id *)arg3;
- (void)sendITIPCancelExtraAttendeesInExceptions;
- (void)sendITIPCancelExtraAttendees;
- (id)_committedRecurrenceID;
- (void)sendiTIP:(int)arg1 changeRequest:(id *)arg2;
- (void)sendiTIP:(int)arg1 withInfo:(id)arg2;
- (void)sendiTIP:(int)arg1;
- (void)_sendEmailiTIP:(id)arg1 partstat:(int)arg2;
- (void)_sendCalDAViTIP:(id)arg1;
- (void)_sendCalDAViTIP:(id)arg1 changeRequest:(id *)arg2;
- (id)alarmsFromICSEventHelper:(id)arg1;
- (id)eventsFromICSDocumentHelper:(id)arg1;
- (BOOL)importiCalendarComponent:(id)arg1 occurrences:(id)arg2 fromDocument:(id)arg3 inCalendar:(id)arg4 options:(unsigned long long)arg5 deletionBlock:(CDUnknownBlockType)arg6;
- (void)_updateAfterStartDateWithComponent:(id)arg1;
- (void)_zeroTimeIfUndefinedInComponents:(id)arg1;
- (void)_invalidInstances:(id *)arg1 _duplicateExceptions:(id *)arg2;
- (id)iCalendarDocumentWithOptions:(unsigned long long)arg1;
- (id)iCalendarDocumentWithMethod:(int)arg1 options:(unsigned long long)arg2;
- (id)_iCalendarElementWithOptions:(unsigned long long)arg1;
- (Class)entityClass;
- (id)occurrenceID;
- (id)occurrenceIDForOccurrenceDate:(id)arg1;
- (id)entityID;
- (int)legacyDateType;
- (void)updateWithEntity:(id)arg1 alarms:(BOOL)arg2 inCalendar:(id)arg3 processChanges:(BOOL)arg4;
- (void)updateWithEntity:(id)arg1 alarms:(BOOL)arg2 inCalendar:(id)arg3;
- (void)_updateWithEntity:(id)arg1 alarms:(BOOL)arg2 omitSyncRecord:(BOOL)arg3 inCalendar:(id)arg4;
- (id)rawTitle;

// Remaining properties
@property BOOL amIInvited; // @dynamic amIInvited;
@property(retain) NSMutableSet *attendeeComments; // @dynamic attendeeComments;
@property int attendeeIconState; // @dynamic attendeeIconState;
@property(retain) NSMutableSet *attendees; // @dynamic attendees;
@property(retain) NSString *birthdayName; // @dynamic birthdayName;
@property(readonly, nonatomic) BOOL cachedHasAlarm;
@property(readonly, nonatomic) BOOL cachedHasAttachment;
@property(readonly, nonatomic) NSNumber *calendarItemPermissionNumber;
@property(readonly, nonatomic) BOOL canBeConvertedToFullObject;
@property(retain) NSString *conferenceURLString; // @dynamic conferenceURLString;
@property(readonly, copy, nonatomic) NSString *contactIdentifiersString;
@property(readonly, retain, nonatomic) id <CalendarModelProtocol> container;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) BOOL defaultAlarmWasDeleted;
@property(readonly, copy) NSString *description;
@property BOOL dontNotify; // @dynamic dontNotify;
@property BOOL dontSchedule; // @dynamic dontSchedule;
@property(readonly, copy, nonatomic) id <EKProtocolStructuredLocation> ekStructuredLocation;
@property(retain) CalManagedLocation *endLocation; // @dynamic endLocation;
@property(retain) NSString *endTimeZone; // @dynamic endTimeZone;
@property BOOL hasAttendee; // @dynamic hasAttendee;
@property BOOL hasRecurrenceException; // @dynamic hasRecurrenceException;
@property(readonly) unsigned long long hash;
@property int invitationMode; // @dynamic invitationMode;
@property BOOL isBirthdayWithoutYear; // @dynamic isBirthdayWithoutYear;
@property BOOL isCalendarOwnerInvited; // @dynamic isCalendarOwnerInvited;
@property BOOL isDetached; // @dynamic isDetached;
@property BOOL isInvitationDirty; // @dynamic isInvitationDirty;
@property BOOL isInvitationSent; // @dynamic isInvitationSent;
@property BOOL isMyResponseDirty; // @dynamic isMyResponseDirty;
@property BOOL isOrganizerMe; // @dynamic isOrganizerMe;
@property(readonly, nonatomic) BOOL isPartialObject;
@property(nonatomic) BOOL isPhantom; // @dynamic isPhantom;
@property BOOL isRSVPNeeded; // @dynamic isRSVPNeeded;
@property BOOL isVeryLongDuration; // @dynamic isVeryLongDuration;
@property(nonatomic) BOOL isYearlessLeapMonthBirthday; // @dynamic isYearlessLeapMonthBirthday;
@property unsigned long long junkStatusEnum; // @dynamic junkStatusEnum;
@property(retain) NSString *linkID; // @dynamic linkID;
@property(readonly, copy, nonatomic) NSData *localStructuredData;
@property(retain) NSString *lunarCalendarID; // @dynamic lunarCalendarID;
@property(readonly, nonatomic) NSManagedObjectID *managedObjectID;
@property(retain) CalManagedRecurrenceException *masterException; // @dynamic masterException;
@property(retain) NSMutableSet *messages; // @dynamic messages;
@property(retain) CalManagedAttendee *myAttendee; // @dynamic myAttendee;
@property(retain) NSString *myAttendeeStatus; // @dynamic myAttendeeStatus;
@property BOOL needsReply; // @dynamic needsReply;
@property(retain) NSString *organizerCommonName; // @dynamic organizerCommonName;
@property(retain) NSString *organizerEmailAddress; // @dynamic organizerEmailAddress;
@property(retain) NSString *organizerLikenessDataString; // @dynamic organizerLikenessDataString;
@property(retain) NSString *organizerScheduleAgent; // @dynamic organizerScheduleAgent;
@property(retain) NSString *organizerScheduleStatus; // @dynamic organizerScheduleStatus;
@property(readonly, nonatomic) NSDictionary *preFrozenRelationshipObjects;
@property(retain) NSString *privateComment; // @dynamic privateComment;
@property(retain) NSDate *recurrenceEndDate; // @dynamic recurrenceEndDate;
@property(retain) NSMutableSet *recurrenceExceptions; // @dynamic recurrenceExceptions;
@property(readonly, copy, nonatomic) NSString *recurrenceRuleString;
@property(readonly, copy, nonatomic) NSString *recurrenceSetID;
@property(readonly, copy, nonatomic) NSString *relatedExternalID;
@property(retain) CalManagedEvent *sliceChild; // @dynamic sliceChild;
@property(retain, nonatomic) NSDate *sliceDate; // @dynamic sliceDate;
@property(retain) CalManagedEvent *sliceParent; // @dynamic sliceParent;
@property(readonly, nonatomic) NSDate *startDate;
@property(retain) NSDate *startDateIncludingTravel; // @dynamic startDateIncludingTravel;
@property(readonly, copy, nonatomic) NSData *structuredData;
@property(nonatomic) BOOL suggestionInfoAcknowledged; // @dynamic suggestionInfoAcknowledged;
@property(nonatomic) unsigned long long suggestionInfoChangedFields; // @dynamic suggestionInfoChangedFields;
@property(retain, nonatomic) NSString *suggestionInfoOpaqueKey; // @dynamic suggestionInfoOpaqueKey;
@property(retain, nonatomic) NSDate *suggestionInfoTimestamp; // @dynamic suggestionInfoTimestamp;
@property(retain, nonatomic) NSString *suggestionInfoUniqueKey; // @dynamic suggestionInfoUniqueKey;
@property(readonly) Class superclass;
@property(retain) NSDate *timeToLeaveAcknowledged; // @dynamic timeToLeaveAcknowledged;
@property(readonly, copy, nonatomic) NSTimeZone *timeZoneObject;
@property int transparency; // @dynamic transparency;
@property(retain) NSString *travelAdvisoryBehavior; // @dynamic travelAdvisoryBehavior;
@property(retain) CalManagedLocation *travelStartLocation; // @dynamic travelStartLocation;
@property(retain) NSNumber *unlistedOtherAttendees; // @dynamic unlistedOtherAttendees;
@property BOOL userInitiatedLocationInterest; // @dynamic userInitiatedLocationInterest;

@end

