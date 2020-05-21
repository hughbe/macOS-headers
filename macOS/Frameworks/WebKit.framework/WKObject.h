//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSProxy.h>

#import <WebKit/WKObject-Protocol.h>

@class NSObject, NSString;

__attribute__((visibility("hidden")))
@interface WKObject : NSProxy <WKObject>
{
    BOOL _hasInitializedTarget;
    NSObject *_target;
}

@property(readonly) struct Object *_apiObject;
- (BOOL)isNSValue__;
- (BOOL)isNSTimeZone__;
- (BOOL)isNSString__;
- (BOOL)isNSSet__;
- (BOOL)isNSOrderedSet__;
- (BOOL)isNSNumber__;
- (BOOL)isNSDictionary__;
- (BOOL)isNSDate__;
- (BOOL)isNSData__;
- (BOOL)isNSCFConstantString__;
- (BOOL)isNSArray__;
- (BOOL)isNSObject__;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)_web_createTarget;
- (Class)classForKeyedArchiver;
- (Class)classForCoder;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (BOOL)conformsToProtocol:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (BOOL)isMemberOfClass:(Class)arg1;
- (BOOL)isKindOfClass:(Class)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly) Class superclass;

@end

