//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SASettingSetBool.h>

@class NSString;

@interface SASettingSetSiriAuthorizationForApp : SASettingSetBool
{
}

+ (id)setSiriAuthorizationForAppWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setSiriAuthorizationForApp;
- (BOOL)mutatingCommand;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSString *bundleId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

