//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaMiningKit/CLSPrimitive.h>

@class CLLocation, NSArray, NSDate, NSString;

@interface CLSEvent : CLSPrimitive
{
    BOOL _meetingRoom;
    BOOL _organizedByMe;
    BOOL _accepted;
    NSString *_title;
    CLLocation *_location;
    NSArray *_attendees;
    NSArray *_performers;
    NSDate *_startDate;
    NSDate *_endDate;
}

+ (id)event;
- (void).cxx_destruct;
@property(nonatomic, getter=isAccepted) BOOL accepted; // @synthesize accepted=_accepted;
@property(nonatomic, getter=isOrganizedByMe) BOOL organizedByMe; // @synthesize organizedByMe=_organizedByMe;
@property(nonatomic, getter=hasMeetingRoom) BOOL meetingRoom; // @synthesize meetingRoom=_meetingRoom;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) NSArray *performers; // @synthesize performers=_performers;
@property(retain, nonatomic) NSArray *attendees; // @synthesize attendees=_attendees;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isEqualToEvent:(id)arg1;
- (id)description;

@end

