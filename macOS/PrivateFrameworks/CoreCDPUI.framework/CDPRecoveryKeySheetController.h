//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreCDPUI/CDPRecoveryKeySheetBaseController.h>

@class NSWindow;

@interface CDPRecoveryKeySheetController : CDPRecoveryKeySheetBaseController
{
    NSWindow *_cdpRecoveryKeySheet;
}

- (void).cxx_destruct;
@property(retain) NSWindow *cdpRecoveryKeySheet; // @synthesize cdpRecoveryKeySheet=_cdpRecoveryKeySheet;
- (void)handleCompletion:(BOOL)arg1 andError:(id)arg2;
- (void)showCdpRecoveryKeyWithWindow:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end

