//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, _MXExtensionProvider;
@protocol OS_dispatch_queue;

@interface _MXExtensionDispatchCenter : NSObject
{
    NSObject<OS_dispatch_queue> *_lock;
    NSHashTable *_handlers;
    _MXExtensionProvider *_extensionProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak _MXExtensionProvider *extensionProvider; // @synthesize extensionProvider=_extensionProvider;
- (void)removeExtensionUpdateHandler:(id)arg1;
- (id)addExtensionsUpdateHandler:(CDUnknownBlockType)arg1;
- (void)dispatchExtensions:(id)arg1 error:(id)arg2;
- (id)initWithExtensionProvider:(id)arg1;

@end

