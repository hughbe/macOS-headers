//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WiFiPolicy/WiFiContextProvider-Protocol.h>

@class CLLocation;

@protocol WiFiLocationProvider <WiFiContextProvider>
@property(copy, nonatomic) CDUnknownBlockType locationChangedCallback;
@property(readonly, nonatomic) CLLocation *currentLocation;
@property(readonly, nonatomic) BOOL isAuthorized;
- (void)requestHighAccuracyLocation:(void (^)(CLLocation *, NSError *))arg1;
@end

