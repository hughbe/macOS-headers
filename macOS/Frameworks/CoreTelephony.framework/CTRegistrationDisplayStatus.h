//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSString;

@interface CTRegistrationDisplayStatus : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _isInHomeCountry;
    BOOL _changedDueToSimRemoval;
    BOOL _isRegistrationForcedHome;
    NSString *_registrationDisplayStatus;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) BOOL isRegistrationForcedHome; // @synthesize isRegistrationForcedHome=_isRegistrationForcedHome;
@property(nonatomic) BOOL changedDueToSimRemoval; // @synthesize changedDueToSimRemoval=_changedDueToSimRemoval;
@property(nonatomic) BOOL isInHomeCountry; // @synthesize isInHomeCountry=_isInHomeCountry;
@property(retain, nonatomic) NSString *registrationDisplayStatus; // @synthesize registrationDisplayStatus=_registrationDisplayStatus;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

