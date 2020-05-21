//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileAccessoryUpdater/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface FudPersonalizationObjectInfo : NSObject <NSSecureCoding>
{
    BOOL _esecSet;
    BOOL _eproSet;
    BOOL _trustedSet;
    BOOL _trusted;
    BOOL _effectiveProductionMode;
    BOOL _effectiveSecurityMode;
    NSString *_objectTag;
    NSData *_digest;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL effectiveSecurityMode; // @synthesize effectiveSecurityMode=_effectiveSecurityMode;
@property(nonatomic) BOOL effectiveProductionMode; // @synthesize effectiveProductionMode=_effectiveProductionMode;
@property(nonatomic) BOOL trusted; // @synthesize trusted=_trusted;
@property(retain, nonatomic) NSData *digest; // @synthesize digest=_digest;
@property(readonly, copy, nonatomic) NSString *objectTag; // @synthesize objectTag=_objectTag;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isEffectiveSecurityModeSet;
- (BOOL)isEffectiveProductionModeSet;
- (BOOL)isTrustedSet;
- (void)dealloc;
- (id)initWithTag:(id)arg1;

@end

