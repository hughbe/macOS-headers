//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKit/EKAttendee.h>

@interface EKAttendee (CalClassAdditions)
+ (id)attendeeFromDictionary:(id)arg1;
+ (id)calUI_attendeeFromCNAutoCompleteResult:(id)arg1;
+ (id)calUI_attendeeWithAddress:(id)arg1 name:(id)arg2;
+ (void)_checkAndSetAddressWithAttendee:(id)arg1 emailAddress:(id)arg2 phoneNumber:(id)arg3;
+ (id)_attendeeFromURI:(id)arg1 email:(id)arg2 phone:(id)arg3 name:(id)arg4;
+ (id)attendeeFromAttendeeRep:(id)arg1;
+ (id)attendeeFromContact:(id)arg1 group:(id)arg2;
+ (id)attendeeFromContact:(id)arg1;
- (id)dictionaryRepresentation;
- (id)calUI_recentEvent;
@end

