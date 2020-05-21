//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDTLVBase.h>

#import <HomeKitDaemon/HMDTLVCreateParse-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class NSArray, NSNumber;

@interface HMDCameraRecordingGeneralConfiguration : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding>
{
    NSNumber *_prebufferLength;
    unsigned long long _eventTriggerOptions;
    NSArray *_mediaContainerConfigurations;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *mediaContainerConfigurations; // @synthesize mediaContainerConfigurations=_mediaContainerConfigurations;
@property(readonly, nonatomic) unsigned long long eventTriggerOptions; // @synthesize eventTriggerOptions=_eventTriggerOptions;
@property(readonly, copy, nonatomic) NSNumber *prebufferLength; // @synthesize prebufferLength=_prebufferLength;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)description:(id)arg1 indent:(id)arg2;
- (id)tlvData;
- (BOOL)_parseFromTLVData;
- (id)initWithPrebufferLength:(id)arg1 eventTriggerOptions:(unsigned long long)arg2 mediaContainerConfigurations:(id)arg3;

@end

