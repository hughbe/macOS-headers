//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/NSObject-Protocol.h>

@class CLLocation, NSDate;

@protocol PLMomentProtocol <NSObject>
@property(readonly, nonatomic) struct CLLocationCoordinate2D pl_coordinate;
@property(readonly, nonatomic) CLLocation *pl_location;
@property(readonly, nonatomic) unsigned long long pl_numberOfAssets;
@property(readonly, nonatomic) NSDate *pl_endDate;
@property(readonly, nonatomic) NSDate *pl_startDate;
@end

