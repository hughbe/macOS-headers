//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LocalAuthenticationUI/LAUIAuthenticationDelegate-Protocol.h>

@class NSNotification;

@protocol LAUIAuthenticationCoreDelegate <LAUIAuthenticationDelegate>
- (void)biometryState:(long long)arg1 completionHandler:(void (^)(void))arg2;
- (void)notification:(long long)arg1 original:(NSNotification *)arg2 mechanism:(unsigned long long)arg3;
@end

