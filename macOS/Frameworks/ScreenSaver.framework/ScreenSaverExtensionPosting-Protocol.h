//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenSaver/ScreenSaverExtensionHosting-Protocol.h>

@class NSString, NSXPCListenerEndpoint;

@protocol ScreenSaverExtensionPosting <ScreenSaverExtensionHosting>
- (void)extension:(NSString *)arg1 viewBridgeEndpoint:(NSXPCListenerEndpoint *)arg2;
@end

