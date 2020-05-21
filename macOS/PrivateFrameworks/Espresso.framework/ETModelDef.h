//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface ETModelDef : NSObject
{
    struct map<std::__1::basic_string<char>, std::__1::vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char>>>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char>>>>>> layer_variable_names;
    NSMutableArray *_all_variables;
    shared_ptr_d082c67d _network;
    shared_ptr_c14ee569 _gb;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property shared_ptr_c14ee569 gb; // @synthesize gb=_gb;
@property(retain) NSMutableArray *all_variables; // @synthesize all_variables=_all_variables;
@property shared_ptr_d082c67d network; // @synthesize network=_network;
- (id)layerNames;
- (id)variableForLayer:(id)arg1 kind:(unsigned long long)arg2;
- (id)variables;
- (int)configureLayersToTrain:(id)arg1 reinitializeVariables:(BOOL)arg2;
- (id)variableNameForLayer:(id)arg1 kind:(unsigned long long)arg2;
- (void)setupVariablesDef;
- (void)randomizeWeightsForLayer:(id)arg1 withSeed:(float)arg2;
- (void)updateLayer:(id)arg1 withBiases:(shared_ptr_6c49034a)arg2 length:(unsigned long long)arg3;
- (void)updateLayer:(id)arg1 withWeights:(shared_ptr_6c49034a)arg2 length:(unsigned long long)arg3;
- (shared_ptr_0954c506)biasesForLayer:(id)arg1;
- (shared_ptr_966620c9)weightsForLayer:(id)arg1;
- (struct layer *)layerForName:(id)arg1;
- (shared_ptr_210dbb06)topNamesForLayerIndex:(int)arg1;
- (id)initWithNetwork:(id)arg1;
- (void)transformForTraining:(shared_ptr_d082c67d)arg1;

@end

