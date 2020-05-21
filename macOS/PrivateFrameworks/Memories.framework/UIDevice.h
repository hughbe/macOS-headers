//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface UIDevice : NSObject
{
}

+ (id)currentDevice;
- (BOOL)_supportsDeepColor;
- (BOOL)osVersionAtLeast:(id)arg1;
- (BOOL)canSupportHEVC;
- (BOOL)screenCanShow2160P;
- (BOOL)canEncode2160P;
- (BOOL)sufficientOomphForZoomedRenderScale;
- (BOOL)enoughMemoryFor2160P;
- (BOOL)enoughMemoryForRendering12MPPhoto;
- (BOOL)enoughPowerFor2160P;
- (BOOL)enoughPowerForLargerPhotoThumbnails;
- (int)numberOfCPU;
- (BOOL)hasMoreThan1GBOfMemory;
- (BOOL)hasPlentyOfMemory;
- (long long)freeMemory;
- (long long)memorySize;
- (BOOL)isWidePhone;
- (BOOL)isLargePhone;
- (id)orientationString;

@end

