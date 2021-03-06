//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/NSCopying-Protocol.h>
#import <WorkflowKit/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface WFEKCalendarDescriptor : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _allCalendars;
    NSString *_calendarTitle;
    NSString *_calendarIdentifier;
    NSNumber *_calendarRGBAValue;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *calendarRGBAValue; // @synthesize calendarRGBAValue=_calendarRGBAValue;
@property(readonly, copy, nonatomic) NSString *calendarIdentifier; // @synthesize calendarIdentifier=_calendarIdentifier;
@property(readonly, copy, nonatomic) NSString *calendarTitle; // @synthesize calendarTitle=_calendarTitle;
@property(readonly, nonatomic) BOOL allCalendars; // @synthesize allCalendars=_allCalendars;
- (id)matchingCalendarsFromArray:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCalendarTitle:(id)arg1 identifier:(id)arg2 RGBAValue:(id)arg3;
- (id)initWithAllCalendars;

@end

