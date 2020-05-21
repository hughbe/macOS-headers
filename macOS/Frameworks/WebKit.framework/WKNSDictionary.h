//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSDictionary.h>

#import <WebKit/WKObject-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WKNSDictionary : NSDictionary <WKObject>
{
    struct ObjectStorage<API::Dictionary> _dictionary;
}

@property(readonly) struct Object *_apiObject;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;
- (unsigned long long)count;
- (id)initWithObjects:(const id *)arg1 forKeys:(const id *)arg2 count:(unsigned long long)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

