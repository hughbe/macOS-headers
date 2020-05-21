//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface VCPCNNFastGestureRecognition : NSObject
{
}

+ (id)detector;
- (int)gestureDetection:(struct __CVBuffer *)arg1 score:(float *)arg2;
- (float *)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int *)arg3 cnnInputWidth:(int *)arg4;
- (int)getDetectionScore:(float *)arg1;
- (int)createModel:(int)arg1 srcWidth:(int)arg2;
- (int)createInput:(float *)arg1 withBuffer:(struct __CVBuffer *)arg2 cnnInputHeight:(int)arg3 cnnInputWidth:(int)arg4;
- (int)copyImage:(struct __CVBuffer *)arg1 toData:(float *)arg2 withChunk:(int)arg3;
- (int)planDestroy;

@end

