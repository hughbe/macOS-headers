//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CFNetwork/NSCopying-Protocol.h>
#import <CFNetwork/NSSecureCoding-Protocol.h>

@class NSString, NSURL, NSURLResponseInternal;

@interface NSURLResponse : NSObject <NSSecureCoding, NSCopying>
{
    NSURLResponseInternal *_internal;
    struct URLResponse *__cf_resp_data;
}

+ (BOOL)supportsSecureCoding;
+ (id)getObjectKeyWithIndex:(long long)arg1;
+ (id)_responseWithCFURLResponse:(id)arg1;
@property struct URLResponse *_cf_resp_data; // @synthesize _cf_resp_data=__cf_resp_data;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *suggestedFilename;
@property(readonly) long long expectedContentLength;
@property(readonly, copy) NSString *textEncodingName;
@property(readonly, copy) NSString *MIMEType;
@property(readonly, copy) NSURL *URL;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithURL:(id)arg1 MIMEType:(id)arg2 expectedContentLength:(long long)arg3 textEncodingName:(id)arg4;
- (id)_initWithCFURLResponse:(id)arg1;
- (id)_initWithInternal:(id)arg1;
- (struct URLResponse *)_inner;
- (id)_peerCertificateChain;
- (void)dealloc;
- (double)_calculatedExpiration;
- (double)_freshnessLifetime;
- (BOOL)_mustRevalidate;
- (id)_lastModifiedDate;
- (void)_setMIMEType:(id)arg1;
- (void)_setExpectedContentLength:(long long)arg1;
- (id)_CFURLResponse;

@end

