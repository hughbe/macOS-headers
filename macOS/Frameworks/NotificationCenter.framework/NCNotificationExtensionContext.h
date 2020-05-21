//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import <NotificationCenter/NCRemoteViewExtensionContextProtocol-Protocol.h>

@class NSString, NSUserNotification;

@interface NCNotificationExtensionContext : NSExtensionContext <NCRemoteViewExtensionContextProtocol>
{
    id _delegate;
    NSUserNotification *_notification;
}

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)serviceInterface;
+ (id)hostInterface;
- (void).cxx_destruct;
@property(readonly) NSUserNotification *notification; // @synthesize notification=_notification;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void)closeNotificationWithActivation:(long long)arg1 actionIdentifier:(id)arg2;
- (void)setNotification:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)conformsToProtocol:(id)arg1;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

