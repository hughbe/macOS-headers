//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;
@protocol SOFaceTimeCallHandlerDelegate;

@interface SOFaceTimeCallHandler : NSObject
{
    id <SOFaceTimeCallHandlerDelegate> _delegate;
    NSTimer *_faceTimeMultiwayCallTimer;
}

- (void).cxx_destruct;
@property(nonatomic) __weak NSTimer *faceTimeMultiwayCallTimer; // @synthesize faceTimeMultiwayCallTimer=_faceTimeMultiwayCallTimer;
@property(nonatomic) __weak id <SOFaceTimeCallHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateIfNeeded;
@property(readonly, nonatomic) BOOL hasActiveFaceTimeCall; // @dynamic hasActiveFaceTimeCall;
- (void)_handleMultiwayConversationChanged:(id)arg1;
- (BOOL)_conversationStateDidChange;
- (void)infoButtonClicked;
- (void)joinCall;
- (void)_stopFaceTimeMultiwayCallTimer;
- (void)_startFaceTimeMultiwayCallTimerIfNeeded;
- (void)_startFaceTimeMultiwayCallTimer;
- (BOOL)_shouldStartFaceTimeMultiwayCallTimer;
- (void)_faceTimeMultiwayCallTimerDidFire:(id)arg1;
- (void)registerForEventNotifications;
- (id)chat;
- (void)dealloc;
- (id)init;

@end

