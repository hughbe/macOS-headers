//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol OS_dispatch_queue;

@interface CURangingSession : NSObject
{
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    BOOL _peersChanged;
    struct LogCategory *_ucat;
    unsigned int _flags;
    unsigned int _statusFlags;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _errorHandler;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
    CDUnknownBlockType _measurementHandler;
    CDUnknownBlockType _measurementHandlerEx;
    NSArray *_peers;
    CDUnknownBlockType _statusChangedHandler;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned int statusFlags; // @synthesize statusFlags=_statusFlags;
@property(copy, nonatomic) CDUnknownBlockType statusChangedHandler; // @synthesize statusChangedHandler=_statusChangedHandler;
@property(copy, nonatomic) NSArray *peers; // @synthesize peers=_peers;
@property(copy, nonatomic) CDUnknownBlockType measurementHandlerEx; // @synthesize measurementHandlerEx=_measurementHandlerEx;
@property(copy, nonatomic) CDUnknownBlockType measurementHandler; // @synthesize measurementHandler=_measurementHandler;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)_updatePeers;
- (void)_updateResponder;
- (void)_updateInitiator;
- (void)_update;
- (void)_invalidated;
- (void)_invalidate;
- (void)invalidate;
- (void)activate;
- (void)addSample:(id)arg1;
- (void)dealloc;
- (id)init;

@end

