//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SoundAnalysis/SNAnalyzerProviding-Protocol.h>
#import <SoundAnalysis/SNRequest-Protocol.h>

@class NSString, SNAudioLevelMeasurer;
@protocol SNAnalyzing;

@interface SNMeasureLKFSRequest : NSObject <SNAnalyzerProviding, SNRequest>
{
    SNAudioLevelMeasurer *_detector;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <SNAnalyzing> analyzer;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

