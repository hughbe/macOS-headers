//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SignpostSupport/SignpostAnimationSubInterval.h>

@class NSString;

@interface SignpostCommitInterval : SignpostAnimationSubInterval
{
    unsigned int _transactionSeed;
    int _pid;
    unsigned long long _threadID;
    NSString *_processName;
    NSString *_executablePath;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *executablePath; // @synthesize executablePath=_executablePath;
@property(readonly, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
@property(readonly, nonatomic) unsigned long long threadID; // @synthesize threadID=_threadID;
@property(readonly, nonatomic) unsigned int transactionSeed; // @synthesize transactionSeed=_transactionSeed;
- (id)initWithCommitInterval:(id)arg1;

@end

