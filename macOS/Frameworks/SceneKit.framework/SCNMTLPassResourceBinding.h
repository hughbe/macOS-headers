//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/SCNMTLResourceBinding.h>

__attribute__((visibility("hidden")))
@interface SCNMTLPassResourceBinding : SCNMTLResourceBinding
{
    struct {
        struct __C3DFXPassInput *_field1;
        unsigned int _field2;
        unsigned int _field3;
    } *_inputs;
    struct __C3DFXPassInput *_samplerInput;
    long long inputsCount;
    long long bufferSize;
}

@property(nonatomic) long long bufferSize; // @synthesize bufferSize;
@property(nonatomic) long long inputsCount; // @synthesize inputsCount;
- (void)dealloc;
- (id)init;

@end

