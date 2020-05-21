//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLLibrary-Protocol.h>

@class MTLFunctionConstantValues, NSArray, NSString;
@protocol MTLFunction, MTLPipelineCache, MTLPipelineLibrary;

@protocol MTLLibrarySPI <MTLLibrary>
@property(readonly) NSArray *externFunctionNames;
@property(copy) NSString *overrideTriple;
@property(readonly) unsigned long long type;
- (void)newFunctionWithName:(NSString *)arg1 constantValues:(MTLFunctionConstantValues *)arg2 pipelineLibrary:(id <MTLPipelineLibrary>)arg3 completionHandler:(void (^)(id <MTLFunction>, NSError *))arg4;
- (id <MTLFunction>)newFunctionWithName:(NSString *)arg1 constantValues:(MTLFunctionConstantValues *)arg2 pipelineLibrary:(id <MTLPipelineLibrary>)arg3 error:(id *)arg4;
- (id <MTLFunction>)newFunctionWithName:(NSString *)arg1 constantValues:(MTLFunctionConstantValues *)arg2 functionCache:(id <MTLPipelineCache>)arg3 error:(id *)arg4;
- (id <MTLFunction>)newExternFunctionWithName:(NSString *)arg1;
@end

