//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface EKRecents : NSObject
{
}

+ (BOOL)recordRecentForContactWithName:(id)arg1 emailAddress:(id)arg2 phoneNumber:(id)arg3;
+ (void)recordRecentWithAddress:(id)arg1 name:(id)arg2 kind:(id)arg3;
+ (id)recentForContactWithAddress:(id)arg1 name:(id)arg2 kind:(id)arg3;
+ (id)crRecentsDomainCalendarString;
+ (id)crAddressKindPhoneNumberString;
+ (id)crAddressKindEmailString;
+ (Class)crRecentContactsLibraryClass;

@end

