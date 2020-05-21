//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSNumber;

@interface CTMmsRegistrationFailureInfoType : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _dataActive;
    BOOL _isDataAttached;
    BOOL _activationForMms;
    NSNumber *_pdpContextId;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) BOOL activationForMms; // @synthesize activationForMms=_activationForMms;
@property(nonatomic) BOOL isDataAttached; // @synthesize isDataAttached=_isDataAttached;
@property(nonatomic) BOOL dataActive; // @synthesize dataActive=_dataActive;
@property(retain, nonatomic) NSNumber *pdpContextId; // @synthesize pdpContextId=_pdpContextId;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToCTMmsRegistrationFailureInfoType:(id)arg1;
- (id)init;

@end

