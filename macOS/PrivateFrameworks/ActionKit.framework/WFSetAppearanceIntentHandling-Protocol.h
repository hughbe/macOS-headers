//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/NSObject-Protocol.h>

@class WFSetAppearanceIntent;

@protocol WFSetAppearanceIntentHandling <NSObject>
- (void)resolveStyleForSetAppearance:(WFSetAppearanceIntent *)arg1 withCompletion:(void (^)(WFDeviceAppearanceTypeResolutionResult *))arg2;
- (void)handleSetAppearance:(WFSetAppearanceIntent *)arg1 completion:(void (^)(WFSetAppearanceIntentResponse *))arg2;

@optional
- (void)confirmSetAppearance:(WFSetAppearanceIntent *)arg1 completion:(void (^)(WFSetAppearanceIntentResponse *))arg2;
@end

