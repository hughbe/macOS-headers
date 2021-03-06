//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PLDiskController : NSObject
{
    double _lastFSCheck;
    long long _bytesRequiredForPhoto;
    struct {
        unsigned int needToCheckDiskSpace:1;
        unsigned int probablyLowOnDiskSpace:1;
        unsigned int isAssetsd:1;
        unsigned int extra:28;
    } _flags;
}

+ (BOOL)freeSpaceBelowDesiredSpaceThresholdForPath:(id)arg1;
+ (id)mountPointForPath:(id)arg1;
+ (long long)fileSystemSizeForPath:(id)arg1;
+ (long long)diskSpaceAvailableForPath:(id)arg1;
+ (long long)diskSpaceAvailableForUse;
+ (long long)freeDiskSpaceThreshold;
+ (id)sharedInstance;
- (long long)bytesToAutomaticallyClear;
- (BOOL)hasEnoughDiskToTakePicture;
- (void)updateAvailableDiskSpace;
- (void)_updateCookie;
- (void)_actuallyUpdateCookie;
- (void)_diskSpaceDidBecomeLow;
- (id)init;
- (void)dealloc;

@end

