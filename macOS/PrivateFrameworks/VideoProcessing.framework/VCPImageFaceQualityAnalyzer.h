//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoProcessing/VCPImageAnalyzer.h>

@class NSMutableArray;

@interface VCPImageFaceQualityAnalyzer : VCPImageAnalyzer
{
    NSMutableArray *_faceQualityScores;
}

- (void).cxx_destruct;
@property(retain) NSMutableArray *faceQualityScores; // @synthesize faceQualityScores=_faceQualityScores;
- (void)dealloc;
- (int)analyzeDetectedFaces:(struct __CVBuffer *)arg1 faceResults:(id)arg2 cancel:(CDUnknownBlockType)arg3;

@end

