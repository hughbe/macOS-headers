//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FinderKit/NSObject-Protocol.h>

@class NSDictionary;

@protocol TNWOperationDelegateProtocol <NSObject>

@optional
- (void)nwOperationEventConverting:(NSDictionary *)arg1 opController:(struct INWOperationController *)arg2;
- (void)nwOperationEventBlocked:(NSDictionary *)arg1 opController:(struct INWOperationController *)arg2;
- (void)nwOperationEventConflict:(NSDictionary *)arg1 opController:(struct INWOperationController *)arg2;
- (void)nwOperationEventInformation:(NSDictionary *)arg1 opController:(struct INWOperationController *)arg2;
- (void)nwOperationEventConnecting:(NSDictionary *)arg1 opController:(struct INWOperationController *)arg2;
- (void)nwOperationEventErrorOccurred:(NSDictionary *)arg1 opController:(struct INWOperationController *)arg2;
- (void)nwOperationEventFinished:(NSDictionary *)arg1 opController:(struct INWOperationController *)arg2;
- (void)nwOperationEventPostprocess:(NSDictionary *)arg1 opController:(struct INWOperationController *)arg2;
- (void)nwOperationEventProgress:(NSDictionary *)arg1 opController:(struct INWOperationController *)arg2;
- (void)nwOperationEventPreprocess:(NSDictionary *)arg1 opController:(struct INWOperationController *)arg2;
- (void)nwOperationEventStarted:(NSDictionary *)arg1 opController:(struct INWOperationController *)arg2;
- (void)nwOperationEventCanceled:(NSDictionary *)arg1 opController:(struct INWOperationController *)arg2;
- (void)nwOperationEventWaitForAnswer:(NSDictionary *)arg1 opController:(struct INWOperationController *)arg2;
- (void)nwOperationEventAskUser:(NSDictionary *)arg1 opController:(struct INWOperationController *)arg2;
- (void)nwOperationEventNewOperation:(NSDictionary *)arg1 opController:(struct INWOperationController *)arg2;
- (void)preflightNWOperationEvent:(long long)arg1 results:(NSDictionary *)arg2 opController:(struct INWOperationController *)arg3;
@end

