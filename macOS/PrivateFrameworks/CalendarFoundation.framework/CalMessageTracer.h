//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CalMessageTracer : NSObject
{
}

+ (void)logError:(id)arg1 message:(id)arg2 domain:(id)arg3;
+ (void)logError:(id)arg1 message:(id)arg2 domain:(id)arg3 uid:(id)arg4;
+ (void)logException:(id)arg1 message:(id)arg2 domain:(id)arg3;
+ (void)log:(id)arg1 domain:(id)arg2 signature:(id)arg3 result:(int)arg4;
+ (void)log:(id)arg1 domain:(id)arg2 signature:(id)arg3 result:(int)arg4 value:(id)arg5;
+ (void)log:(id)arg1 domain:(id)arg2 signature:(id)arg3 result:(int)arg4 value:(id)arg5 summarize:(BOOL)arg6;
+ (void)log:(id)arg1 domain:(id)arg2 signature:(id)arg3 result:(int)arg4 value:(id)arg5 value2:(id)arg6 uid:(id)arg7;
+ (void)log:(id)arg1 domain:(id)arg2 signature:(id)arg3 result:(int)arg4 value:(id)arg5 value2:(id)arg6 value3:(id)arg7 uid:(id)arg8 uid2:(id)arg9 wakeState:(id)arg10;
+ (void)log:(id)arg1 domain:(id)arg2 signature:(id)arg3 signature2:(id)arg4 summarize:(BOOL)arg5;
+ (void)log:(id)arg1 domain:(id)arg2 signature:(id)arg3 summarize:(BOOL)arg4;
+ (void)log:(id)arg1 domain:(id)arg2 summarize:(BOOL)arg3;
+ (void)traceWithDomain:(id)arg1 value:(id)arg2 summarize:(BOOL)arg3;
+ (void)traceWithDomain:(id)arg1 signature:(id)arg2 summarize:(BOOL)arg3;
+ (void)traceWithDomain:(id)arg1 signature:(id)arg2 result:(int)arg3;
+ (void)traceWithDomain:(id)arg1 signature:(id)arg2 signature2:(id)arg3 summarize:(BOOL)arg4;
+ (void)log:(id)arg1 domain:(id)arg2 signature:(id)arg3 signature2:(id)arg4 result:(int)arg5 value:(id)arg6 value2:(id)arg7 value3:(id)arg8 uid:(id)arg9 uid2:(id)arg10 wakeState:(id)arg11 summarize:(BOOL)arg12;
+ (void)messageTraceLogDomain:(id)arg1 withSignature:(id)arg2;

@end

