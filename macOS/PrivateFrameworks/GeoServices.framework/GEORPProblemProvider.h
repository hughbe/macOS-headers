//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOProtobufSessionTaskDelegate-Protocol.h>

@class GEOProtobufSession, GEOProtobufSessionTask, NSString;

@interface GEORPProblemProvider : NSObject <GEOProtobufSessionTaskDelegate>
{
    GEOProtobufSession *_protobufSession;
    GEOProtobufSessionTask *_submissionTask;
    GEOProtobufSessionTask *_statusTask;
    CDUnknownBlockType _submissionErrorHandler;
    CDUnknownBlockType _submissionFinishedHandler;
    CDUnknownBlockType _statusErrorHandler;
    CDUnknownBlockType _statusFinishedHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType statusFinishedHandler; // @synthesize statusFinishedHandler=_statusFinishedHandler;
@property(copy, nonatomic) CDUnknownBlockType statusErrorHandler; // @synthesize statusErrorHandler=_statusErrorHandler;
@property(copy, nonatomic) CDUnknownBlockType submissionFinishedHandler; // @synthesize submissionFinishedHandler=_submissionFinishedHandler;
@property(copy, nonatomic) CDUnknownBlockType submissionErrorHandler; // @synthesize submissionErrorHandler=_submissionErrorHandler;
@property(retain, nonatomic) GEOProtobufSessionTask *statusTask; // @synthesize statusTask=_statusTask;
@property(retain, nonatomic) GEOProtobufSessionTask *submissionTask; // @synthesize submissionTask=_submissionTask;
@property(readonly, nonatomic) GEOProtobufSession *protobufSession; // @synthesize protobufSession=_protobufSession;
- (void)cancelRequest;
- (void)startStatusRequest:(id)arg1 finished:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)startSubmissionRequest:(id)arg1 finished:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (id)init;
- (id)cancelError;
- (void)didCompleteStatusTask;
- (void)didCompleteSubmissionTask;
- (void)protobufSession:(id)arg1 didCompleteTask:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

