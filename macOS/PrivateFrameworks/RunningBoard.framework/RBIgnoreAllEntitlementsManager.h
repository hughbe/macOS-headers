//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoard/RBEntitlementManaging-Protocol.h>
#import <RunningBoard/RBEntitlementPossessing-Protocol.h>

@class NSString;

@interface RBIgnoreAllEntitlementsManager : NSObject <RBEntitlementManaging, RBEntitlementPossessing>
{
}

- (BOOL)hasEntitlementDomain:(unsigned long long)arg1;
- (BOOL)hasEntitlement:(id)arg1;
- (id)entitlementsForProcess:(id)arg1;
- (id)allEntitlements;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

