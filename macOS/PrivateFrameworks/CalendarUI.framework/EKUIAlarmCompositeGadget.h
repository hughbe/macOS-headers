//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarUI/EKUICompositeGadget.h>

@class NSArray, NSMutableArray;

@interface EKUIAlarmCompositeGadget : EKUICompositeGadget
{
    BOOL _showingNewAlarm;
    NSMutableArray *_alarmGadgets;
    NSArray *_existingConstraints;
}

+ (id)interestedChangeKeys;
- (void).cxx_destruct;
@property(retain) NSArray *existingConstraints; // @synthesize existingConstraints=_existingConstraints;
@property(retain) NSMutableArray *alarmGadgets; // @synthesize alarmGadgets=_alarmGadgets;
@property BOOL showingNewAlarm; // @synthesize showingNewAlarm=_showingNewAlarm;
- (BOOL)updateWithDiff:(id)arg1;
- (double)preferredWidth;
- (BOOL)isEditable;
- (void)setObject:(id)arg1;
- (void)addNewAlarmGadget;
- (void)addNoneAlarmGadget;
- (id)addAlarmGadget;
- (void)updateGadgetsAddButton;
- (BOOL)shouldDisplay;
- (id)subgadgets;
- (void)updateConstraints;
- (id)initWithViewController:(id)arg1;

@end

