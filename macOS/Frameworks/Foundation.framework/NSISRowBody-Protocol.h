//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSISLinearExpression, NSISVariable;

@protocol NSISRowBody <NSObject>
- (void)replaceVariable:(NSISVariable *)arg1 withExpression:(NSISLinearExpression *)arg2 processVariableNewToReceiver:(void (^)(NSISVariable *))arg3 processVariableDroppedFromReceiver:(void (^)(NSISVariable *))arg4;
- (void)replaceVariable:(NSISVariable *)arg1 withVariablePlusDelta:(double)arg2 timesVariable:(NSISVariable *)arg3 processVariableNewToReceiver:(void (^)(NSISVariable *))arg4 processVariableDroppedFromReceiver:(void (^)(NSISVariable *))arg5;
- (void)replaceVariable:(NSISVariable *)arg1 withVariablePlusDelta:(double)arg2;
- (unsigned long long)variableCount;
- (void)enumerateVariables:(void (^)(NSISVariable *))arg1;
- (void)removeVariable:(NSISVariable *)arg1;
@end

