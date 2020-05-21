//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKit/EKObject.h>

#import <EventKit/EKIdentityProtocol-Protocol.h>
#import <EventKit/EKProtocolMutableSharee-Protocol.h>
#import <EventKit/NSCopying-Protocol.h>

@class NSDictionary, NSManagedObjectID, NSPredicate, NSString, NSURL;

@interface EKSharee : EKObject <NSCopying, EKIdentityProtocol, EKProtocolMutableSharee>
{
    NSManagedObjectID *managedObjectID;
}

+ (id)accessLevelStringFromEnum:(unsigned long long)arg1;
+ (unsigned long long)accessLevelEnumFromString:(id)arg1;
+ (id)statusStringFromEnum:(unsigned long long)arg1;
+ (unsigned long long)statusEnumFromString:(id)arg1;
+ (id)knownSingleValueKeys;
+ (id)knownIdentityKeys;
+ (Class)frozenClass;
+ (id)uniqueIdentifierForObject:(id)arg1;
+ (unsigned long long)hashForObject:(id)arg1;
+ (id)shareeWithName:(id)arg1 url:(id)arg2;
+ (id)shareeWithName:(id)arg1 phoneNumber:(id)arg2;
+ (id)shareeWithName:(id)arg1 emailAddress:(id)arg2 phoneNumber:(id)arg3;
+ (id)shareeWithName:(id)arg1 emailAddress:(id)arg2;
- (void).cxx_destruct;
- (void)setManagedObjectID:(id)arg1;
@property(readonly, nonatomic) NSManagedObjectID *managedObjectID;
- (id)ABPersonInAddressBook:(id)arg1;
- (id)existingContact;
- (id)newContact;
@property(nonatomic) unsigned long long shareeAccessLevel;
@property(nonatomic) unsigned long long shareeStatus;
@property(readonly, nonatomic) NSString *phoneNumber;
@property(readonly, nonatomic) NSString *emailAddress;
@property(readonly, nonatomic) BOOL isCurrentUserForScheduling;
@property(readonly, nonatomic) BOOL isCurrentUserForSharing;
- (void)setURL:(id)arg1;
@property(readonly, copy, nonatomic) NSURL *URL;
- (void)setAccessLevel:(id)arg1;
- (id)accessLevel;
- (void)setStatus:(id)arg1;
- (id)status;
@property(copy, nonatomic) NSString *name;
- (id)backingSharee;
- (id)initWithObject:(id)arg1 createPartialBackingObject:(BOOL)arg2 keepBackingObject:(BOOL)arg3 preFrozenRelationshipObjects:(id)arg4 additionalFrozenProperties:(id)arg5;
- (id)initWithName:(id)arg1 url:(id)arg2;
- (id)lastName;
- (id)firstName;
@property(readonly, nonatomic) NSPredicate *contactPredicate; // @dynamic contactPredicate;

// Remaining properties
@property(readonly, nonatomic) BOOL canBeConvertedToFullObject;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isPartialObject;
@property(readonly, nonatomic) NSDictionary *preFrozenRelationshipObjects;
@property(readonly) Class superclass;

@end

