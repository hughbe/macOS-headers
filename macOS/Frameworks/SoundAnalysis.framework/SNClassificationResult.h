//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SoundAnalysis/SNResult-Protocol.h>
#import <SoundAnalysis/SNTimeRangeProvidingWritable-Protocol.h>

@class NSArray, NSString;

@interface SNClassificationResult : NSObject <SNTimeRangeProvidingWritable, SNResult>
{
    NSArray *_classifications;
    CDStruct_e83c9415 _timeRange;
}

+ (id)new;
- (void).cxx_destruct;
@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
@property(copy, nonatomic) NSArray *classifications; // @synthesize classifications=_classifications;
- (id)_init;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

