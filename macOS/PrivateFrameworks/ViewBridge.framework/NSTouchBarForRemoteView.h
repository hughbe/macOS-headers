//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTouchBar.h>

@class NSXPCListenerEndpoint;

__attribute__((visibility("hidden")))
@interface NSTouchBarForRemoteView : NSTouchBar
{
    NSXPCListenerEndpoint *_serviceListenerEndpoint;
}

@property(readonly) NSXPCListenerEndpoint *serviceListenerEndpoint; // @synthesize serviceListenerEndpoint=_serviceListenerEndpoint;
- (id)initWithServiceBarIdentifier:(id)arg1 remoteView:(id)arg2;
- (void)dealloc;

@end

