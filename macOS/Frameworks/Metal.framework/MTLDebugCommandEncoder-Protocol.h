//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/MTLCommandEncoder-Protocol.h>

@class NSString;
@protocol MTLBuffer, MTLTexture;

@protocol MTLDebugCommandEncoder <MTLCommandEncoder>
- (void)IOLogBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (void)kprintfBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (void)IOLog:(NSString *)arg1;
- (void)kprintf:(NSString *)arg1;

@optional
- (void)postFinishEvent;
- (void)postFinishEvent:(const char *)arg1;
- (void)dumpTexture:(id <MTLTexture>)arg1;
- (void)dumpTexture:(id <MTLTexture>)arg1 name:(const char *)arg2;
- (void)dumpTexture:(id <MTLTexture>)arg1 name:(const char *)arg2 glMode:(BOOL)arg3;
- (void)dumpBuffer:(id <MTLBuffer>)arg1;
- (void)dumpBuffer:(id <MTLBuffer>)arg1 name:(const char *)arg2;
- (unsigned int)getLastStartStopCaptureResult;
- (void)stopCapture;
- (void)stopCapture:(const char *)arg1;
- (void)startCapture;
- (void)startCaptureWithSettings:(const char *)arg1;
- (void)startCaptureWithSettings:(const char *)arg1 from:(const char *)arg2;
@end

