//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class CalDAVCalendarServerCancelItem, CalDAVCalendarServerReplyItem, CalDAVCalendarServerUpdateItem, CoreDAVItemWithNoChildren;

@interface CalDAVCalendarServerActionItem : CoreDAVItem
{
    CoreDAVItemWithNoChildren *_create;
    CalDAVCalendarServerUpdateItem *_update;
    CalDAVCalendarServerCancelItem *_cancel;
    CalDAVCalendarServerReplyItem *_reply;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CalDAVCalendarServerReplyItem *reply; // @synthesize reply=_reply;
@property(retain, nonatomic) CalDAVCalendarServerCancelItem *cancel; // @synthesize cancel=_cancel;
@property(retain, nonatomic) CalDAVCalendarServerUpdateItem *update; // @synthesize update=_update;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *create; // @synthesize create=_create;
- (id)copyParseRules;
- (id)init;

@end

