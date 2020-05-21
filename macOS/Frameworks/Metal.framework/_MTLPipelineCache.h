//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Metal/MTLPipelineCache-Protocol.h>

@class NSString;

@interface _MTLPipelineCache : NSObject <MTLPipelineCache>
{
    BOOL _writable;
    struct MTLCompilerCache *_compilerCache;
    BOOL _disableRunTimeCompilation;
}

@property BOOL disableRunTimeCompilation; // @synthesize disableRunTimeCompilation=_disableRunTimeCompilation;
@property(readonly) BOOL writable; // @synthesize writable=_writable;
- (void)write;
@property(readonly) struct MTLCompilerCache *cache; // @synthesize cache=_compilerCache;
- (void)dealloc;
- (id)initWithFilePath:(id)arg1 readOnly:(BOOL)arg2 deviceInfo:(const struct MTLTargetDeviceArch *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

