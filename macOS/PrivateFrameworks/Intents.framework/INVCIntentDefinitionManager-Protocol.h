//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class INAppInfo, NSArray, NSString;

@protocol INVCIntentDefinitionManager <NSObject>
+ (INAppInfo *)appInfoForBundleID:(NSString *)arg1;
+ (NSArray *)intentDefinitionLocalizableFileURLsForBundleID:(NSString *)arg1;
+ (NSArray *)intentDefinitionURLsForBundleID:(NSString *)arg1;
@end

