//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSSharingServiceDelegate-Protocol.h>

@class NSString, _NSExtensionQuickActionInvocationRequestor, _NSQuickAction;

__attribute__((visibility("hidden")))
@interface _NSExtensionQuickActionSharingServiceDelegate : NSObject <NSSharingServiceDelegate>
{
    _NSQuickAction *_quickAction;
    _NSExtensionQuickActionInvocationRequestor *_requestor;
}

- (void).cxx_destruct;
- (id)anchoringViewForSharingService:(id)arg1 showRelativeToRect:(struct CGRect *)arg2 preferredEdge:(unsigned long long *)arg3;
- (id)sharingService:(id)arg1 sourceWindowForShareItems:(id)arg2 sharingContentScope:(long long *)arg3;
- (void)sharingService:(id)arg1 didShareItems:(id)arg2;
- (void)sharingService:(id)arg1 didFailToShareItems:(id)arg2 error:(id)arg3;
- (void)sharingService:(id)arg1 willShareItems:(id)arg2;
- (id)initWithQuickAction:(id)arg1 requestor:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

