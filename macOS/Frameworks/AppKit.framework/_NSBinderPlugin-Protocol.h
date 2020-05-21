//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSObject-Protocol.h>

@class NSArray, NSString, _NSBindingInfo;

@protocol _NSBinderPlugin <NSObject>
+ (NSArray *)_deprecatedBindings;
+ (NSArray *)objectMechanismsRequiredForObject:(id)arg1;
+ (BOOL)isUsableWithObject:(id)arg1;
- (BOOL)shouldUseInvalidationForObject:(id)arg1;
- (BOOL)acceptsMarker:(id)arg1 binding:(NSString *)arg2 overrideWithPlaceholderIfDefined:(char *)arg3;
- (Class)defaultPlaceholderLookupClassForBinding:(NSString *)arg1 object:(id)arg2;
- (void)connectionWasBroken:(id)arg1;
- (void)connectionWasEstablished:(id)arg1;
- (BOOL)observeKeyPathForBindingInfo:(_NSBindingInfo *)arg1 registerOrUnregister:(BOOL)arg2 object:(id)arg3;
- (BOOL)handleObservingRefresh:(id)arg1;
- (id)initWithBinder:(id)arg1 object:(id)arg2;
@end

