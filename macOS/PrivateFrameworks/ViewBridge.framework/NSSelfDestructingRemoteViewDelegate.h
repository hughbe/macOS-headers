//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ViewBridge/NSRemoteViewDelegate-Protocol.h>

__attribute__((visibility("hidden")))
@interface NSSelfDestructingRemoteViewDelegate : NSObject <NSRemoteViewDelegate>
{
}

- (void)viewDidInvalidate:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly) BOOL shouldRetainExportedObject;

@end

