//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriVOX/NSObject-Protocol.h>

@class AFXPCWrapper, SVXSessionManager;

@protocol SVXSessionAudioPowerUpdateListening <NSObject>

@optional
- (void)sessionManager:(SVXSessionManager *)arg1 didEndUpdateAudioPowerWithType:(long long)arg2;
- (void)sessionManager:(SVXSessionManager *)arg1 willBeginUpdateAudioPowerWithType:(long long)arg2 wrapper:(AFXPCWrapper *)arg3;
@end

