//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HMBCloudZone, HMBLocalZone;

@interface HMDDatabaseFetchZonesResult : NSObject
{
    HMBLocalZone *_localZone;
    HMBCloudZone *_cloudZone;
}

- (void).cxx_destruct;
@property(readonly) HMBCloudZone *cloudZone; // @synthesize cloudZone=_cloudZone;
@property(readonly) HMBLocalZone *localZone; // @synthesize localZone=_localZone;
- (id)initWithLocalZone:(id)arg1 cloudZone:(id)arg2;

@end

