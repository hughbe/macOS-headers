//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmbeddedAcousticRecognition/NSCopying-Protocol.h>

@class NSArray;

@interface _EARSpeechRecognition : NSObject <NSCopying>
{
    NSArray *_tokenSausage;
    NSArray *_interpretationIndices;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *interpretationIndices; // @synthesize interpretationIndices=_interpretationIndices;
@property(readonly, copy, nonatomic) NSArray *tokenSausage; // @synthesize tokenSausage=_tokenSausage;
- (id)description;
- (id)granularizedRecognition;
- (pair_a60b4d2a)_tokenPhraseChoiceList;
- (id)oneBest;
- (id)nBest;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithTokenPhraseChoiceList:(const pair_a60b4d2a *)arg1;
- (id)_initWithNBestList:(const vector_2c247c42 *)arg1 useHatText:(_Bool)arg2;
- (id)_initWithTokenSausage:(id)arg1 interpretationIndices:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

