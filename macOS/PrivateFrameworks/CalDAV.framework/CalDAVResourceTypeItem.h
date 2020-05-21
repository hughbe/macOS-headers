//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVResourceTypeItem.h>

@class CoreDAVItemWithNoChildren;

@interface CalDAVResourceTypeItem : CoreDAVResourceTypeItem
{
    CoreDAVItemWithNoChildren *_calendar;
    CoreDAVItemWithNoChildren *_scheduleInbox;
    CoreDAVItemWithNoChildren *_scheduleOutbox;
    CoreDAVItemWithNoChildren *_notification;
    CoreDAVItemWithNoChildren *_subscribed;
    CoreDAVItemWithNoChildren *_sharedOwner;
    CoreDAVItemWithNoChildren *_isFamilyCalendar;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *isFamilyCalendar; // @synthesize isFamilyCalendar=_isFamilyCalendar;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *sharedOwner; // @synthesize sharedOwner=_sharedOwner;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *subscribed; // @synthesize subscribed=_subscribed;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *notification; // @synthesize notification=_notification;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *scheduleOutbox; // @synthesize scheduleOutbox=_scheduleOutbox;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *scheduleInbox; // @synthesize scheduleInbox=_scheduleInbox;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *calendar; // @synthesize calendar=_calendar;
- (void)write:(id)arg1;
- (id)copyParseRules;

@end

