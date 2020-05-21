//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNObserver-Protocol.h>

@class NSString;
@protocol CNObserver, _CNObservableTakeUntilSignalObserverDelegate;

@interface _CNObservableTakeUntilSignalObserver : NSObject <CNObserver>
{
    id <CNObserver> _observer;
    id <_CNObservableTakeUntilSignalObserverDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly) __weak id <_CNObservableTakeUntilSignalObserverDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) id <CNObserver> observer; // @synthesize observer=_observer;
- (void)observerDidFailWithError:(id)arg1;
- (void)observerDidComplete;
- (void)observerDidReceiveResult:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithObserver:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

