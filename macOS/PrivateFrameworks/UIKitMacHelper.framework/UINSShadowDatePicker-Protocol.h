//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSCalendar, NSDate, NSLocale, NSString;
@protocol UINSShadowDatePickerDelegate;

@protocol UINSShadowDatePicker
@property(readonly, nonatomic) struct CGRect backingDatePickerSubfieldsFrame;
@property(readonly, nonatomic) NSDate *backingDatePickerDateValue;
@property(retain, nonatomic) NSCalendar *calendar;
@property(copy, nonatomic) NSLocale *locale;
@property(copy, nonatomic) NSDate *dateValue;
@property(nonatomic) __weak id <UINSShadowDatePickerDelegate> delegate;
- (void)finishPendingEdit;
- (BOOL)processInputString:(NSString *)arg1 forElement:(unsigned long long)arg2;
- (void)decrememntElement:(unsigned long long)arg1;
- (void)incrememntElement:(unsigned long long)arg1;
- (NSArray *)calendarValues;
- (void)reloadCalendarValues;
- (void)createBackingDatePickerIfNecessary;
- (void)setBackingDatePickerMode:(unsigned long long)arg1;
@end

