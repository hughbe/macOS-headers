//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMFPairingIdentity, NSMutableArray;

@interface __HMDRegisteredIdentity : HMFObject
{
    HMFPairingIdentity *_identity;
    NSMutableArray *_registeredObjects;
}

- (void).cxx_destruct;
@property(readonly) NSMutableArray *registeredObjects; // @synthesize registeredObjects=_registeredObjects;
@property(readonly, copy) HMFPairingIdentity *identity; // @synthesize identity=_identity;
- (id)description;
- (id)debugDescription;
- (id)initWithIdentity:(id)arg1;
- (id)init;

@end

