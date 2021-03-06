//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BusinessChat/NSSecureCoding-Protocol.h>

@class BCOAuth2Parameters, NSString;

@interface BCAuthenticationRequest : NSObject <NSSecureCoding>
{
    NSString *_businessIdentifier;
    NSString *_businessName;
    BCOAuth2Parameters *_oauth2;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) BCOAuth2Parameters *oauth2; // @synthesize oauth2=_oauth2;
@property(readonly, nonatomic) NSString *businessName; // @synthesize businessName=_businessName;
@property(retain, nonatomic) NSString *businessIdentifier; // @synthesize businessIdentifier=_businessIdentifier;
- (id)debugDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 imageDictionary:(id)arg2;

@end

