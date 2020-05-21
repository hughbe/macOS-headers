//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGTitleSpecArgument.h>

@interface PGTitleSpecTimeArgument : PGTitleSpecArgument
{
    unsigned long long _type;
}

+ (id)argumentWithTimeType:(unsigned long long)arg1;
@property(readonly) unsigned long long type; // @synthesize type=_type;
- (id)_holidayTitleWithMomentNodes:(id)arg1;
- (id)_yearsAgoStringWithEventNodes:(id)arg1 relativeToDateComponents:(id)arg2;
- (id)_birthdayTitleWithMomentNodes:(id)arg1;
- (id)_anniversaryTitleWithMomentNodes:(id)arg1;
- (id)_yearsAgoTitle;
- (id)_resolvedStringWithMomentNodes:(id)arg1 features:(id)arg2;
- (id)_resolvedStringWithMomentNodes:(id)arg1;
- (id)initWithTimeType:(unsigned long long)arg1;

@end

