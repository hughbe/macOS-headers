//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <AppKit/NSRemoteViewDelegate-Protocol.h>

@class NSDocument, NSError, NSOperationQueue;

__attribute__((visibility("hidden")))
@interface NSDocumentTitlebarPopoverViewController : NSViewController <NSRemoteViewDelegate>
{
    NSDocument *document;
    NSError *nonModalError;
    NSOperationQueue *queue;
    BOOL isPerformingOperation;
    CDUnknownBlockType operationWaiter;
    CDUnknownBlockType advanceToRunPhaseWaiter;
    CDUnknownBlockType cleanupKVOBlock;
    CDUnknownBlockType invalidationHandler;
}

+ (void)warmup;
+ (Class)_sharedXPCListenerClass;
+ (Class)_remoteViewClass;
@property(copy) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler;
@property(copy) CDUnknownBlockType operationWaiter; // @synthesize operationWaiter;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_enqueueOperationWithBlock:(CDUnknownBlockType)arg1;
- (void)_whenDocumentOperationCompletesPerformBlock:(CDUnknownBlockType)arg1;
- (void)_didFinishOperation;
- (void)_willStartOperation;
- (void)invalidate;
- (void)loadView;
- (void)viewDidInvalidate:(id)arg1;
- (void)viewDidAdvanceToRunPhase:(id)arg1;
- (void)prepareViewThenContinue:(CDUnknownBlockType)arg1;
- (BOOL)_setupBridge;
- (void)dealloc;
- (id)initWithDocument:(id)arg1;

// Remaining properties
@property(readonly) BOOL shouldRetainExportedObject;

@end

