/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPCNNEspressoContext : NSObject {
    void * _espressoContext;
}

@property (nonatomic, readonly) void*espressoContext;

+ (void*)createContextWithForceCPU:(bool)arg1;
+ (void*)sharedEspressoContext:(bool)arg1;
+ (bool)supportGPU;

- (void*)espressoContext;
- (id)initWithForceCPU:(bool)arg1 shared:(bool)arg2;

@end
