//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NUKeyframeSequenceMatrixFloat33;

@interface PIReframeKeyframeSequence : NSObject
{
    NUKeyframeSequenceMatrixFloat33 *_homographySequence;
}

- (void).cxx_destruct;
- (id)sparseSequence;
- (CDStruct_8e0628e6)homographyAtTime:(CDStruct_1b6d18a9)arg1;
- (long long)interpolation;
@property(readonly, nonatomic) unsigned long long count;
- (id)initWithKeyframeArray:(id)arg1;

@end

