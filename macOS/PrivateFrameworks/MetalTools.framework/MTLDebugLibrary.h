//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLToolsLibrary.h>

@class MTLCompileOptions, NSArray;

@interface MTLDebugLibrary : MTLToolsLibrary
{
    unsigned long long _debugType;
    id _code;
    MTLCompileOptions *_compileOptions;
    NSArray *_imageFilterFunctions;
    CDStruct_dbc1e4aa *_imageFilterFunctionInfo;
}

@property(readonly, nonatomic) CDStruct_dbc1e4aa *imageFilterFunctionInfo; // @synthesize imageFilterFunctionInfo=_imageFilterFunctionInfo;
@property(readonly, nonatomic) NSArray *imageFilterFunctions; // @synthesize imageFilterFunctions=_imageFilterFunctions;
@property(copy, nonatomic) MTLCompileOptions *compileOptions; // @synthesize compileOptions=_compileOptions;
@property(copy, nonatomic) id code; // @synthesize code=_code;
@property(nonatomic) unsigned long long debugType; // @synthesize debugType=_debugType;
- (void)setImageFilterFunctions:(id)arg1 imageFilterFunctionInfo:(const CDStruct_dbc1e4aa *)arg2;
- (void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 error:(id *)arg3;
- (id)newFunctionWithName:(id)arg1;
- (void)dealloc;
- (id)initWithLibrary:(id)arg1 parent:(id)arg2 type:(unsigned long long)arg3 code:(id)arg4 options:(id)arg5;

@end

