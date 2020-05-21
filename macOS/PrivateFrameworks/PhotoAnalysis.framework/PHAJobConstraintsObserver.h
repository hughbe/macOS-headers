//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PHAJobConstraints;
@protocol PHAJobConstraintsObserverDelegate;

@interface PHAJobConstraintsObserver : NSObject
{
    BOOL _shutdownRequested;
    id <PHAJobConstraintsObserverDelegate> _delegate;
    PHAJobConstraints *_currentConstraints;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PHAJobConstraints *currentConstraints; // @synthesize currentConstraints=_currentConstraints;
@property BOOL shutdownRequested; // @synthesize shutdownRequested=_shutdownRequested;
@property(nonatomic) __weak id <PHAJobConstraintsObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (id)acceptConstraints:(id)arg1 mask:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)init;
- (id)initWithInitialConstraints:(id)arg1 delegate:(id)arg2;
- (void)setShutdownRequested;

@end

