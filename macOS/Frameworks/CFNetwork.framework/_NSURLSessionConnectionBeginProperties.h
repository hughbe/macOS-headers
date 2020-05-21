//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CFNetwork/NSSecureCoding-Protocol.h>

@class __CFN_ConnectionMetrics;
@protocol OS_nw_endpoint;

@interface _NSURLSessionConnectionBeginProperties : NSObject <NSSecureCoding>
{
    __CFN_ConnectionMetrics *__metrics;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) __CFN_ConnectionMetrics *_metrics; // @synthesize _metrics=__metrics;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic, getter=isProxyConfigured) BOOL proxyConfigured;
@property(readonly, nonatomic, getter=isTLSConfigured) BOOL TLSConfigured;
@property(readonly, nonatomic) NSObject<OS_nw_endpoint> *endpoint;
- (id)initWithMetrics:(id)arg1;

@end

