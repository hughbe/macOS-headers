//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpeech/NSObject-Protocol.h>

@class CSActivationEvent, CSActivationEventNotifier;

@protocol CSActivationEventNotifierDelegate <NSObject>
- (void)activationEventNotifier:(CSActivationEventNotifier *)arg1 event:(CSActivationEvent *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
@end

