//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NWSSnapshotSource;

@interface NWSSnapshotter : NSObject
{
    unsigned long long _kernelSourceRef;
    NWSSnapshotSource *_snapshotSource;
}

- (void).cxx_destruct;
@property(retain) NWSSnapshotSource *snapshotSource; // @synthesize snapshotSource=_snapshotSource;
@property unsigned long long kernelSourceRef; // @synthesize kernelSourceRef=_kernelSourceRef;
- (id)snapshot;

@end

