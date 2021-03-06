//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, NSURL;

@protocol OSSystemExtensionPolicyItem
@property(readonly) BOOL modified;
@property BOOL enabled;
@property(readonly) BOOL rebootRequired;
@property(readonly) NSURL *containingAppURL;
@property(readonly) NSURL *stagedBundleURL;
@property(readonly) NSString *bundleVersion;
@property(readonly) NSString *shortVersionString;
@property(readonly) BOOL teamIDNone;
@property(readonly) BOOL teamIDPlatformBinary;
@property(readonly) NSString *teamID;
@property(readonly) NSString *usageDescription;
@property(readonly) NSString *developerName;
@property(readonly) NSString *applicationName;
@property(readonly) NSString *extensionDisplayName;
@property(readonly) NSString *identifier;
@end

