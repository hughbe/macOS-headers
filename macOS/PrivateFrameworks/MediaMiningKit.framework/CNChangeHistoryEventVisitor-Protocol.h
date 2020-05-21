//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaMiningKit/NSObject-Protocol.h>

@class CNChangeHistoryAddContactEvent, CNChangeHistoryAddGroupEvent, CNChangeHistoryAddMemberToGroupEvent, CNChangeHistoryAddSubgroupToGroupEvent, CNChangeHistoryDeleteContactEvent, CNChangeHistoryDeleteGroupEvent, CNChangeHistoryDropEverythingEvent, CNChangeHistoryRemoveMemberFromGroupEvent, CNChangeHistoryRemoveSubgroupFromGroupEvent, CNChangeHistoryUpdateContactEvent, CNChangeHistoryUpdateGroupEvent;

@protocol CNChangeHistoryEventVisitor <NSObject>
- (void)visitDeleteContactEvent:(CNChangeHistoryDeleteContactEvent *)arg1;
- (void)visitUpdateContactEvent:(CNChangeHistoryUpdateContactEvent *)arg1;
- (void)visitAddContactEvent:(CNChangeHistoryAddContactEvent *)arg1;
- (void)visitDropEverythingEvent:(CNChangeHistoryDropEverythingEvent *)arg1;

@optional
- (void)visitRemoveSubgroupFromGroupEvent:(CNChangeHistoryRemoveSubgroupFromGroupEvent *)arg1;
- (void)visitAddSubgroupToGroupEvent:(CNChangeHistoryAddSubgroupToGroupEvent *)arg1;
- (void)visitRemoveMemberFromGroupEvent:(CNChangeHistoryRemoveMemberFromGroupEvent *)arg1;
- (void)visitAddMemberToGroupEvent:(CNChangeHistoryAddMemberToGroupEvent *)arg1;
- (void)visitDeleteGroupEvent:(CNChangeHistoryDeleteGroupEvent *)arg1;
- (void)visitUpdateGroupEvent:(CNChangeHistoryUpdateGroupEvent *)arg1;
- (void)visitAddGroupEvent:(CNChangeHistoryAddGroupEvent *)arg1;
@end

