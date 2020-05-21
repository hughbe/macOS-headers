//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSDictionary, NSNumber, NSString;

@interface SASStartSpeech : SABaseCommand <SAServerBoundCommand>
{
}

+ (id)startSpeechWithDictionary:(id)arg1 context:(id)arg2;
+ (id)startSpeech;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSDictionary *voiceTriggerEventInfo;
@property(copy, nonatomic) NSString *turnId;
@property(copy, nonatomic) NSNumber *noiseReductionLevel;
@property(copy, nonatomic) NSNumber *motionConfidence;
@property(copy, nonatomic) NSString *motionActivity;
@property(copy, nonatomic) NSNumber *isCarryDevice;
@property(copy, nonatomic) NSString *headsetName;
@property(copy, nonatomic) NSString *headsetId;
@property(copy, nonatomic) NSString *headsetAddress;
@property(nonatomic) BOOL enablePartialResults;
@property(copy, nonatomic) NSString *dspStatus;
@property(nonatomic) BOOL disableAutoEndpointing;
@property(copy, nonatomic) NSString *deviceModel;
@property(copy, nonatomic) NSString *deviceIdentifier;
@property(nonatomic) int codec;
@property(nonatomic) BOOL clearContext;
@property(copy, nonatomic) NSString *audioSource;
@property(copy, nonatomic) NSString *audioDestination;
@property(copy, nonatomic) NSString *origin;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

