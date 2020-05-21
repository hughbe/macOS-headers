//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/MTLFunction-Protocol.h>

@class MTLFunctionReflection, MTLType, NSArray, NSData, NSString;
@protocol MTLArgumentEncoder, MTLFunction, MTLPipelineLibrary;

@protocol MTLFunctionSPI <MTLFunction>
@property(readonly) NSArray *arguments;
@property(readonly) MTLType *returnType;
@property(readonly) unsigned long long renderTargetArrayIndexType;
@property(readonly, copy) NSString *unpackedFilePath;
@property(readonly) long long lineNumber;
@property(readonly, copy) NSString *filePath;
- (id <MTLFunction>)newFunctionWithPluginData:(NSData *)arg1 bitcodeType:(unsigned char)arg2;
- (NSData *)bitcodeData;
- (const CDStruct_41a22ec7 *)bitCodeHash;
- (id <MTLArgumentEncoder>)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id *)arg2 binaryLibraries:(NSArray *)arg3;
- (id <MTLArgumentEncoder>)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id *)arg2 pipelineLibrary:(id <MTLPipelineLibrary>)arg3;
- (id <MTLArgumentEncoder>)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 pipelineLibrary:(id <MTLPipelineLibrary>)arg2;
- (void)reflectionWithOptions:(unsigned long long)arg1 completionHandler:(void (^)(MTLFunctionReflection *))arg2;
- (MTLFunctionReflection *)reflectionWithOptions:(unsigned long long)arg1 binaryLibraries:(NSArray *)arg2;
- (MTLFunctionReflection *)reflectionWithOptions:(unsigned long long)arg1 pipelineLibrary:(id <MTLPipelineLibrary>)arg2;
- (MTLFunctionReflection *)reflectionWithOptions:(unsigned long long)arg1;
@end

