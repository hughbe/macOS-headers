//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailCore/MCQOSInvocation.h>

@class MCActivityMonitor;
@protocol MCActivityTarget;

@interface MCMonitoredInvocation : MCQOSInvocation
{
    MCActivityMonitor *_monitor;
}

+ (id)invocationWithSelector:(SEL)arg1 target:(id)arg2 object1:(id)arg3 object2:(id)arg4 object3:(id)arg5 object4:(id)arg6 taskName:(id)arg7 priority:(unsigned char)arg8 canBeCancelled:(BOOL)arg9;
+ (id)invocationWithSelector:(SEL)arg1 target:(id)arg2 object1:(id)arg3 object2:(id)arg4 object3:(id)arg5 taskName:(id)arg6 priority:(unsigned char)arg7 canBeCancelled:(BOOL)arg8;
+ (id)invocationWithSelector:(SEL)arg1 target:(id)arg2 object1:(id)arg3 object2:(id)arg4 taskName:(id)arg5 priority:(unsigned char)arg6 canBeCancelled:(BOOL)arg7;
+ (id)invocationWithSelector:(SEL)arg1 target:(id)arg2 object:(id)arg3 taskName:(id)arg4 priority:(unsigned char)arg5 canBeCancelled:(BOOL)arg6;
+ (id)invocationWithSelector:(SEL)arg1 target:(id)arg2 taskName:(id)arg3 priority:(unsigned char)arg4 canBeCancelled:(BOOL)arg5;
+ (id)invocationWithSelector:(SEL)arg1 target:(id)arg2 object1:(id)arg3 object2:(id)arg4 object3:(id)arg5 object4:(id)arg6;
+ (id)invocationWithSelector:(SEL)arg1 target:(id)arg2 object1:(id)arg3 object2:(id)arg4 object3:(id)arg5;
+ (id)invocationWithSelector:(SEL)arg1 target:(id)arg2 object1:(id)arg3 object2:(id)arg4;
+ (id)invocationWithSelector:(SEL)arg1 target:(id)arg2 object:(id)arg3;
+ (id)invocationWithSelector:(SEL)arg1 target:(id)arg2;
- (void).cxx_destruct;
- (unsigned char)priority;
- (void)invokeWithTarget:(id)arg1;
- (void)invoke;
- (void)setShouldPromptUserOnTermination;
@property(retain, nonatomic) MCActivityMonitor *monitor;
@property __weak id <MCActivityTarget> target;

@end

