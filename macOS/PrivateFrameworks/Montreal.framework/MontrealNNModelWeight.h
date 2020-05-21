//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Montreal/MontrealNNDescription.h>

#import <Montreal/MontrealNNDescriptionProtocol-Protocol.h>

@class MontrealNNModelQuantization, NSArray, NSData, NSNumber, NSString;

@interface MontrealNNModelWeight : MontrealNNDescription <MontrealNNDescriptionProtocol>
{
    NSString *_name;
    NSNumber *_index;
    NSArray *_dimension;
    NSArray *_weightValues;
    NSData *_weightData;
    MontrealNNModelQuantization *_quantization;
    NSString *_jsonDir;
}

- (void).cxx_destruct;
@property(readonly) NSString *jsonDir; // @synthesize jsonDir=_jsonDir;
@property(readonly) MontrealNNModelQuantization *quantization; // @synthesize quantization=_quantization;
@property(readonly) NSData *weightData; // @synthesize weightData=_weightData;
@property(readonly) NSArray *weightValues; // @synthesize weightValues=_weightValues;
@property(readonly) NSArray *dimension; // @synthesize dimension=_dimension;
@property(readonly) NSNumber *index; // @synthesize index=_index;
@property(readonly) NSString *name; // @synthesize name=_name;
- (id)createConvertArrayToData:(id)arg1 quantization:(id)arg2;
- (id)createflattenWeightsHierarchy:(id)arg1;
- (id)createflattenWeightsFile:(id)arg1;
- (id)createDataContainer;
- (void)generateJSONAtPath:(id)arg1;
- (id)jsonDescription;
- (void)description:(id)arg1 indent:(id)arg2;
- (id)initWithDictionary:(id)arg1 quantization:(id)arg2 jsonDir:(id)arg3;
- (id)initWithName:(id)arg1 index:(id)arg2 dimension:(id)arg3 weightValues:(id)arg4;
- (id)initWithName:(id)arg1 index:(id)arg2 dimension:(id)arg3 weightData:(id)arg4;
- (id)initWithName:(id)arg1 index:(id)arg2 dimension:(id)arg3;
- (id)checkForValidity;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

