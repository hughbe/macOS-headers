//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriVOX/NSObject-Protocol.h>

@class AFXPCWrapper, NSError, NSString, SVXActivationContext, SVXDeactivationContext;

@protocol SVXClientServiceDelegate <NSObject>
- (oneway void)notifyAudioSessionDidBecomeActive:(BOOL)arg1 activationContext:(SVXActivationContext *)arg2 deactivationContext:(SVXDeactivationContext *)arg3;
- (oneway void)notifyAudioSessionWillBecomeActive:(BOOL)arg1 activationContext:(SVXActivationContext *)arg2 deactivationContext:(SVXDeactivationContext *)arg3;
- (oneway void)notifyDidEndUpdateAudioPowerWithType:(long long)arg1;
- (oneway void)notifyWillBeginUpdateAudioPowerWithType:(long long)arg1 wrapper:(AFXPCWrapper *)arg2;
- (oneway void)notifySessionDidResignActiveWithDeactivationContext:(SVXDeactivationContext *)arg1;
- (oneway void)notifySessionWillResignActiveWithOptions:(unsigned long long)arg1 duration:(double)arg2;
- (oneway void)notifySessionDidBecomeActiveWithActivationContext:(SVXActivationContext *)arg1;
- (oneway void)notifySessionWillBecomeActiveWithActivationContext:(SVXActivationContext *)arg1;
- (oneway void)notifySessionDidStopSoundWithID:(long long)arg1 error:(NSError *)arg2;
- (oneway void)notifySessionDidStartSoundWithID:(long long)arg1;
- (oneway void)notifySessionWillStartSoundWithID:(long long)arg1;
- (oneway void)notifySessionWillPresentFeedbackWithDialogIdentifier:(NSString *)arg1;
- (oneway void)notifyDidChangeSessionStateFrom:(long long)arg1 to:(long long)arg2;
- (oneway void)notifyWillChangeSessionStateFrom:(long long)arg1 to:(long long)arg2;
- (oneway void)notifyDidDeactivateWithContext:(SVXDeactivationContext *)arg1;
- (oneway void)notifyWillDeactivateWithContext:(SVXDeactivationContext *)arg1;
- (oneway void)notifyDidNotActivateWithContext:(SVXActivationContext *)arg1 error:(NSError *)arg2;
- (oneway void)notifyDidActivateWithContext:(SVXActivationContext *)arg1;
- (oneway void)notifyWillActivateWithContext:(SVXActivationContext *)arg1;
- (oneway void)requestPermissionToActivateWithContext:(SVXActivationContext *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
@end

