//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CPLChangeBatch;

@interface PLCloudPhotoLibraryBatchContainer : NSObject
{
    BOOL _wasSplit;
    BOOL _reachedMinSplit;
    BOOL _wasFixed;
    CPLChangeBatch *_batch;
    unsigned long long _retryCount;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL wasFixed; // @synthesize wasFixed=_wasFixed;
@property(nonatomic) BOOL reachedMinSplit; // @synthesize reachedMinSplit=_reachedMinSplit;
@property(nonatomic) BOOL wasSplit; // @synthesize wasSplit=_wasSplit;
@property(nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) CPLChangeBatch *batch; // @synthesize batch=_batch;
- (id)description;
- (id)batchesSplitForError;
- (id)lastAddedRecord;
- (void)incrementRetryCount;
- (void)addRecord:(id)arg1;
- (unsigned long long)count;
- (id)init;

@end

