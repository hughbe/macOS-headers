//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProVideo/PAEFilterDefaultBase.h>

@interface PAEGloom : PAEFilterDefaultBase
{
}

- (BOOL)frameSetup:(CDStruct_f5b31fc1)arg1 inputInfo:(CDStruct_4a07eeda)arg2 hardware:(char *)arg3 software:(char *)arg4;
- (BOOL)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(CDStruct_f5b31fc1)arg3;
- (BOOL)addParameters;
- (id)dynamicPropertiesAtTime:(CDUnion_baaf6063)arg1 withError:(id *)arg2;
- (id)properties;
- (void)getEdgeMode:(unsigned int *)arg1 withInfo:(CDStruct_f5b31fc1)arg2;
- (id)initWithAPIManager:(id)arg1;

@end

