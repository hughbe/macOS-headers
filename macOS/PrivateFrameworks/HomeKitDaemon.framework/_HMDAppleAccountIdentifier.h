//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/_HMDAccountIdentifier.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _HMDAppleAccountIdentifier : _HMDAccountIdentifier
{
    NSString *_identifierString;
}

+ (BOOL)supportsSecureCoding;
+ (id)namespace;
- (void).cxx_destruct;
@property(readonly, copy) NSString *identifierString; // @synthesize identifierString=_identifierString;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isAuthenticated;
- (BOOL)isEqual:(id)arg1;
- (id)initWithIdentifierString:(id)arg1;
- (id)initWithIdentifier:(id)arg1;

@end

