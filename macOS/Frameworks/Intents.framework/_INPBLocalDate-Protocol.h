//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString;

@protocol _INPBLocalDate <NSObject>
@property(nonatomic) BOOL hasYear;
@property(nonatomic) long long year;
@property(nonatomic) BOOL hasMonth;
@property(nonatomic) long long month;
@property(nonatomic) BOOL hasDayOfWeek;
@property(nonatomic) int dayOfWeek;
@property(nonatomic) BOOL hasDayOfMonth;
@property(nonatomic) long long dayOfMonth;
- (int)StringAsDayOfWeek:(NSString *)arg1;
- (NSString *)dayOfWeekAsString:(int)arg1;
@end

