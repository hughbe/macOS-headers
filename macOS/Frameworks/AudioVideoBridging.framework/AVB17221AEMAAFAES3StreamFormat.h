//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AudioVideoBridging/AVB17221AEMAAFStreamFormat.h>

@interface AVB17221AEMAAFAES3StreamFormat : AVB17221AEMAAFStreamFormat
{
}

+ (id)keyPathsForValuesAffectingDataType;
+ (id)keyPathsForValuesAffectingDataTypeReference;
+ (id)keyPathsForValuesAffectingStreamsPerFrame;
+ (id)keyPathsForValuesAffectingFramesPerFrame;
- (id)streamFormatCompatibleWithTalkerFormat:(id)arg1;
- (BOOL)isPotentiallyCompatibleAsListenerForFormat:(id)arg1;
- (BOOL)isCompatibleAsListenerForFormat:(id)arg1;
- (unsigned short)maximumIntervalFrames;
- (unsigned int)maximumPayloadSize;
- (unsigned int)maximumPDUSize;
- (BOOL)isSupportedAudioFormat;
- (unsigned short)numberOfAudioChannels;
@property unsigned short dataType; // @dynamic dataType;
@property unsigned char dataTypeReference; // @dynamic dataTypeReference;
@property unsigned short streamsPerFrame; // @dynamic streamsPerFrame;
@property unsigned char framesPerFrame; // @dynamic framesPerFrame;
- (id)init;

@end

