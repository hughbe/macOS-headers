//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface AUPasscodeCodecCapability : NSObject
{
    NSString *_algorithmName;
    NSArray *_supportedSampleRates;
    struct _NSRange _numChannelRange;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct _NSRange numChannelRange; // @synthesize numChannelRange=_numChannelRange;
@property(readonly, nonatomic) NSArray *supportedSampleRates; // @synthesize supportedSampleRates=_supportedSampleRates;
@property(readonly, copy, nonatomic) NSString *algorithmName; // @synthesize algorithmName=_algorithmName;
- (id)initWithAlgorithmName:(id)arg1;
- (id)init;

@end

