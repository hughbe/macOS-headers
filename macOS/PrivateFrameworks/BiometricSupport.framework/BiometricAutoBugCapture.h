//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SDRDiagnosticReporter;
@protocol OS_dispatch_queue;

@interface BiometricAutoBugCapture : NSObject
{
    BOOL _serialLogEnabled;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_domain;
    NSString *_process;
    SDRDiagnosticReporter *_reporter;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL serialLogEnabled; // @synthesize serialLogEnabled=_serialLogEnabled;
@property(readonly, nonatomic) SDRDiagnosticReporter *reporter; // @synthesize reporter=_reporter;
@property(retain, nonatomic) NSString *process; // @synthesize process=_process;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (BOOL)sendSignature:(id)arg1 withDuration:(double)arg2;
- (BOOL)sendAutoBugCaptureEvent:(unsigned long long)arg1;
- (id)getSignatureForReason:(unsigned long long)arg1;
- (id)getSignatureWithType:(id)arg1 subtype:(id)arg2;
- (id)getSubtypeForReason:(unsigned long long)arg1;
- (id)getTypeForReason:(unsigned long long)arg1;
- (id)initWithDomain:(id)arg1 process:(id)arg2 dispatchQueue:(id)arg3;

@end

