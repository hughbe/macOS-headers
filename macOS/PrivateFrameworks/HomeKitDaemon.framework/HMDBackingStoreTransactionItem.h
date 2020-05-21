//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDBackingStoreChangeObject-Protocol.h>

@class HMDBackingStoreModelObject, HMFMessage, NSSet, NSString;

@interface HMDBackingStoreTransactionItem : HMFObject <HMDBackingStoreChangeObject>
{
    HMDBackingStoreModelObject *_change;
    NSSet *_dependentUUIDs;
    HMFMessage *_message;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HMFMessage *message; // @synthesize message=_message;
@property(readonly, nonatomic) NSSet *dependentUUIDs; // @synthesize dependentUUIDs=_dependentUUIDs;
@property(readonly, nonatomic) HMDBackingStoreModelObject *change; // @synthesize change=_change;
- (id)initWithChange:(id)arg1 message:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

