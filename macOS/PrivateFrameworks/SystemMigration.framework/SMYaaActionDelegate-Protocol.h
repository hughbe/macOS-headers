//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSURL, SMNYaaAction;

@protocol SMYaaActionDelegate
- (void)translateUID:(unsigned int *)arg1 andGID:(unsigned int *)arg2;
- (void)yaaFileFinished:(SMNYaaAction *)arg1 filePath:(NSURL *)arg2 totalSize:(unsigned long long)arg3;
@end

