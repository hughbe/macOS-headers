//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOServiceRequester.h>

__attribute__((visibility("hidden")))
@interface GEOSpatialLookupRequester : GEOServiceRequester
{
}

+ (id)sharedInstance;
- (id)_validateResponse:(id)arg1;
- (void)cancelRequest:(id)arg1;
- (void)startWithRequest:(id)arg1 traits:(id)arg2 timeout:(double)arg3 auditToken:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end

