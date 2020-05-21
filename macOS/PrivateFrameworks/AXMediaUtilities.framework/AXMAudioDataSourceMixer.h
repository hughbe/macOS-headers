//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AXMediaUtilities/AXMAudioDataSource.h>

@class NSSet, NSString;

@interface AXMAudioDataSourceMixer : AXMAudioDataSource
{
    NSString *_name;
    double _panning;
    NSSet *_dataSources;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSSet *dataSources; // @synthesize dataSources=_dataSources;
@property(nonatomic) double panning; // @synthesize panning=_panning;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;
@property(readonly, nonatomic) BOOL isMonoOutput;
- (void)prepareNextSamples:(unsigned long long)arg1;
- (void)removeAllDataSources;
- (void)removeDataSource:(id)arg1;
- (void)addDataSource:(id)arg1;
- (void)setCurrentSampleIndex:(unsigned long long)arg1;
- (id)initWithName:(id)arg1 sampleRate:(double)arg2 circular:(BOOL)arg3;

@end

