//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/NSObject-Protocol.h>

@class NSString;

@protocol GKNicknameControllerMacDelegate <NSObject>

@optional
- (void)nicknameTextDidChange;
- (void)defaultOnboardingFlowFinished;
- (void)updateSaveButtonWithTitle:(NSString *)arg1 andState:(BOOL)arg2;
- (void)nicknameUpdateRequestCompleted:(BOOL)arg1;
@end

