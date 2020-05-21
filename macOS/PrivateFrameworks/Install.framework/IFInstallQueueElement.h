//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IFInstallElement, IFPerformanceElement, IFSessionState, NSError, NSNumber, NSString;

@interface IFInstallQueueElement : NSObject
{
    NSString *_type;
    double _weight;
    IFSessionState *_sessionState;
    IFInstallElement *_installElement;
    id _clientMessagingDelegate;
    NSError *_result;
    long long _resultStatus;
    IFPerformanceElement *_perf;
    NSNumber *_crashAtProgress;
}

+ (BOOL)canRunForPackage:(id)arg1;
- (void)_artificialCrashNow;
- (void)setCrashAtProgress:(id)arg1;
- (id)artificialError;
- (BOOL)runAfterError;
- (id)result;
- (void)setResult:(id)arg1;
- (long long)run;
- (void)setInstallElement:(id)arg1;
- (id)clientMessagingDelegate;
- (void)setClientMessagingDelegate:(id)arg1;
- (void)setSessionState:(id)arg1;
- (void)collectMemory;
- (id)performanceInfo;
- (double)elapsedTime;
- (struct timeval)startTime;
- (void)stopTimer;
- (void)startTimer;
- (double)estimatedTotalTime;
- (double)weight;
- (void)setWeight:(double)arg1;
- (void)setType:(id)arg1;
- (id)type;
- (void)setProgressPart:(double)arg1;
- (double)progressPart;
- (id)logDescription;
- (void)dealloc;
- (id)init;
- (void)setPartialProgress:(double)arg1;
- (void)sendClientError:(id)arg1;
- (void)sendClientStatusMessage:(id)arg1 ofType:(id)arg2;

@end

