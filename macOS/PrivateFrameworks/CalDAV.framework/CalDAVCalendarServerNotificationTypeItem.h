//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren;

@interface CalDAVCalendarServerNotificationTypeItem : CoreDAVItem
{
    CoreDAVItemWithNoChildren *_inviteNotification;
    CoreDAVItemWithNoChildren *_inviteReply;
    CoreDAVItemWithNoChildren *_resourceChanged;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *resourceChanged; // @synthesize resourceChanged=_resourceChanged;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *inviteReply; // @synthesize inviteReply=_inviteReply;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *inviteNotification; // @synthesize inviteNotification=_inviteNotification;
- (BOOL)notificationNameIn:(id)arg1;
- (BOOL)notificationNameMatches:(id)arg1;
@property(readonly, nonatomic) BOOL isResourceChanged;
@property(readonly, nonatomic) BOOL isInviteReply;
@property(readonly, nonatomic) BOOL isInviteNotification;
- (id)description;
- (id)copyParseRules;

@end

