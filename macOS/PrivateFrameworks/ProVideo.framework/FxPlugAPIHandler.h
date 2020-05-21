//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProVideo/FxHostResourcesAPI-Protocol.h>
#import <ProVideo/PROAPIObject-Protocol.h>

@class NSString;
@protocol FxPlugAPIDelegate;

@interface FxPlugAPIHandler : NSObject <FxHostResourcesAPI, PROAPIObject>
{
    NSObject<FxPlugAPIDelegate> *_delegate;
}

@property(nonatomic) NSObject<FxPlugAPIDelegate> *delegate; // @synthesize delegate=_delegate;
- (BOOL)conformsToProtocol:(id)arg1 version:(unsigned int)arg2;
- (id)initWithDelegate:(id)arg1;
- (void)runFxPlugThread:(id)arg1;
- (void)performSelector:(SEL)arg1 onTarget:(id)arg2 withObject:(id)arg3 onThreads:(long long)arg4 waitUntilDone:(BOOL)arg5 error:(id *)arg6;
- (unsigned long long)numberOfCores;
- (void)deletePBuffer:(unsigned int)arg1 error:(id *)arg2;
- (void)createPBuffer:(unsigned int *)arg1 withTarget:(unsigned int)arg2 error:(id *)arg3;
- (void)deleteTexture:(id)arg1 error:(id *)arg2;
- (void)createTexture:(id *)arg1 withDOD:(struct FxRect)arg2 GLTarget:(unsigned int)arg3 level:(int)arg4 internalFormat:(unsigned int)arg5 width:(int)arg6 height:(int)arg7 border:(int)arg8 format:(unsigned int)arg9 type:(unsigned int)arg10 pixels:(const void *)arg11 origin:(unsigned long long)arg12 pixelAspectRatio:(double)arg13 andError:(id *)arg14;
- (void)trackExternalAllocation:(unsigned long long)arg1;
- (void)freeMemory:(void *)arg1 error:(id *)arg2;
- (void *)allocateMemory:(unsigned long long)arg1 clear:(BOOL)arg2 clearWith:(unsigned char)arg3 error:(id *)arg4;
- (id)errorWithString:(id)arg1 andCode:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

