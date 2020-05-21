//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoVision/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSNumber;

@protocol PVFaceClusteringProtocol <NSObject>
- (NSDictionary *)distancesFromClustersIdentifiedByFaceCSNs:(NSArray *)arg1 toClustersIdentifiedByFaceCSNs:(NSArray *)arg2 error:(id *)arg3;
- (NSNumber *)distanceBetweenLevel0ClusterIdentifiedByFaceCSN:(unsigned long long)arg1 andLevel0ClusterIdentifiedByFaceCSN:(unsigned long long)arg2 error:(id *)arg3;
- (NSDictionary *)level0ClusterAsFaceCSNsByLevel0KeyFaceCSNForClusterIdentifiedByFaceCSN:(unsigned long long)arg1 error:(id *)arg2;
@end

