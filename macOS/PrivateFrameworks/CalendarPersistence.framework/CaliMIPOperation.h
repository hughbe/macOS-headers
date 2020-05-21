//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarPersistence/CalPersistentOperation.h>

@class NSArray;

@interface CaliMIPOperation : CalPersistentOperation
{
    NSArray *_attendeeObjectIDs;
}

+ (int)icsMethod;
+ (BOOL)updateSequenceNumber;
+ (BOOL)iMIPSchedulingWillResultFromChangesToManagedEvent:(id)arg1 ignoreiMIPSuppression:(BOOL)arg2;
+ (BOOL)iMIPSchedulingWillResultFromChangesToManagedEvent:(id)arg1;
+ (id)managedEventForManagedAttendee:(id)arg1;
+ (id)managedCalendarForManagedEvent:(id)arg1;
+ (BOOL)managedAttendeeWillCauseiMIPScheduling:(id)arg1;
+ (id)operationsWithManagedAttendees:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, retain) NSArray *attendeeObjectIDs; // @synthesize attendeeObjectIDs=_attendeeObjectIDs;
- (id)emailSubjectInContext:(id)arg1;
- (id)emailRecipientsInContext:(id)arg1;
- (id)emailBodyInContext:(id)arg1;
- (id)attachmentName;
- (id)attachmentInContext:(id)arg1;
- (id)managedEventInContext:(id)arg1;
- (id)organizerDisplayNameForAddress:(id)arg1 commonName:(id)arg2;
- (BOOL)executeInContext:(id)arg1 error:(id *)arg2;
- (id)fromAddressInContext:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)attachmentOptions;
- (id)attachmentForManagedEvent:(id)arg1 withMethod:(int)arg2;
- (id)initWithManagedAttendees:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

