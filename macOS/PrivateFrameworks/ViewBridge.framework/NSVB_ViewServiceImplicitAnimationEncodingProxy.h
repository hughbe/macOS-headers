//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ViewBridge/NSVB_TargetedProxy.h>

__attribute__((visibility("hidden")))
@interface NSVB_ViewServiceImplicitAnimationEncodingProxy : NSVB_TargetedProxy
{
    id _controlMessageTarget;
    unsigned int _windowFrameAnimationInProgress:1;
}

+ (id)proxyEncodingAnimationsForTarget:(id)arg1 controlMessageTarget:(id)arg2 windowFrameAnimationInProgress:(BOOL)arg3;
- (void)forwardInvocation:(id)arg1;
- (void)dealloc;

@end

