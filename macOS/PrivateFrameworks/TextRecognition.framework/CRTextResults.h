//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CRTextDetectorResults, CRTextRecognizerResults, NSArray, NSDate;

@interface CRTextResults : NSObject
{
    NSDate *_startTime;
    NSDate *_endTime;
    CRTextDetectorResults *_detectorResults;
    CRTextRecognizerResults *_recognizerResults;
    NSArray *_textFeatures;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *textFeatures; // @synthesize textFeatures=_textFeatures;
@property(retain, nonatomic) CRTextRecognizerResults *recognizerResults; // @synthesize recognizerResults=_recognizerResults;
@property(retain, nonatomic) CRTextDetectorResults *detectorResults; // @synthesize detectorResults=_detectorResults;
@property(retain, nonatomic) NSDate *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;

@end

