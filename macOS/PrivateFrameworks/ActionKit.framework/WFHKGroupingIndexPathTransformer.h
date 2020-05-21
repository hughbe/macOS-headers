//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSValueTransformer.h>

@class NSCalendar;

@interface WFHKGroupingIndexPathTransformer : NSValueTransformer
{
    long long _groupingOption;
    NSCalendar *_conversionCalendar;
}

+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;
- (void).cxx_destruct;
@property(retain, nonatomic) NSCalendar *conversionCalendar; // @synthesize conversionCalendar=_conversionCalendar;
@property(nonatomic) long long groupingOption; // @synthesize groupingOption=_groupingOption;
- (id)reverseTransformedValue:(id)arg1;
- (id)transformedValue:(id)arg1;
- (id)init;
- (id)initWithGroupingOption:(long long)arg1;

@end

