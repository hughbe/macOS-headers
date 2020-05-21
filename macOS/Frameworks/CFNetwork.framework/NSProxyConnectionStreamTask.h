//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CFNetwork/NSProxyConnection.h>

#import <CFNetwork/NSStreamDelegate-Protocol.h>
#import <CFNetwork/NSURLSessionStreamDelegate-Protocol.h>

@class NSInputStream, NSObject, NSOutputStream, NSString, NSURLSessionStreamTask;
@protocol OS_dispatch_queue;

@interface NSProxyConnectionStreamTask : NSProxyConnection <NSStreamDelegate, NSURLSessionStreamDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isConnected;
    NSString *_host;
    int _port;
    BOOL _dataAvailableForReading;
    NSURLSessionStreamTask *_streamTask;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
}

- (void).cxx_destruct;
@property BOOL dataAvailableForReading; // @synthesize dataAvailableForReading=_dataAvailableForReading;
@property(retain) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(retain) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
@property(retain) NSURLSessionStreamTask *streamTask; // @synthesize streamTask=_streamTask;
- (void)dealloc;
- (void)cancel;
- (void)write:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)read:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initWithHost:(id)arg1 port:(unsigned short)arg2 queue:(id)arg3 configuration:(id)arg4;
- (void)_onConnected:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)URLSession:(id)arg1 streamTask:(id)arg2 didBecomeInputStream:(id)arg3 outputStream:(id)arg4;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)readFromStream;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

