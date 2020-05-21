//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MobileAccessoryUpdater/NSObject-Protocol.h>

@class NSDictionary, NSError, NSString;

@protocol MobileAccessoryUpdaterDelegate <NSObject>
- (void)stepRunning:(NSString *)arg1 deviceClass:(NSString *)arg2 progress:(double)arg3 overallProgress:(double)arg4 info:(NSDictionary *)arg5;
- (void)stepComplete:(NSString *)arg1 deviceClass:(NSString *)arg2 successful:(BOOL)arg3 info:(NSDictionary *)arg4 error:(NSError *)arg5;
- (void)deviceClassAttached:(NSString *)arg1;

@optional
- (void)deviceClassDetached:(NSString *)arg1 error:(NSError *)arg2;
@end

