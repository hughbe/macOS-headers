//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FinderSync/NSXPCListenerDelegate-Protocol.h>

@class FIFinderSync, NSString, NSURL, NSXPCInterface;

__attribute__((visibility("hidden")))
@interface FIExtensionContextXPCListenerDelegate : NSObject <NSXPCListenerDelegate>
{
    FIFinderSync *_context;
    NSXPCInterface *_interface;
    id _exportedObject;
    NSURL *_itemURL;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSURL *itemURL; // @synthesize itemURL=_itemURL;
@property(retain, nonatomic) id exportedObject; // @synthesize exportedObject=_exportedObject;
@property(retain, nonatomic) NSXPCInterface *interface; // @synthesize interface=_interface;
@property(retain, nonatomic) FIFinderSync *context; // @synthesize context=_context;
- (void)dealloc;
- (_Bool)connection:(id)arg1 allowedToAccessURL:(id)arg2;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

