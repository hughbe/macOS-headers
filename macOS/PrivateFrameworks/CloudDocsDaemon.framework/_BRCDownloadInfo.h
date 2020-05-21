//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/_BRCTransferInfo.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _BRCDownloadInfo : _BRCTransferInfo
{
    long long previousCompletedUnitCount;
    long long previousTotalUnitCount;
    NSMutableDictionary *_resumeUnitCounts;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *resumeUnitCounts; // @synthesize resumeUnitCounts=_resumeUnitCounts;
@property(nonatomic) long long previousTotalUnitCount; // @synthesize previousTotalUnitCount;
@property(nonatomic) long long previousCompletedUnitCount; // @synthesize previousCompletedUnitCount;
- (void)copyProgressInfoToProgress:(id)arg1 options:(BOOL)arg2;
- (void)updateLocalizedDescriptionWithOptions:(BOOL)arg1;
- (id)init;

@end

