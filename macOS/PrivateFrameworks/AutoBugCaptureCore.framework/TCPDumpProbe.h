//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AutoBugCaptureCore/NetDiagnosticProbe.h>

@class NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface TCPDumpProbe : NetDiagnosticProbe
{
    NSMutableArray *_probeOutputFilePaths;
    NSObject<OS_dispatch_source> *_tcpDumpTimer;
    CDUnknownBlockType _tcpDumpCompletedBlock;
    double _duration;
    NSString *_destinationPath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *destinationPath; // @synthesize destinationPath=_destinationPath;
@property double duration; // @synthesize duration=_duration;
@property(nonatomic) CDUnknownBlockType tcpDumpCompletedBlock; // @synthesize tcpDumpCompletedBlock=_tcpDumpCompletedBlock;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *tcpDumpTimer; // @synthesize tcpDumpTimer=_tcpDumpTimer;
- (id)probeOutputFilePaths;
- (BOOL)stopNetDiagnosticsTask:(CDUnknownBlockType)arg1;
- (void)stopTest;
- (BOOL)startNetDiagnosticsTask:(CDUnknownBlockType)arg1;
- (void)startTCPDumpWithDuration:(double)arg1 destinationPath:(id)arg2 tcpDumpStarted:(CDUnknownBlockType)arg3 tcpDumpCompleted:(CDUnknownBlockType)arg4;
- (id)initWithQueue:(id)arg1;

@end

