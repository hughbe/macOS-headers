//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreWLANKit/APFormatter.h>

__attribute__((visibility("hidden")))
@interface MinMaxIntFormatter : APFormatter
{
    int _minimum;
    int _maximum;
}

+ (id)formatterForMin:(int)arg1 max:(int)arg2;
- (BOOL)isPartialStringValid:(id)arg1 newEditingString:(id *)arg2 errorDescription:(id *)arg3;
- (int)maximum;
- (void)setMaximum:(int)arg1;
- (int)minimum;
- (void)setMinimum:(int)arg1;
- (id)initWithMin:(int)arg1 max:(int)arg2;

@end

