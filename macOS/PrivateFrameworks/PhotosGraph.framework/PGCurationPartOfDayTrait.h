//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGCurationTrait.h>

@interface PGCurationPartOfDayTrait : PGCurationTrait
{
    unsigned long long _value;
}

@property(readonly, nonatomic) unsigned long long value; // @synthesize value=_value;
- (id)debugDescription;
- (id)niceDescription;
- (BOOL)isActive;
- (id)initWithPartOfDay:(unsigned long long)arg1;

@end

