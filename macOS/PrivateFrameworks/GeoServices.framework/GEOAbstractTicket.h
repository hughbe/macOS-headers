//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEODataRequestThrottlerToken, GEOMapServiceTraits, NSDictionary;

@interface GEOAbstractTicket : NSObject
{
    GEOMapServiceTraits *_traits;
    unsigned long long _cachePolicy;
    NSDictionary *_responseUserInfo;
    BOOL _cancelled;
    GEODataRequestThrottlerToken *_throttlerToken;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *responseUserInfo; // @synthesize responseUserInfo=_responseUserInfo;
@property(nonatomic) unsigned long long cachePolicy; // @synthesize cachePolicy=_cachePolicy;
@property(readonly, nonatomic) GEOMapServiceTraits *traits; // @synthesize traits=_traits;
- (void)setThrottlerToken:(id)arg1;
- (void)cancel;
@property(readonly, getter=isCancelled) BOOL cancelled;
- (id)description;
- (id)initWithTraits:(id)arg1;
- (id)init;

@end

