//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IOUSBHost/IOUSBHostIOSource.h>

@class NSData, NSMutableSet;

@interface IOUSBHostPipe : IOUSBHostIOSource
{
    BOOL _streamsEnabled;
    NSData *_originalDescriptorsCache;
    NSData *_currentDescriptorsCache;
    NSMutableSet *_invalidDescriptorCache;
}

- (void).cxx_destruct;
@property BOOL streamsEnabled; // @synthesize streamsEnabled=_streamsEnabled;
@property(retain) NSMutableSet *invalidDescriptorCache; // @synthesize invalidDescriptorCache=_invalidDescriptorCache;
@property(retain) NSData *currentDescriptorsCache; // @synthesize currentDescriptorsCache=_currentDescriptorsCache;
@property(retain) NSData *originalDescriptorsCache; // @synthesize originalDescriptorsCache=_originalDescriptorsCache;
- (id)copyStreamWithStreamID:(unsigned long long)arg1 error:(id *)arg2;
- (BOOL)disableStreamsWithError:(id *)arg1;
- (BOOL)enableStreamsWithError:(id *)arg1;
- (BOOL)enqueueIORequestWithData:(id)arg1 frameList:(struct IOUSBHostIsochronousFrame *)arg2 frameListCount:(unsigned long long)arg3 firstFrameNumber:(unsigned long long)arg4 error:(id *)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (BOOL)sendIORequestWithData:(id)arg1 frameList:(struct IOUSBHostIsochronousFrame *)arg2 frameListCount:(unsigned long long)arg3 firstFrameNumber:(unsigned long long)arg4 error:(id *)arg5;
- (BOOL)enqueueIORequestWithData:(id)arg1 completionTimeout:(double)arg2 error:(id *)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)sendIORequestWithData:(id)arg1 bytesTransferred:(unsigned long long *)arg2 completionTimeout:(double)arg3 error:(id *)arg4;
- (BOOL)abortWithOption:(unsigned long long)arg1 error:(id *)arg2;
- (BOOL)abortWithError:(id *)arg1;
- (BOOL)enqueueControlRequest:(struct IOUSBDeviceRequest)arg1 data:(id)arg2 completionTimeout:(double)arg3 error:(id *)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (BOOL)enqueueControlRequest:(struct IOUSBDeviceRequest)arg1 data:(id)arg2 error:(id *)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)enqueueControlRequest:(struct IOUSBDeviceRequest)arg1 error:(id *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)sendControlRequest:(struct IOUSBDeviceRequest)arg1 data:(id)arg2 bytesTransferred:(unsigned long long *)arg3 completionTimeout:(double)arg4 error:(id *)arg5;
- (BOOL)sendControlRequest:(struct IOUSBDeviceRequest)arg1 data:(id)arg2 bytesTransferred:(unsigned long long *)arg3 error:(id *)arg4;
- (BOOL)sendControlRequest:(struct IOUSBDeviceRequest)arg1 error:(id *)arg2;
- (BOOL)clearStallWithError:(id *)arg1;
- (BOOL)setIdleTimeout:(double)arg1 error:(id *)arg2;
@property(readonly) double idleTimeout;
- (BOOL)adjustPipeWithDescriptors:(const struct IOUSBHostIOSourceDescriptors *)arg1 error:(id *)arg2;
- (const struct IOUSBHostIOSourceDescriptors *)ioSourceDescriptorsWithOption:(unsigned long long)arg1;
@property(readonly) const struct IOUSBHostIOSourceDescriptors *descriptors;
@property(readonly) const struct IOUSBHostIOSourceDescriptors *originalDescriptors;
- (id)initWithHostInterface:(id)arg1 endpointAddress:(unsigned long long)arg2 ioConnection:(unsigned int)arg3 ioNotificationPortRef:(struct IONotificationPort *)arg4 deviceAddress:(unsigned long long)arg5;

@end

