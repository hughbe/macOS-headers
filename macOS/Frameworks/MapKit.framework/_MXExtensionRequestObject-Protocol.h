//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet, Protocol, _MXExtensionObject;

@protocol _MXExtensionRequestObject <NSObject>
+ (BOOL)supportedByExtensionWithCapabilities:(NSSet *)arg1;
+ (void)dispatchRequest:(_MXExtensionObject *)arg1 toVendor:(id)arg2 completion:(void (^)(_MXExtensionObject *, NSError *))arg3;
+ (Protocol *)serviceProtocol;
@end

