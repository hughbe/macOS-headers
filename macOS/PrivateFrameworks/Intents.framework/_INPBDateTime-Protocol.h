//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBLocalDate, _INPBLocalTime;

@protocol _INPBDateTime <NSObject>
@property(readonly, nonatomic) BOOL hasTimeZoneID;
@property(copy, nonatomic) NSString *timeZoneID;
@property(readonly, nonatomic) BOOL hasTime;
@property(retain, nonatomic) _INPBLocalTime *time;
@property(readonly, nonatomic) BOOL hasDate;
@property(retain, nonatomic) _INPBLocalDate *date;
@property(nonatomic) BOOL hasCalendarSystem;
@property(nonatomic) int calendarSystem;
- (int)StringAsCalendarSystem:(NSString *)arg1;
- (NSString *)calendarSystemAsString:(int)arg1;
@end

