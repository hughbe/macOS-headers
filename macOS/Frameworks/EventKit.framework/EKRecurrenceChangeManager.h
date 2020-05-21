//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EKBackingStore;

@interface EKRecurrenceChangeManager : NSObject
{
    EKBackingStore *_backingStore;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak EKBackingStore *backingStore; // @synthesize backingStore=_backingStore;
- (void)undoThisAndFutureDeleteOnEvent:(id)arg1 originalMaster:(id)arg2;
- (id)_validExceptionDateInNewSeries:(id)arg1 originalDate:(id)arg2;
- (void)_moveExceptions:(id)arg1 fromSeries:(id)arg2 toSeries:(id)arg3 sliceDate:(id)arg4 copy:(BOOL)arg5;
- (BOOL)_shouldShiftExceptionDate:(id)arg1 fromMaster:(id)arg2 toMaster:(id)arg3 sliceDate:(id)arg4;
- (BOOL)_shouldMoveExceptionDate:(id)arg1 fromMaster:(id)arg2 toMaster:(id)arg3 sliceDate:(id)arg4;
- (void)_moveExceptionsFromSeries:(id)arg1 toSeries:(id)arg2 sliceDate:(id)arg3 copy:(BOOL)arg4;
- (BOOL)_updateDatesFromDetachedEvent:(id)arg1 toEvent:(id)arg2 calendar:(id)arg3 offset:(id)arg4 duration:(id)arg5;
- (void)_moveDetachedEvents:(id)arg1 fromSeries:(id)arg2 toSeries:(id)arg3 sliceDate:(id)arg4 copy:(BOOL)arg5;
- (void)_moveDetachedEventsFromSeries:(id)arg1 toSeries:(id)arg2 sliceDate:(id)arg3 copy:(BOOL)arg4;
- (void)_updateDetachedEventsAndExceptionsForSeries:(id)arg1;
- (void)moveDetachedEventsAndExceptionsFromSeries:(id)arg1 toSeries:(id)arg2 sliceDate:(id)arg3;
- (void)adjustDetachedEvents:(id)arg1 andExceptions:(id)arg2 onSeries:(id)arg3 sliceOffset:(id)arg4;
- (void)readdDetachedEvents:(id)arg1 andExceptions:(id)arg2 toSeries:(id)arg3 afterDate:(id)arg4;
- (void)moveDetachedEventsAndExceptionsFromSeries:(id)arg1 toSeries:(id)arg2;
- (void)copyDetachedEventsAndExceptionsFromSeries:(id)arg1 toSeries:(id)arg2;
- (id)_computeAppropriateRecurrenceEndDateForEvent:(id)arg1 sliceDate:(id)arg2;
- (void)_modifyRecurrenceRulesOnEarlierMaster:(id)arg1 laterMaster:(id)arg2 sliceDate:(id)arg3 isDelete:(BOOL)arg4;
- (BOOL)doThisAndFutureDeleteOnEvent:(id)arg1 withMaster:(id)arg2 error:(id *)arg3;
- (void)_adjustSliceEvent:(id)arg1 asFirstOccurrenceOfMaster:(id)arg2;
- (void)_adjustNewMaster:(id)arg1 withSliceDate:(id)arg2;
- (void)_adjustMaster:(id)arg1 matchDetailsFromSliceEvent:(id)arg2;
- (id)_createNewMasterFromOldMaster:(id)arg1;
- (void)_updateRecurrenceRulesForStartDayChangesOnEvent:(id)arg1;
- (id)doThisAndFutureChangeOnSeries:(id)arg1 forEvent:(id)arg2 error:(id *)arg3;
- (void)_applyAppropriateTimeShiftToSeries:(id)arg1 offset:(id)arg2 duration:(id)arg3;
- (id)_seriesOffsetForEvent:(id)arg1;
- (void)_handleTimeShiftOnSeries:(id)arg1 forEvent:(id)arg2;
- (id)doChangeAllOnSeries:(id)arg1 forEvent:(id)arg2 error:(id *)arg3;
- (id)initWithBackingStore:(id)arg1;

@end

