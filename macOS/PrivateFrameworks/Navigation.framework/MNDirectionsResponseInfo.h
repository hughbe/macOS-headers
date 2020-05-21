//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/NSSecureCoding-Protocol.h>

@class GEODirectionsError, GEODirectionsRequest, GEODirectionsResponse, MNTraceRecordingData, NSArray, NSError;

__attribute__((visibility("hidden")))
@interface MNDirectionsResponseInfo : NSObject <NSSecureCoding>
{
    NSArray *_routeInfos;
    GEODirectionsRequest *_request;
    GEODirectionsResponse *_response;
    NSError *_error;
    GEODirectionsError *_directionsError;
    MNTraceRecordingData *_traceRecordingData;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) MNTraceRecordingData *traceRecordingData; // @synthesize traceRecordingData=_traceRecordingData;
@property(retain, nonatomic) GEODirectionsError *directionsError; // @synthesize directionsError=_directionsError;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) GEODirectionsResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) GEODirectionsRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSArray *routeInfos; // @synthesize routeInfos=_routeInfos;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

