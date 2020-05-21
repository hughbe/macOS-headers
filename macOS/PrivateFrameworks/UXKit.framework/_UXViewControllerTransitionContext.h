//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UXKit/UXViewControllerContextTransitioning-Protocol.h>

@class NSArray, NSString, UXView, _UXViewControllerTransitionCoordinator;
@protocol UXViewControllerAnimatedTransitioning, UXViewControllerInteractiveTransitioning;

@interface _UXViewControllerTransitionContext : NSObject <UXViewControllerContextTransitioning>
{
    double _previousPercentComplete;
    NSArray *_disabledViews;
    struct {
        unsigned int interactorImplementsCompletionSpeed:1;
        unsigned int interactorImplementsCompletionCurve:1;
        unsigned int transitionWasCancelled:1;
        unsigned int transitionIsCompleting:1;
    } _transitionContextFlags;
    BOOL _initiallyInteractive;
    BOOL _currentlyInteractive;
    BOOL _animated;
    BOOL _presentation;
    double _completionVelocity;
    long long _completionCurve;
    _UXViewControllerTransitionCoordinator *__auxContext;
    double _duration;
    long long _state;
    CDUnknownBlockType _interactiveUpdateHandler;
    long long _presentationStyle;
    double _percentOffset;
    id <UXViewControllerAnimatedTransitioning> _animator;
    id <UXViewControllerInteractiveTransitioning> _interactor;
    UXView *_containerView;
    CDUnknownBlockType _willCompleteHandler;
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) CDUnknownBlockType willCompleteHandler; // @synthesize willCompleteHandler=_willCompleteHandler;
@property(nonatomic) __weak UXView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <UXViewControllerInteractiveTransitioning> interactor; // @synthesize interactor=_interactor;
@property(nonatomic) __weak id <UXViewControllerAnimatedTransitioning> animator; // @synthesize animator=_animator;
@property(nonatomic) double percentOffset; // @synthesize percentOffset=_percentOffset;
@property(nonatomic, getter=isPresentation) BOOL presentation; // @synthesize presentation=_presentation;
@property(nonatomic) long long presentationStyle; // @synthesize presentationStyle=_presentationStyle;
@property(copy, nonatomic) CDUnknownBlockType interactiveUpdateHandler; // @synthesize interactiveUpdateHandler=_interactiveUpdateHandler;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic, setter=_setAuxContext:) _UXViewControllerTransitionCoordinator *_auxContext; // @synthesize _auxContext=__auxContext;
@property(nonatomic) long long completionCurve; // @synthesize completionCurve=_completionCurve;
@property(nonatomic) double completionVelocity; // @synthesize completionVelocity=_completionVelocity;
@property(nonatomic, getter=isAnimated) BOOL animated; // @synthesize animated=_animated;
@property(nonatomic, getter=isCurrentlyInteractive) BOOL currentlyInteractive; // @synthesize currentlyInteractive=_currentlyInteractive;
@property(nonatomic) BOOL initiallyInteractive; // @synthesize initiallyInteractive=_initiallyInteractive;
- (void)_enableInteractionForDisabledViews;
- (void)_disableInteractionForViews:(id)arg1;
- (void)__runAlongsideAnimations;
- (void)_interactivityDidChange:(BOOL)arg1;
- (void)_runAlongsideCompletions;
- (void)_setTransitionIsCompleting:(BOOL)arg1;
- (BOOL)_transitionIsCompleting;
@property(nonatomic) BOOL transitionIsInFlight;
- (BOOL)transitionWasCancelled;
- (struct CGRect)finalFrameForViewController:(id)arg1;
- (struct CGRect)initialFrameForViewController:(id)arg1;
- (id)viewControllerForKey:(id)arg1;
- (void)completeTransition:(BOOL)arg1;
- (void)cancelInteractiveTransition;
- (void)finishInteractiveTransition;
- (void)updateInteractiveTransition:(double)arg1;
- (void)_updateInteractiveTransitionWithoutTrackingPercentComplete:(double)arg1;
- (void)_setPreviousPercentComplete:(double)arg1;
- (double)_previousPercentComplete;
- (id)_transitionCoordinator;
- (BOOL)isInteractive;
- (id)init;

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType arbitraryTransitionCompletionHandler;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

