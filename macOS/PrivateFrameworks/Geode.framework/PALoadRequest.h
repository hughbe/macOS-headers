//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Geode/NSCoding-Protocol.h>

@class IPAImageSizePolicy, NSDictionary, PAImageRequestCacheHint, PAImageRequestTileHint;

@interface PALoadRequest : NSObject <NSCoding>
{
    NSDictionary *_cgOptions;
    PAImageRequestCacheHint *_cacheHint;
    PAImageRequestTileHint *_tileHint;
    IPAImageSizePolicy *_sizePolicy;
}

- (void).cxx_destruct;
@property(readonly) NSDictionary *cgOptions; // @synthesize cgOptions=_cgOptions;
@property(readonly) IPAImageSizePolicy *sizePolicy; // @synthesize sizePolicy=_sizePolicy;
@property(readonly) PAImageRequestTileHint *tileHint; // @synthesize tileHint=_tileHint;
@property(readonly) PAImageRequestCacheHint *cacheHint; // @synthesize cacheHint=_cacheHint;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCacheHint:(id)arg1 tileHint:(id)arg2;
- (id)initWithCacheHint:(id)arg1 tileHint:(id)arg2 sizePolicy:(id)arg3;

@end

