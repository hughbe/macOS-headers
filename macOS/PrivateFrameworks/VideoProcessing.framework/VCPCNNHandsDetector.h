//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface VCPCNNHandsDetector : NSObject
{
}

+ (id)detector:(int)arg1;
- (int)handsDetection:(struct __CVBuffer *)arg1 handsRegions:(id)arg2;
- (int)generateHandsRegions:(const vector_7cb31c67 *)arg1 boxes:(id)arg2 maxNumRegions:(int)arg3;
- (int)retrieveBoxes:(float *)arg1 outHeight:(int)arg2 outWidth:(int)arg3 boxes:(id)arg4 anchorBox:(float [3][2])arg5;
- (void)nonMaxSuppression:(id)arg1;
- (int)generateHandsBoxes:(id)arg1;
- (float *)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int *)arg3 cnnInputWidth:(int *)arg4;
- (int)createInput:(float *)arg1 withBuffer:(struct __CVBuffer *)arg2 cnnInputHeight:(int)arg3 cnnInputWidth:(int)arg4;
- (int)copyImage:(struct __CVBuffer *)arg1 toData:(float *)arg2;

@end

