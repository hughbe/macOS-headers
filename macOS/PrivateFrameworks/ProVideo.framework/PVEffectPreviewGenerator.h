//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProVideo/PVRendererBase.h>

@interface PVEffectPreviewGenerator : PVRendererBase
{
}

+ (void)cleanupCaches;
+ (id)sharedGenerator;
- (void)cancelAllPendingPreviewRequests;
- (void)generatePreviewForEffect:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 inputImage:(struct CGImage *)arg3 outputSize:(struct CGSize)arg4 waitForFinish:(BOOL)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)initWithOptions:(id)arg1;

@end

