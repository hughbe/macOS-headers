//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameController/NSObject-Protocol.h>

@class GCController, NSDictionary, NSNumber, NSString;

@protocol GameControllerDaemon <NSObject>
- (void)requestConnectedHosts;
- (void)appDidEnterBackgroundWithPID:(int)arg1;
- (void)appWillEnterForegroundWithPID:(int)arg1;
- (void)appDidEnterBackground;
- (void)appWillEnterForeground;
- (void)microControllerWithUDID:(unsigned long long)arg1 setDigitizerX:(float)arg2 digitizerY:(float)arg3 withTimeStamp:(unsigned long long)arg4 touchDown:(BOOL)arg5;
- (void)controllerWithUDID:(unsigned long long)arg1 setArrayValue:(CDStruct_212a8bf9)arg2 forElement:(int)arg3 forward:(BOOL)arg4;
- (void)controllerWithUDID:(unsigned long long)arg1 setValue:(float)arg2 forElement:(int)arg3 forward:(BOOL)arg4;
- (void)removeController:(GCController *)arg1 forward:(BOOL)arg2;
- (void)addController:(GCController *)arg1 forward:(BOOL)arg2;
- (void)setUserActivityUserInfo:(NSDictionary *)arg1;
- (void)startBonjourService;
- (void)startForwardingToApplicationNamed:(NSString *)arg1 pid:(NSNumber *)arg2 bundlePath:(NSString *)arg3;
- (void)ping;
@end

