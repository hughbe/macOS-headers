//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AudioVideoBridging/AVB17221AEMStandardStreamFormat.h>

@interface AVB17221AEMIIDCStreamFormat : AVB17221AEMStandardStreamFormat
{
}

+ (id)keyPathsForValuesAffectingIidcRate;
+ (id)keyPathsForValuesAffectingIidcFormat;
- (unsigned short)maximumIntervalFrames;
- (unsigned int)maximumPayloadSize;
- (unsigned int)maximumPDUSize;
- (id)samplingRate;
- (void)setSamplingRate:(id)arg1;
- (BOOL)isSupportedVideoFormat;
- (BOOL)isVideoFormat;
@property unsigned char iidcRate; // @dynamic iidcRate;
@property unsigned short iidcFormat; // @dynamic iidcFormat;
- (id)init;

@end

