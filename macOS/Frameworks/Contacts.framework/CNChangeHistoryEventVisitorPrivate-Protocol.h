//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Contacts/CNChangeHistoryEventVisitor-Protocol.h>

@class CNChangeHistoryDifferentMeCardEvent, CNChangeHistoryLinkContactsEvent, CNChangeHistoryPreferredContactForImageEvent, CNChangeHistoryPreferredContactForNameEvent, CNChangeHistoryUnlinkContactEvent;

@protocol CNChangeHistoryEventVisitorPrivate <CNChangeHistoryEventVisitor>
- (void)visitDifferentMeCardEvent:(CNChangeHistoryDifferentMeCardEvent *)arg1;
- (void)visitPreferredContactForImageEvent:(CNChangeHistoryPreferredContactForImageEvent *)arg1;
- (void)visitPreferredContactForNameEvent:(CNChangeHistoryPreferredContactForNameEvent *)arg1;
- (void)visitUnlinkContactEvent:(CNChangeHistoryUnlinkContactEvent *)arg1;
- (void)visitLinkContactsEvent:(CNChangeHistoryLinkContactsEvent *)arg1;
@end

