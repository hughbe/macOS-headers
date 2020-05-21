//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, SFNotificationInfo, SFProximityClient;

@protocol SDXPCProximityClientInterface
- (void)proximityClientRequestScannerTimerReset;
- (void)proximityClientUpdateContent:(SFNotificationInfo *)arg1 forDevice:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)proximityClientProvideContent:(SFNotificationInfo *)arg1 forDevice:(NSString *)arg2 force:(BOOL)arg3 completion:(void (^)(NSError *))arg4;
- (void)proximityClientDismissContentForDevice:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)proximityClientUpdate:(SFProximityClient *)arg1;
- (void)proximityClientActivate:(SFProximityClient *)arg1 completion:(void (^)(NSError *))arg2;
@end

