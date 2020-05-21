//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/NSCopying-Protocol.h>
#import <AppleMediaServices/NSSecureCoding-Protocol.h>

@class NSDictionary, NSMutableDictionary;

@interface AMSBuyParams : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableDictionary *_backingDictionary;
}

+ (BOOL)supportsSecureCoding;
+ (id)buyParamsWithString:(id)arg1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_parseBuyParams:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)stringValue;
- (void)setProperty:(id)arg1 forKey:(id)arg2;
- (id)propertyForKey:(id)arg1;
- (void)importURLEncodedBuyParams:(id)arg1;
@property(readonly) NSDictionary *dictionary;
- (void)clear;
- (id)initWithString:(id)arg1;
- (id)init;

@end

