//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BridgeOSInstall/BOSSUCOperation.h>

@interface BOSSUCCancelOperation : BOSSUCOperation
{
}

- (void)bridgeOSSoftwareUpdateController:(id)arg1 cancelComplete:(id)arg2;
- (void)startControllerOperation;
- (id)description;
- (BOOL)shouldWaitForInProgressOperationToFinish;
- (BOOL)controllerEndingStateMustMatchExactly;
- (int)controllerEndingState;
- (int)controllerOperation;

@end

