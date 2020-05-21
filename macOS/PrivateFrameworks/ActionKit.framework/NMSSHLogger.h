//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface NMSSHLogger : NSObject
{
    BOOL _enabled;
    CDUnknownBlockType _logBlock;
    unsigned long long _logLevel;
    NSObject<OS_dispatch_queue> *_loggerQueue;
}

+ (id)sharedLogger;
+ (id)logger;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *loggerQueue; // @synthesize loggerQueue=_loggerQueue;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) unsigned long long logLevel; // @synthesize logLevel=_logLevel;
@property(copy, nonatomic) CDUnknownBlockType logBlock; // @synthesize logBlock=_logBlock;
- (void)logError:(id)arg1;
- (void)logWarn:(id)arg1;
- (void)logInfo:(id)arg1;
- (void)logVerbose:(id)arg1;
- (void)log:(id)arg1 level:(unsigned long long)arg2 flag:(unsigned long long)arg3;

@end

