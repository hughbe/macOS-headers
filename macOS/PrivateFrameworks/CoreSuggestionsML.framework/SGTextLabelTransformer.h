//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsML/PMLTransformerProtocol-Protocol.h>

@class NSString, SGStringLabelingTransformer, SGStringPreprocessingTransformer;

@interface SGTextLabelTransformer : NSObject <PMLTransformerProtocol>
{
    SGStringPreprocessingTransformer *_preprocessor;
    SGStringLabelingTransformer *_labeler;
}

+ (id)_preprocessedLabelsWithLabels:(id)arg1 andPreprocessor:(id)arg2;
+ (id)withMethods:(id)arg1 withLabelStrings:(id)arg2;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToTextLabelTransformer:(id)arg1;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)toPlistWithChunks:(id)arg1;
- (id)transform:(id)arg1;
- (id)initWithPreprocessor:(id)arg1 labeler:(id)arg2;
- (id)initWithMethods:(id)arg1 withLabelStrings:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

