//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CSMyriadPHash : NSObject
{
    float *_hammingWindow;
    struct OpaqueFFTSetup *_setup;
    float *_snrWindow;
    struct OpaqueFFTSetup *_snrSetup;
    unsigned char _signalFractional;
    short _signalEstimate;
}

+ (id)lastHash;
+ (void)setLastHash:(id)arg1;
+ (void)notifyAudioHashlessNotification;
+ (void)notifyAudioHashNotification;
+ (BOOL)writeHashResultIntoFile:(id)arg1;
+ (BOOL)writeHashlessResult:(unsigned long long)arg1;
+ (id)generateEmptyPHash:(unsigned long long)arg1;
+ (id)createHashResult:(unsigned short)arg1 goodness:(unsigned char)arg2 confidence:(unsigned char)arg3 absTime:(unsigned long long)arg4 frac:(unsigned char)arg5;
+ (void)notifyHashlessTrigger:(unsigned long long)arg1;
+ (id)currentMyriadPHash;
@property(nonatomic) unsigned char signalFractional; // @synthesize signalFractional=_signalFractional;
@property(nonatomic) short signalEstimate; // @synthesize signalEstimate=_signalEstimate;
- (void)voiceTriggerDidDetectSpeakerReject:(id)arg1;
- (void)voiceTriggerDidDetectNearMiss:(id)arg1;
- (id)generatePHashFromVoiceTriggerInfo:(id)arg1;
- (id)_audioLogDirectory;
- (id)_generateMyriadInfo:(unsigned long long)arg1 score:(float)arg2 triggerSource:(id)arg3 channel:(unsigned long long)arg4 audioProviderUUID:(id)arg5 absoluteTime:(unsigned long long)arg6;
- (id)cachedHash;
- (unsigned short)pHash:(float *)arg1 length:(int)arg2;
- (void)dealloc;
- (id)init;

@end

