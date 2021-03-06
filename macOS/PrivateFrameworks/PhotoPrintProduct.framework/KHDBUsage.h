//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface KHDBUsage : NSObject
{
    unsigned long long _occurrences;
    double _maxTime;
    double _totalTime;
}

@property(nonatomic) double totalTime; // @synthesize totalTime=_totalTime;
@property(nonatomic) double maxTime; // @synthesize maxTime=_maxTime;
@property(nonatomic) unsigned long long occurrences; // @synthesize occurrences=_occurrences;
- (void)showUsageNamed:(id)arg1 forDBFilename:(id)arg2;
- (void)addUsage:(double)arg1;
- (double)averageTime;

@end

