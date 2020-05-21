//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ASDServiceBroker;

@interface ASDPrivilegedTasks : NSObject
{
    ASDServiceBroker *_serviceBroker;
}

+ (id)interface;
+ (id)writeAdoptionData:(id)arg1;
+ (id)unlockApplicationAtPath:(id)arg1;
+ (id)setExtendedAttributeAtPath:(id)arg1 name:(id)arg2 value:(id)arg3;
+ (id)setAutoUpdateEnabledPreference:(BOOL)arg1;
+ (id)removePlaceholderAtPath:(id)arg1;
+ (id)removeAppBundleAtPath:(id)arg1;
+ (id)lockApplicationAtPath:(id)arg1;
+ (id)installReceiptData:(id)arg1 atBundlePath:(id)arg2;
+ (void)createPlaceholderWithName:(id)arg1 bundleID:(id)arg2 iconData:(id)arg3 withResultHandler:(CDUnknownBlockType)arg4;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)writeAdoptionData:(id)arg1;
- (id)unlockApplicationAtPath:(id)arg1;
- (id)setExtendedAttributeAtPath:(id)arg1 name:(id)arg2 value:(id)arg3;
- (id)setAutoUpdateEnabledPreference:(BOOL)arg1;
- (id)removePlaceholderAtPath:(id)arg1;
- (id)removeAppBundleAtPath:(id)arg1;
- (id)lockApplicationAtPath:(id)arg1;
- (id)installReceiptData:(id)arg1 atBundlePath:(id)arg2;
- (void)createPlaceholderWithName:(id)arg1 bundleID:(id)arg2 iconData:(id)arg3 withResultHandler:(CDUnknownBlockType)arg4;
- (id)_initWithServiceBroker:(id)arg1;
- (id)init;

@end

