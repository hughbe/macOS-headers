//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class EOSRestoreBundleSpecifier, NSArray, NSDictionary, NSString;

@protocol EmbeddedOSInstallServiceProtocol
- (void)lockRestoreQueueForCLIRestoreWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)getLocalFDRDataFromESPWithCompletionHandler:(void (^)(NSURL *, NSError *))arg1;
- (void)shouldHealEmbeddedDeviceWithCompletionHandler:(void (^)(BOOL, NSError *, BOOL))arg1;
- (void)restoreWithBundleSpecifier:(EOSRestoreBundleSpecifier *)arg1 options:(NSDictionary *)arg2 handlingProgressForUUID:(NSString *)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)preflightBundleForHealingWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)preflightPackageSpecifiers:(NSArray *)arg1 options:(NSDictionary *)arg2 tagPrefix:(NSString *)arg3 completionHandler:(void (^)(NSError *))arg4;
@end

