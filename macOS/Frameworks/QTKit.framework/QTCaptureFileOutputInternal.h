//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface QTCaptureFileOutputInternal : NSObject
{
    struct __CFDictionary *compressionOptions;
    struct CGSize maximumVideoSize;
    double minimumVideoFrameInterval;
    CDStruct_900afa40 maximumRecordedDuration;
    int maximumRecordedDurationLock;
    unsigned long long maximumRecordedFileSize;
    int maximumRecordedFileSizeLock;
    int delegateLock;
}

@end

