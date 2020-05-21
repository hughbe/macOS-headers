//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/NSObject-Protocol.h>

@class NSArray, NSError, OSActivityStream;

@protocol OSActivityStreamDelegate <NSObject>
- (BOOL)activityStream:(OSActivityStream *)arg1 results:(NSArray *)arg2;

@optional
- (BOOL)activityStream:(OSActivityStream *)arg1 results:(NSArray *)arg2 error:(NSError *)arg3;
- (void)streamDidStop:(OSActivityStream *)arg1;
- (void)streamDidFail:(OSActivityStream *)arg1 error:(NSError *)arg2;
- (void)streamDidStart:(OSActivityStream *)arg1;
@end

