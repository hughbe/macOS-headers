//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FAXPCDelegate, NSXPCInterface, NSXPCListener;

@interface FAXPCListenerWrapper : NSObject
{
    NSXPCListener *_listener;
    FAXPCDelegate *_delegate;
}

+ (id)wrapperForMachService:(id)arg1 exportedProtocol:(id)arg2 exportedObject:(id)arg3;
- (void).cxx_destruct;
@property(retain) FAXPCDelegate *delegate; // @synthesize delegate=_delegate;
@property(retain) NSXPCListener *listener; // @synthesize listener=_listener;
- (void)invalidate;
- (void)suspend;
- (void)resume;
@property(readonly, nonatomic) NSXPCInterface *exportedInterface;

@end

