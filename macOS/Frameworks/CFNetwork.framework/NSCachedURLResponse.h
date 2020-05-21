//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CFNetwork/NSCopying-Protocol.h>
#import <CFNetwork/NSSecureCoding-Protocol.h>

@class NSCachedURLResponseInternal, NSData, NSDictionary, NSURLResponse;

@interface NSCachedURLResponse : NSObject <NSSecureCoding, NSCopying>
{
    NSCachedURLResponseInternal *_internal;
}

+ (BOOL)supportsSecureCoding;
- (void)_reestablishInternalCFCachedURLResponse:(struct _CFCachedURLResponse *)arg1;
- (void)_deallocInternalCFCachedURLResponse;
- (const struct _CFCachedURLResponse *)_CFCachedURLResponse;
- (void)dealloc;
@property(readonly) unsigned long long storagePolicy;
@property(readonly, copy) NSDictionary *userInfo;
- (id)dataArray;
@property(readonly, copy) NSData *data;
@property(readonly, copy) NSURLResponse *response;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithCFCachedURLResponse:(struct _CFCachedURLResponse *)arg1;
- (id)initWithResponse:(id)arg1 dataArray:(id)arg2 userInfo:(id)arg3 storagePolicy:(unsigned long long)arg4;
- (id)initWithResponse:(id)arg1 data:(id)arg2 userInfo:(id)arg3 storagePolicy:(unsigned long long)arg4;
- (id)initWithResponse:(id)arg1 data:(id)arg2;

@end

