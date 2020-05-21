//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface PKAppletSubcredentialEntitlement : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _nativelySupported;
    unsigned long long _value;
    NSString *_descriptionKey;
    NSString *_longDescriptionKey;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic, getter=isNativelySupported) BOOL nativelySupported; // @synthesize nativelySupported=_nativelySupported;
@property(copy, nonatomic) NSString *longDescriptionKey; // @synthesize longDescriptionKey=_longDescriptionKey;
@property(copy, nonatomic) NSString *descriptionKey; // @synthesize descriptionKey=_descriptionKey;
@property(nonatomic) unsigned long long value; // @synthesize value=_value;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)defaultLongDescription;
- (id)defaultDescription;
- (id)localizedDescriptionWithPass:(id)arg1;
- (id)localizedLongDescriptionWithPass:(id)arg1;
- (id)asDictionary;
- (id)initWithDictionary:(id)arg1;

@end

