//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVRemoteCore/NSObject-Protocol.h>

@class NSDictionary, NSSet, NSString, TVRCButtonEvent, TVRCGameControllerEvent, TVRCTouchEvent, _TVRXDevice, _TVRXKeyboardController, _TVRXVoiceRecorder;

@protocol _TVRCDeviceImpl <NSObject>
- (void)sendGameControllerEvent:(TVRCGameControllerEvent *)arg1;
- (void)sendTouchEvent:(TVRCTouchEvent *)arg1;
- (void)sendButtonEvent:(TVRCButtonEvent *)arg1;
- (void)disconnect;
- (void)connect;
- (void)setAuthenticationSupported:(BOOL)arg1;
- (long long)connectionType;
- (unsigned long long)pairingCapability;
- (_TVRXKeyboardController *)keyboardController;
- (_TVRXVoiceRecorder *)voiceRecorder;
- (NSSet *)supportedButtons;
- (NSString *)model;
- (NSDictionary *)alternateIdentifiers;
- (NSString *)identifier;
- (NSString *)name;
- (BOOL)supportsTouchEvents;
- (void)setDevice:(_TVRXDevice *)arg1;

@optional
- (void)sendEvent:(NSString *)arg1 options:(NSDictionary *)arg2 response:(void (^)(NSDictionary *, NSDictionary *, NSError *))arg3;
- (BOOL)isPaired;
@end

