//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMService : NSObject
{
}

+ (id)canonicalFormOfID:(id)arg1 withIDSensitivity:(int)arg2;
+ (unsigned long long)statusForABPerson:(id)arg1;
+ (unsigned long long)statusForIMPerson:(id)arg1;
+ (BOOL)isEmailAddress:(id)arg1 inDomains:(id)arg2;
+ (id)myIdleTime;
+ (unsigned long long)myStatus;
+ (id)notificationCenter;
+ (id)serviceWithName:(id)arg1;
+ (id)allServicesNonBlocking;
+ (id)allServices;
+ (id)imageURLForStatus:(unsigned long long)arg1;
+ (id)imageNameForStatus:(unsigned long long)arg1;
+ (void)forgetStatusImageAppearance;
- (id)myScreenNames;
- (id)screenNamesForPerson:(id)arg1;
- (id)peopleWithScreenName:(id)arg1;
- (id)infoForPreferredScreenNames;
- (id)infoForAllScreenNames;
- (id)infoForScreenName:(id)arg1;
- (unsigned long long)status;
- (id)name;
- (id)localizedShortName;
- (id)localizedName;
- (BOOL)initialSyncPerformed;
- (void)logout;
- (void)login;
- (BOOL)isEnabled;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)infoForDisplayedPeople;
- (id)infoForAllPeople;
- (id)infoForPerson:(id)arg1;

@end

