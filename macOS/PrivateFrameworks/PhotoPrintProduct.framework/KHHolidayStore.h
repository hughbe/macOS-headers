//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSSet;

@interface KHHolidayStore : NSObject
{
    NSMutableDictionary *_holidaysCache;
    NSSet *_countryCodes;
    NSDictionary *_holidayCalendarURLStrings;
}

+ (id)_holidayTypesFromFile;
+ (id)_typeListForCountryWithCountryCode:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *holidayCalendarURLStrings; // @synthesize holidayCalendarURLStrings=_holidayCalendarURLStrings;
@property(copy, nonatomic) NSSet *countryCodes; // @synthesize countryCodes=_countryCodes;
@property(retain, nonatomic) NSMutableDictionary *holidaysCache; // @synthesize holidaysCache=_holidaysCache;
- (id)_fetchCalendarDataFromURL:(id)arg1;
- (id)_parseCalendarWithReferenceURL:(id)arg1 type:(unsigned long long)arg2 typeListForCountry:(id)arg3;
- (id)_holidaysCalendarURLForCountryWithCountryCode:(id)arg1;
- (id)holidaysForCountryWithCountryCode:(id)arg1 type:(unsigned long long)arg2;
- (id)init;

@end

