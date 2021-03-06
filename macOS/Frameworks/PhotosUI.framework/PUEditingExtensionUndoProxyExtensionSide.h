//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PUEditingExtensionUndoButtonHost-Protocol.h>

@class NSString, NSXPCConnection;
@protocol PUEditingExtensionUndoTarget;

@interface PUEditingExtensionUndoProxyExtensionSide : NSObject <PUEditingExtensionUndoButtonHost>
{
    id <PUEditingExtensionUndoTarget> _target;
    NSXPCConnection *_connection;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) __weak id <PUEditingExtensionUndoTarget> target; // @synthesize target=_target;
- (void)setUndoEnabled:(BOOL)arg1 redoEnabled:(BOOL)arg2;
- (void)setShowUndoRedo:(BOOL)arg1;
- (id)remoteObject;
- (void)performRedo;
- (void)performUndo;
- (id)initWithEndpoint:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

