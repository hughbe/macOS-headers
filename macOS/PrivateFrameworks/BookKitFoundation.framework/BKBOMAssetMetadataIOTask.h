//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BookKitFoundation/BKAssetMetadataIOTask.h>

@class NSError;

@interface BKBOMAssetMetadataIOTask : BKAssetMetadataIOTask
{
    BOOL _cancelled;
    struct _BOMCopier *_copier;
    NSError *_bomError;
    unsigned long long _totalBytes;
    unsigned long long _bytesSoFar;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isCancelled) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic) unsigned long long bytesSoFar; // @synthesize bytesSoFar=_bytesSoFar;
@property(nonatomic) unsigned long long totalBytes; // @synthesize totalBytes=_totalBytes;
@property(retain, nonatomic) NSError *bomError; // @synthesize bomError=_bomError;
@property(nonatomic) struct _BOMCopier *copier; // @synthesize copier=_copier;
- (void)cancel;
- (id)executeWithTargetDirectory:(id)arg1 error:(id *)arg2;

@end

