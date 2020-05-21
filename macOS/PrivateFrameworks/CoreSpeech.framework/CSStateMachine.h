//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol CSStateMachineDelegate;

@interface CSStateMachine : NSObject
{
    id <CSStateMachineDelegate> _delegate;
    long long _currentState;
    long long _initialState;
    NSMutableDictionary *_transitions;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *transitions; // @synthesize transitions=_transitions;
@property(nonatomic) long long initialState; // @synthesize initialState=_initialState;
@property(readonly, nonatomic) long long currentState; // @synthesize currentState=_currentState;
@property(nonatomic) __weak id <CSStateMachineDelegate> delegate; // @synthesize delegate=_delegate;
- (void)performTransitionForEvent:(long long)arg1;
- (void)addTransitionFrom:(long long)arg1 to:(long long)arg2 for:(long long)arg3;
- (void)reset;
- (id)initWithInitialState:(long long)arg1;

@end

