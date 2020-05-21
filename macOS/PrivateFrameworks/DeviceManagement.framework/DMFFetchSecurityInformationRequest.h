//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DeviceManagement/DMFTaskRequest.h>

@class NSArray;

@interface DMFFetchSecurityInformationRequest : DMFTaskRequest
{
    NSArray *_infoKeys;
}

+ (id)watchOSSecurityInfoKeys;
+ (id)tvOSSecurityInfoKeys;
+ (id)macOSSecurityInfoKeys;
+ (id)iOSSecurityInfoKeys;
+ (id)allPlatformSecurityInfoKeys;
+ (id)currentPlatformSecurityInfoKeys;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;
+ (Class)whitelistedClassForResultObject;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *infoKeys; // @synthesize infoKeys=_infoKeys;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

