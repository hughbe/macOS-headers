//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmailFoundation/EFObservable.h>

#import <EmailFoundation/EFObserver-Protocol.h>

@class NSError, NSMutableArray, NSString;

@interface _EFManualObservable : EFObservable <EFObserver>
{
    NSMutableArray *_observers;
    NSError *_failureError;
    struct os_unfair_lock_s _lock;
    BOOL _didCompleteOrFail;
}

- (void).cxx_destruct;
- (void)_removeObserver:(id)arg1;
- (BOOL)_addObserver:(id)arg1 failureError:(id *)arg2;
- (void)observerDidFailWithError:(id)arg1;
- (void)observerDidComplete;
- (void)observerDidReceiveResult:(id)arg1;
- (id)subscribe:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

