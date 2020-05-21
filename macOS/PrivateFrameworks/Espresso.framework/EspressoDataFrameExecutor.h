//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface EspressoDataFrameExecutor : NSObject
{
    struct vector<void *, std::__1::allocator<void *>> pointers_to_free;
    struct vector<__CVBuffer *, std::__1::allocator<__CVBuffer *>> pixelbuffers_to_release;
    int _use_cvpixelbuffer;
    NSArray *_outputMatchingBuffers;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) int use_cvpixelbuffer; // @synthesize use_cvpixelbuffer=_use_cvpixelbuffer;
@property(retain) NSArray *outputMatchingBuffers; // @synthesize outputMatchingBuffers=_outputMatchingBuffers;
- (void)dealloc;
- (void)freeTemporaryResources;
- (int)bindOutputsFromFrame:(id)arg1 toNetwork:(CDStruct_2bc666a5)arg2 executionStatus:(int)arg3;
- (int)bindOutputsFromFrame:(id)arg1 toNetwork:(CDStruct_2bc666a5)arg2;
- (int)bindOutputsFromFrame:(id)arg1 toNetwork:(CDStruct_2bc666a5)arg2 referenceNetwork:(CDStruct_2bc666a5)arg3;
- (int)bindInputsFromFrame:(id)arg1 toNetwork:(CDStruct_2bc666a5)arg2;
- (_Bool)useCVPixelBuffers;
- (_Bool)useCVPixelBuffersForOutputs:(BOOL)arg1;

@end

