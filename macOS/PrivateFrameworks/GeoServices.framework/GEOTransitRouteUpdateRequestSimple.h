//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOXPCRequest.h>

#import <GeoServices/GEOXPCRequest-Protocol.h>

@class GEOTransitRouteUpdateRequest, NSString;

@interface GEOTransitRouteUpdateRequestSimple : GEOXPCRequest <GEOXPCRequest>
{
    GEOTransitRouteUpdateRequest *_request;
}

+ (Class)replyClass;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) GEOTransitRouteUpdateRequest *request; // @synthesize request=_request;
- (BOOL)expectsReply;
- (BOOL)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

