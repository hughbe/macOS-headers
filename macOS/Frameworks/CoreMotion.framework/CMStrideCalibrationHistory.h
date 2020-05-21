//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreMotion/NSCopying-Protocol.h>
#import <CoreMotion/NSSecureCoding-Protocol.h>
#import <CoreMotion/SRSampling-Protocol.h>

@class NSArray, NSString;

@interface CMStrideCalibrationHistory : NSObject <SRSampling, NSSecureCoding, NSCopying>
{
    NSArray *_calibrationTracks;
    NSArray *_rawSpeedToKValueBins;
    NSArray *_stepCadenceToStrideLengthBins;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSArray *stepCadenceToStrideLengthBins; // @synthesize stepCadenceToStrideLengthBins=_stepCadenceToStrideLengthBins;
@property(retain, nonatomic) NSArray *rawSpeedToKValueBins; // @synthesize rawSpeedToKValueBins=_rawSpeedToKValueBins;
@property(retain, nonatomic) NSArray *calibrationTracks; // @synthesize calibrationTracks=_calibrationTracks;
- (void)dealloc;
- (id)initWithCalibrationTracks:(id)arg1 rawSpeedToKValueBins:(id)arg2 stepCadenceToStrideLengthBins:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3;
- (id)binarySampleRepresentation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

