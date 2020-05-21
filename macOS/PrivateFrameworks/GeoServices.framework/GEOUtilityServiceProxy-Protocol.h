//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@protocol GEOUtilityServiceProxy <NSObject>
- (void)getCurrentGeoServicesState:(NSObject<OS_dispatch_queue> *)arg1 callback:(void (^)(GEOServicesState *, NSError *))arg2;
- (NSString *)getGeoServicesCacheDirectoryPath;
- (NSString *)getHomeDirectoryPath;
@end

