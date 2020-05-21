//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FamilyControls/FCTimeControl.h>

@interface FCAllowanceTimeControl : FCTimeControl
{
    int _secondsPerDay;
}

+ (id)weekendDefault;
+ (id)weekdayDefault;
+ (id)allowanceFromDictionary:(id)arg1;
+ (id)allowanceWithRange:(long long)arg1 secondsPerDay:(int)arg2 enabled:(BOOL)arg3;
@property int secondsPerDay; // @synthesize secondsPerDay=_secondsPerDay;
- (id)description;
- (BOOL)dateIsInEffect:(id)arg1;
- (id)plistRepresentation;
- (id)initWithRange:(long long)arg1 secondsPerDay:(int)arg2;
- (void)dealloc;

@end

