//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSString, PFUbiquityPeer, PFUbiquityStoreMetadata;

__attribute__((visibility("hidden")))
@interface PFUbiquityPeerRange : NSManagedObject
{
}

- (void)loadFromBaselineDictionary:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSNumber *end; // @dynamic end;
@property(retain, nonatomic) PFUbiquityPeer *peer; // @dynamic peer;
@property(retain, nonatomic) NSNumber *peerEnd; // @dynamic peerEnd;
@property(retain, nonatomic) NSString *peerEntityName; // @dynamic peerEntityName;
@property(retain, nonatomic) NSNumber *peerStart; // @dynamic peerStart;
@property(retain, nonatomic) NSNumber *start; // @dynamic start;
@property(retain, nonatomic) PFUbiquityStoreMetadata *storeMetadata; // @dynamic storeMetadata;

@end

