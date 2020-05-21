//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ViewBridge/HostOrServiceCallsAuxiliary-Protocol.h>

@class NSArray, NSColor, NSData, NSString, NSXPCListenerEndpoint;

@protocol ServiceCallsAuxiliary <HostOrServiceCallsAuxiliary>
- (void)declineKeyboardEventsOtherThan:(NSArray *)arg1;
- (void)joinPair:(NSString *)arg1 window:(unsigned int)arg2 reply:(void (^)(NSError *))arg3;
- (void)requestFrame:(struct CGRect)arg1 serviceWindowBackgroundColor:(NSColor *)arg2 animate:(BOOL)arg3 transaction:(NSString *)arg4 completion:(void (^)(NSError *, struct CGRect))arg5;
- (void)frameOfServiceWindowDidChange:(struct CGRect)arg1 windowBackgroundColor:(NSColor *)arg2 reply:(void (^)(NSError *))arg3;
- (void)addChildWindow:(CDStruct_8ca9744b)arg1 identifier:(NSString *)arg2 listenerEndpoint:(NSXPCListenerEndpoint *)arg3 reply:(void (^)(NSError *))arg4;
- (void)keyEventHitAccessoryView:(NSData *)arg1 reply:(void (^)(BOOL))arg2;
- (void)potentialCommandEquivalentHitApplication:(NSData *)arg1 reply:(void (^)(BOOL))arg2;
@end

