//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NVMapScaleSegment : NSObject
{
    BOOL unitAbbreviated;
    long long unit;
    double displayedLength;
    double lengthInMeters;
}

@property(nonatomic) BOOL unitAbbreviated; // @synthesize unitAbbreviated;
@property(nonatomic) double lengthInMeters; // @synthesize lengthInMeters;
@property(nonatomic) double displayedLength; // @synthesize displayedLength;
@property(nonatomic) long long unit; // @synthesize unit;
- (id)_localizedStringForUnabbreviatedUnitWithPluralRule:(long long)arg1;
- (id)localizedUnitWithDisplayedNumber:(id)arg1;

@end

