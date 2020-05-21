//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/NSObject-Protocol.h>

@class PHCompositeMediaResult, PHMediaRequest;
@protocol PLResourceIdentity;

@protocol PHMediaRequestDelegate <NSObject>
- (void)mediaRequest:(PHMediaRequest *)arg1 didFinishWithResult:(PHCompositeMediaResult *)arg2;
- (BOOL)mediaRequest:(PHMediaRequest *)arg1 didStartLocalAvailabilityChangeRequestForResource:(id <PLResourceIdentity>)arg2;
- (void)mediaRequest:(PHMediaRequest *)arg1 didFindLocallyAvailableResult:(BOOL)arg2 isDegraded:(BOOL)arg3;
@end

