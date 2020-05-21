//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface PKFeatureApplicationDeclineDetails : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_declinedTermsIdentifier;
    NSString *_pathTermsIdentifier;
    NSString *_pathIdentifier;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *pathIdentifier; // @synthesize pathIdentifier=_pathIdentifier;
@property(copy, nonatomic) NSString *pathTermsIdentifier; // @synthesize pathTermsIdentifier=_pathTermsIdentifier;
@property(copy, nonatomic) NSString *declinedTermsIdentifier; // @synthesize declinedTermsIdentifier=_declinedTermsIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

