//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSURLProtocol.h>

@interface IFProxyURLProtocol : NSURLProtocol
{
}

+ (id)_canonicalURLForURL:(id)arg1;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (BOOL)canInitWithRequest:(id)arg1;
+ (void)initialize;
- (void)stopLoading;
- (void)startLoading;
- (void)didLoadData:(id)arg1;

@end

