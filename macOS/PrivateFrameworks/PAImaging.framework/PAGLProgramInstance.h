//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, PAGLProgramExecutable;

@interface PAGLProgramInstance : NSObject
{
    PAGLProgramExecutable *_program;
    NSMutableDictionary *_uniforms;
    BOOL _isRunning;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PAGLProgramExecutable *program; // @synthesize program=_program;
- (id)valueForUniform:(id)arg1;
- (void)setValue:(id)arg1 forUniform:(id)arg2;
- (BOOL)_setUniform:(id)arg1 withValue:(id)arg2;
- (int)_getUniformLocation:(id)arg1;
- (BOOL)_checkAllUserDefinedUniformsAreSet;
- (BOOL)_setAllUserDefinedUniformValues;
- (BOOL)_checkWillBeAccelerated:(id)arg1;
- (BOOL)_canRunInContext:(id)arg1;
- (BOOL)_runInContext:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (BOOL)runWithBlock:(CDUnknownBlockType)arg1 context:(id)arg2;
- (BOOL)runInContext:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)description;
- (id)initWithProgram:(id)arg1;

@end

