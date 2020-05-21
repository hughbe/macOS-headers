//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsFoundation/NSObject-Protocol.h>

@class NSArray, _CNBufferingObservable;
@protocol CNObserver;

@protocol _CNBufferingStrategy <NSObject>
- (void)bufferDidSendResults:(_CNBufferingObservable *)arg1;
- (void)buffer:(_CNBufferingObservable *)arg1 didReceiveResults:(NSArray *)arg2 forObserver:(id <CNObserver>)arg3;
@end

