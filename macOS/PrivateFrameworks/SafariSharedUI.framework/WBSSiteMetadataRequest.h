//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariSharedUI/NSCopying-Protocol.h>

@class NSDictionary, NSURL;

@interface WBSSiteMetadataRequest : NSObject <NSCopying>
{
    NSURL *_url;
    NSDictionary *_extraInfo;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithURL:(id)arg1 extraInfo:(id)arg2;
- (id)init;

@end

