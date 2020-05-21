//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVVideoOutputSettings.h>

#import <AVFoundation/AVDecodedVideoSettingsForFig-Protocol.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AVPixelBufferAttributesVideoOutputSettings : AVVideoOutputSettings <AVDecodedVideoSettingsForFig>
{
    NSDictionary *_VTPixelAspectRatioDictionary;
    NSDictionary *_VTCleanApertureDictionary;
}

+ (id)_videoOutputSettingsWithVideoSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;
+ (id)eligibleOutputSettingsDictionaryKeys;
@property(readonly, nonatomic) NSString *fieldMode;
@property(readonly, nonatomic) NSDictionary *pixelBufferAttributes;
- (BOOL)canFullySpecifyOutputFormatReturningReason:(id *)arg1;
- (BOOL)encoderIsAvailableOnCurrentSystemReturningError:(id *)arg1;
- (BOOL)willYieldCompressedSamples;
- (id)cleanApertureDictionary;
- (id)pixelAspectRatioDictionary;
- (int)height;
- (int)width;
- (void)dealloc;
- (id)initWithTrustedPixelBufferAttributes:(id)arg1;
- (id)initWithPixelBufferAttributes:(id)arg1 exceptionReason:(id *)arg2;

@end

