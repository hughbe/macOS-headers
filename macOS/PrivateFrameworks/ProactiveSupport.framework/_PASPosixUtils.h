//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _PASPosixUtils : NSObject
{
}

+ (int)runCommandWithPath:(const char *)arg1 argv:(const char **)arg2 envp:(const char **)arg3 stdoutData:(id *)arg4 stderrData:(id *)arg5;
+ (int)runCommandWithPath:(const char *)arg1 argv:(const char **)arg2 envp:(const char **)arg3 handleStdout:(CDUnknownBlockType)arg4 handleStderr:(CDUnknownBlockType)arg5;

@end

