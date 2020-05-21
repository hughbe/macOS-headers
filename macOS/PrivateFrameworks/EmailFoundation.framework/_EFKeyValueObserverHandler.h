//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailFoundation/EFCancelable-Protocol.h>

@class NSString;

@interface _EFKeyValueObserverHandler : NSObject <EFCancelable>
{
    id _object;
    NSString *_keyPath;
    CDUnknownBlockType _block;
    BOOL _observing;
}

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)cancel;
- (void)startObservingWithOptions:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithObject:(id)arg1 keyPath:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

