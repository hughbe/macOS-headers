//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoProcessing/VCPVideoMetaAnalyzer.h>

@class NSMutableArray, NSMutableDictionary;

@interface VCPVideoMetaFaceAnalyzer : VCPVideoMetaAnalyzer
{
    NSMutableDictionary *_activeFaces;
    struct CGAffineTransform _transform;
    NSMutableArray *_faceResults;
}

- (void).cxx_destruct;
- (id)publicResults;
- (int)finalizeAnalysis;
- (int)processMetadataGroup:(id)arg1 flags:(unsigned long long *)arg2;
- (struct CGAffineTransform)flipTransform:(struct CGAffineTransform)arg1;
- (id)initWithTransform:(struct CGAffineTransform)arg1;

@end

