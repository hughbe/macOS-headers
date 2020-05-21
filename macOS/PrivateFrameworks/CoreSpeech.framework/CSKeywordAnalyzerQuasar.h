//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray;
@protocol CSKeywordAnalyzerQuasarScoreDelegate, OS_dispatch_queue;

@interface CSKeywordAnalyzerQuasar : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_previousUtteranceTokens;
    NSArray *_triggerTokenList;
    BOOL _useKeywordSpotting;
    NSDictionary *_ctcKwdToPhraseIdMap;
    double _triggerConfidence;
    unsigned long long _activeChannel;
    id <CSKeywordAnalyzerQuasarScoreDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <CSKeywordAnalyzerQuasarScoreDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long activeChannel; // @synthesize activeChannel=_activeChannel;
@property(readonly, nonatomic) double triggerConfidence; // @synthesize triggerConfidence=_triggerConfidence;
@property(retain, nonatomic) NSDictionary *ctcKwdToPhraseIdMap; // @synthesize ctcKwdToPhraseIdMap=_ctcKwdToPhraseIdMap;
- (void)_recognizeWavData:(const short *)arg1 length:(int)arg2;
- (void)processAudioChunk:(id)arg1;
- (void)endAudio;
- (void)runRecognition;
- (void)dealloc;
- (void)reset;
- (id)initWithConfigPath:(id)arg1 triggerTokens:(id)arg2 useKeywordSpotting:(BOOL)arg3;

@end

