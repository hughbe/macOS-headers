//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVRunLoopCondition, AVWeakReference, NSArray;

__attribute__((visibility("hidden")))
@interface AVAssetReaderOutputInternal : NSObject
{
    AVWeakReference *weakReference;
    BOOL alwaysCopiesSampleData;
    BOOL supportsRandomAccess;
    NSArray *currentTimeRanges;
    AVWeakReference *weakReferenceToAssetReader;
    struct OpaqueFigAssetReader *figAssetReader;
    int extractionID;
    AVRunLoopCondition *sampleBufferAvailabilityCondition;
    BOOL currentConfigurationIsFinal;
    BOOL extractionCompleteForCurrentConfiguration;
    int finished;
    BOOL maximizePowerEfficiency;
}

@end

