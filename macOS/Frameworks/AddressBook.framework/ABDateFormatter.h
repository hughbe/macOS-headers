//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSDateFormatter.h>

@class NSString;

@interface ABDateFormatter : NSDateFormatter
{
    NSString *_fullDateFormatString;
    NSString *_yearlessDateFormatString;
}

+ (BOOL)isDateYearless:(id)arg1;
- (id)formatStringForComponents:(id)arg1;
- (BOOL)getObjectValue:(id *)arg1 forString:(id)arg2 errorDescription:(id *)arg3;
- (id)stringForObjectValue:(id)arg1;
- (void)dealloc;
- (void)localeChanged:(id)arg1;
- (void)rebuildDateComponents;
- (void)ABDateFormatter_commonInit;
- (void)awakeFromNib;
- (id)init;

@end

