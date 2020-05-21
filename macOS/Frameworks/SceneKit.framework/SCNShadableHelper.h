//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SceneKit/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, SCNProgram;

__attribute__((visibility("hidden")))
@interface SCNShadableHelper : NSObject <NSSecureCoding>
{
    id _owner;
    SCNProgram *_program;
    NSDictionary *_shaderModifiers;
    NSArray *_c3dShaderModifierCache;
    NSMutableArray *_argumentsNames;
    NSDictionary *_symbolToBinder;
    NSDictionary *_symbolToUnbinder;
}

+ (BOOL)supportsSecureCoding;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_didDecodeSCNShadableHelper:(id)arg1;
- (void)_customDecodingOfSCNShadableHelper:(id)arg1;
- (void)_customEncodingOfSCNShadableHelper:(id)arg1;
- (const void *)__CFObject;
- (void)_setC3DProgram;
- (void)_setC3DProgramDelegate;
- (void)_updateAllC3DProgramInputs;
- (void)_updateC3DProgramInputForSymbol:(id)arg1;
- (void)_updateC3DProgramInput:(struct __C3DFXGLSLProgram *)arg1 forSymbol:(id)arg2;
- (struct __C3DFXGLSLProgram *)_programFromPassAtIndex:(long long)arg1;
- (struct __C3DFXTechnique *)_technique;
- (void)_programDidChange:(id)arg1;
- (void)handleUnbindingOfSymbol:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)handleBindingOfSymbol:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)copyModifiersFrom:(id)arg1;
@property(copy, nonatomic) NSDictionary *shaderModifiers;
- (id)shaderModifierCache;
- (void)_parseAndSetShaderModifier:(id)arg1;
- (void)_unbindValueForSymbol:(id)arg1 atLocation:(unsigned int)arg2 programID:(unsigned int)arg3 node:(id)arg4 renderer:(id)arg5;
- (BOOL)_bindValueForSymbol:(id)arg1 atLocation:(unsigned int)arg2 programID:(unsigned int)arg3 node:(id)arg4 renderer:(id)arg5;
- (BOOL)isOpaque;
@property(retain, nonatomic) SCNProgram *program;
- (void)_stopObservingProgram;
- (void)_startObservingProgram;
@property(readonly, nonatomic) id owner;
- (void)dealloc;
@property(readonly, nonatomic) NSArray *shaderModifiersArgumentsNames;
- (void)ownerWillDie;
- (id)initWithOwner:(id)arg1;
- (void)_commonInit;

@end

