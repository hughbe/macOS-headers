//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class VNRequest;
@protocol NSObject><NSCopying;

__attribute__((visibility("hidden")))
@interface _VNRequestForensicsRequestAndObservationsCacheKeyTuple : NSObject
{
    VNRequest *_request;
    id <NSObject><NSCopying> _observationsCacheKey;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <NSObject><NSCopying> observationsCacheKey; // @synthesize observationsCacheKey=_observationsCacheKey;
@property(readonly, nonatomic) VNRequest *request; // @synthesize request=_request;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithRequest:(id)arg1 observationsCacheKey:(id)arg2;

@end

