//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, WFLoggerBase;
@protocol OS_dispatch_queue;

@interface WFLogger : NSObject
{
    WFLoggerBase *_loggerBase;
    unsigned long long _destination;
    unsigned long long _privacy;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

+ (id)sharedWFLoggerSingleton;
@property(readonly, getter=getMaxFileSizeInMB) unsigned long long maxFileSizeInMB;
@property(readonly, getter=getLogLevelPersist) unsigned long long logLevelPersist;
@property(readonly, getter=getLogLevelEnable) unsigned long long logLevelEnable;
@property(readonly, getter=getLogPrivacy) unsigned long long logPrivacy;
@property(readonly, copy, getter=getLogLifespanInDays) NSNumber *logLifespanInDays;
- (void)dump;
- (void)WFLog:(unsigned long long)arg1 message:(const char *)arg2;
- (void)setDestinationOsLog:(struct __CFString *)arg1 category:(struct __CFString *)arg2 logLifespanInDays:(unsigned long long)arg3 logLevel:(unsigned long long)arg4 logPrivacy:(unsigned long long)arg5;
- (void)setDestinationFileLocation:(struct __CFString *)arg1 fileNamePrefix:(struct __CFString *)arg2 runLoopRef:(struct __CFRunLoop *)arg3 runLoopMode:(struct __CFString *)arg4 classC:(unsigned char)arg5 dateFormatter:(struct __CFDateFormatter *)arg6 maxFileSizeInMB:(unsigned long long)arg7 logLifespanInDays:(unsigned long long)arg8;
- (void)setDestinationFile:(struct __CFString *)arg1 runLoopRef:(struct __CFRunLoop *)arg2 runLoopMode:(struct __CFString *)arg3 classC:(unsigned char)arg4 dateFormatter:(struct __CFDateFormatter *)arg5 maxFileSizeInMB:(unsigned long long)arg6 logLifespanInDays:(unsigned long long)arg7;
- (void)setDestinationCircularBuffer;
- (id)loggerBase;
@property(readonly, getter=getDestination) unsigned long long destination;
- (id)init;

@end

