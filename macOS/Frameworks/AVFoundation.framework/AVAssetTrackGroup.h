//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVFoundation/NSCopying-Protocol.h>

@class AVAssetTrackGroupInternal, NSArray;

@interface AVAssetTrackGroup : NSObject <NSCopying>
{
    AVAssetTrackGroupInternal *_assetTrackGroup;
}

- (id)_assetComparisonToken;
@property(readonly, nonatomic) NSArray *trackIDs;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithAsset:(id)arg1 trackIDs:(id)arg2;

@end

