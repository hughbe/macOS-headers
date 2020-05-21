//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class AFSpeechAudioAnalytics, AFSpeechRecognition;

@interface AFSpeechPackage : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _isFinal;
    AFSpeechRecognition *_recognition;
    AFSpeechRecognition *_rawRecognition;
    AFSpeechAudioAnalytics *_audioAnalytics;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isFinal; // @synthesize isFinal=_isFinal;
@property(readonly, nonatomic) AFSpeechAudioAnalytics *audioAnalytics; // @synthesize audioAnalytics=_audioAnalytics;
@property(readonly, nonatomic) AFSpeechRecognition *rawRecognition; // @synthesize rawRecognition=_rawRecognition;
@property(readonly, nonatomic) AFSpeechRecognition *recognition; // @synthesize recognition=_recognition;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRecognition:(id)arg1 rawRecognition:(id)arg2 audioAnalytics:(id)arg3 isFinal:(BOOL)arg4;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

