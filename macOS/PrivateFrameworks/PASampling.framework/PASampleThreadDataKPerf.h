//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PASampling/PASampleThreadData.h>

@interface PASampleThreadDataKPerf : PASampleThreadData
{
    BOOL isSentinel;
    BOOL filledDispatchQueue;
    BOOL filledThreadSnapshotInfo;
    BOOL hasEmptyKernelStack;
    PASampleThreadDataKPerf *previousSampleThread;
}

- (void).cxx_destruct;
@property BOOL hasEmptyKernelStack; // @synthesize hasEmptyKernelStack;
@property BOOL filledThreadSnapshotInfo; // @synthesize filledThreadSnapshotInfo;
@property BOOL filledDispatchQueue; // @synthesize filledDispatchQueue;
@property BOOL isSentinel; // @synthesize isSentinel;
@property __weak PASampleThreadDataKPerf *previousSampleThread; // @synthesize previousSampleThread;
- (BOOL)hasAnyInfo;

@end

