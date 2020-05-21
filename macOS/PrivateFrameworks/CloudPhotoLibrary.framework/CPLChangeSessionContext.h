//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/NSSecureCoding-Protocol.h>

@class CPLResetTracker;

@interface CPLChangeSessionContext : NSObject <NSSecureCoding>
{
    unsigned long long _estimatedInitialSizeForLocalLibrary;
    unsigned long long _estimatedInitialAssetCountForLocalLibrary;
    CPLResetTracker *_resetTracker;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) CPLResetTracker *resetTracker; // @synthesize resetTracker=_resetTracker;
@property(nonatomic) unsigned long long estimatedInitialAssetCountForLocalLibrary; // @synthesize estimatedInitialAssetCountForLocalLibrary=_estimatedInitialAssetCountForLocalLibrary;
@property(nonatomic) unsigned long long estimatedInitialSizeForLocalLibrary; // @synthesize estimatedInitialSizeForLocalLibrary=_estimatedInitialSizeForLocalLibrary;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

