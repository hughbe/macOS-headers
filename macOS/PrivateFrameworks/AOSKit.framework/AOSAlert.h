//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AOSAlert : NSObject
{
}

+ (void)_launchAlertManagerWithProperties:(id)arg1;
+ (id)_identifierForAlert:(id)arg1;
+ (void)_updateLastDisplayTimeForAlert:(id)arg1;
+ (id)_lastDisplayTimeForAlert:(id)arg1;
+ (BOOL)doDisplayAlert:(id)arg1;
+ (BOOL)_displayMailStorageQuotaAlert:(id)arg1;
+ (BOOL)_displayFileStorageQuotaAlert:(id)arg1;
+ (BOOL)_displayTermsOfServiceAlert:(id)arg1;
+ (BOOL)_displayAuthAlert:(id)arg1;
+ (BOOL)displayAlert:(id)arg1;

@end

