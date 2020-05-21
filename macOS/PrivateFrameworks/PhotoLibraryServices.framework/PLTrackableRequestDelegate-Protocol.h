//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class NSData, NSDictionary, NSError, NSURL;
@protocol PLTrackableRequest;

@protocol PLTrackableRequestDelegate <NSObject>
- (void)trackableVideoChoosingAndAvailabilityRequest:(id <PLTrackableRequest>)arg1 didFinishWithVideoURL:(NSURL *)arg2 info:(NSDictionary *)arg3 error:(NSError *)arg4;
- (void)trackableDownloadRequest:(id <PLTrackableRequest>)arg1 didFinishWithSuccess:(BOOL)arg2 url:(NSURL *)arg3 data:(NSData *)arg4 info:(NSDictionary *)arg5 error:(NSError *)arg6;
- (void)trackableResourceRepairRequest:(id <PLTrackableRequest>)arg1 didFinishWithSuccess:(BOOL)arg2;
- (void)trackableRequest:(id <PLTrackableRequest>)arg1 didReportProgress:(double)arg2 completed:(BOOL)arg3 error:(NSError *)arg4;
@end

