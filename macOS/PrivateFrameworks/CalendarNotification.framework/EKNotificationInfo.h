//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDateComponents, NSDictionary, NSImage, NSString;

@interface EKNotificationInfo : NSObject
{
    BOOL _isForBirthday;
    BOOL _isForToday;
    BOOL _isForTomorrow;
    BOOL _isInvitation;
    BOOL _isForReminders;
    BOOL _isForCalendar;
    BOOL _displayEventCountdown;
    BOOL _hasActionButton;
    NSString *_identifier;
    NSString *_title;
    NSString *_informativeText;
    NSDictionary *_userInfo;
    NSDate *_eventDate;
    NSDateComponents *_deliveryExpiration;
    NSDateComponents *_duration;
    NSImage *_image;
    NSArray *_peopleIdentifiers;
    NSString *_actionButtonTitle;
    NSString *_otherButtonTitle;
    unsigned long long _coalseceCount;
}

- (void).cxx_destruct;
@property unsigned long long coalseceCount; // @synthesize coalseceCount=_coalseceCount;
@property(retain) NSString *otherButtonTitle; // @synthesize otherButtonTitle=_otherButtonTitle;
@property(retain) NSString *actionButtonTitle; // @synthesize actionButtonTitle=_actionButtonTitle;
@property BOOL hasActionButton; // @synthesize hasActionButton=_hasActionButton;
@property(retain) NSArray *peopleIdentifiers; // @synthesize peopleIdentifiers=_peopleIdentifiers;
@property(retain) NSImage *image; // @synthesize image=_image;
@property(retain) NSDateComponents *duration; // @synthesize duration=_duration;
@property(retain) NSDateComponents *deliveryExpiration; // @synthesize deliveryExpiration=_deliveryExpiration;
@property(retain) NSDate *eventDate; // @synthesize eventDate=_eventDate;
@property(retain) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain) NSString *informativeText; // @synthesize informativeText=_informativeText;
@property(retain) NSString *title; // @synthesize title=_title;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
@property BOOL displayEventCountdown; // @synthesize displayEventCountdown=_displayEventCountdown;
@property BOOL isForCalendar; // @synthesize isForCalendar=_isForCalendar;
@property BOOL isForReminders; // @synthesize isForReminders=_isForReminders;
@property BOOL isInvitation; // @synthesize isInvitation=_isInvitation;
@property BOOL isForTomorrow; // @synthesize isForTomorrow=_isForTomorrow;
@property BOOL isForToday; // @synthesize isForToday=_isForToday;
@property BOOL isForBirthday; // @synthesize isForBirthday=_isForBirthday;

@end

