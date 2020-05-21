//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface DKGLUtilities : NSObject
{
}

+ (void)setCurrentClearColor;
+ (BOOL)gpuAvailable;
+ (void)_postGLInactiveNotification;
+ (void)_postGLActiveNotification;
+ (BOOL)setCurrentGLContext:(id)arg1;
+ (id)createPlatformGLContext;
+ (id)snapshotImageOfFrameBufferWithID:(unsigned int)arg1 bufferSize:(struct CGSize)arg2 displayScale:(double)arg3;
+ (void)translateMatrix:(CDStruct_f1db2b5e *)arg1 byX:(float)arg2 Y:(float)arg3 result:(CDStruct_f1db2b5e *)arg4;
+ (void)setProjectionMatrixForWidth:(float)arg1 height:(float)arg2 flipped:(BOOL)arg3 matrix:(CDStruct_f1db2b5e *)arg4;
+ (void)drawQuadAtX:(float)arg1 Y:(float)arg2 width:(float)arg3 height:(float)arg4;
+ (void)deleteTexture:(unsigned int *)arg1;
+ (void)createRepeatableTexture:(unsigned int *)arg1 withImageName:(id)arg2 ofType:(id)arg3;
+ (void)createTexture:(unsigned int *)arg1 withImageName:(id)arg2 ofType:(id)arg3;
+ (void)deleteVBO:(unsigned int *)arg1;
+ (void)createVBO:(unsigned int *)arg1 size:(long long)arg2 data:(void *)arg3 usage:(unsigned int)arg4;
+ (void)deleteFBO:(unsigned int *)arg1 depthRB:(unsigned int *)arg2 texture:(unsigned int *)arg3;
+ (void)createFBO:(unsigned int *)arg1 depthRB:(unsigned int *)arg2 texture:(unsigned int *)arg3 width:(int)arg4 height:(int)arg5 format:(unsigned int)arg6;
+ (unsigned int)compileShader:(id)arg1 ofType:(id)arg2;
+ (id)pathForResource:(id)arg1 ofType:(id)arg2;
+ (void)initialize;

@end

