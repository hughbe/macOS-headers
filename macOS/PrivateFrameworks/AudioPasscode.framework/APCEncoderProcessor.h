//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class APCPlayerEmbedInfo, AUAudioUnitOfflineProcessor, AUPasscodeEncoder;

@interface APCEncoderProcessor : NSObject
{
    AUPasscodeEncoder *_encoderAU;
    AUAudioUnitOfflineProcessor *_processor;
    APCPlayerEmbedInfo *_passcodeEmbedInfo;
}

- (void).cxx_destruct;
- (BOOL)getEmbeddingInfo:(id *)arg1;
- (void)run;
- (float)evaluateAsset:(id)arg1;
- (id)initWithAssetURL:(id)arg1 codecConfig:(id)arg2 payload:(id)arg3 outputURL:(id)arg4 error:(id *)arg5;

@end

