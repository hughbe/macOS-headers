//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSSecureCoding-Protocol.h>

@class NSString;

@interface _NSCloudSharingDescriptor : NSObject <NSSecureCoding>
{
    long long _operation;
    NSString *_sharedContentType;
    long long _numberOfInvitations;
    BOOL _invitationsSentViaThirdPartyService;
    BOOL _publicShare;
}

+ (BOOL)supportsSecureCoding;
@property(copy) NSString *sharedContentType; // @synthesize sharedContentType=_sharedContentType;
@property long long numberOfInvitations; // @synthesize numberOfInvitations=_numberOfInvitations;
@property BOOL publicShare; // @synthesize publicShare=_publicShare;
@property BOOL invitationsSentViaThirdPartyService; // @synthesize invitationsSentViaThirdPartyService=_invitationsSentViaThirdPartyService;
@property long long operation; // @synthesize operation=_operation;
- (id)_variantSubstrings;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

