//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class REMReminderChangeItem;

@interface REMReminderSubtaskContextChangeItem : NSObject
{
    REMReminderChangeItem *_reminderChangeItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) REMReminderChangeItem *reminderChangeItem; // @synthesize reminderChangeItem=_reminderChangeItem;
- (id)_listChangeItem;
- (void)undeleteSubtaskWithID:(id)arg1 usingUndo:(id)arg2;
- (void)insertReminderChangeItem:(id)arg1 afterReminderChangeItem:(id)arg2;
- (void)insertReminderChangeItem:(id)arg1 beforeReminderChangeItem:(id)arg2;
- (void)addReminderChangeItem:(id)arg1;
- (id)initWithReminderChangeItem:(id)arg1;

@end

