//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVSampleCursor;

__attribute__((visibility("hidden")))
@interface AVSampleBufferRequestInternal : NSObject
{
    AVSampleCursor *startCursor;
    long long direction;
    AVSampleCursor *limitCursor;
    long long preferredMinSampleCount;
    long long maxSampleCount;
    long long mode;
    CDStruct_1b6d18a9 overrideTime;
}

@end

