//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDate, NSString;

@protocol CKWritableDeviceActivityStore
- (BOOL)recordActivityWithIdentifier:(NSString *)arg1 startDate:(NSDate *)arg2 endDate:(NSDate *)arg3 error:(id *)arg4;
- (void)recordActivityWithIdentifier:(NSString *)arg1 startDate:(NSDate *)arg2 endDate:(NSDate *)arg3 completionHandler:(void (^)(NSError *))arg4;
@end

