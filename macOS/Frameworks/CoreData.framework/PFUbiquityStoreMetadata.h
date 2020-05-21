//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSDictionary, NSSet, NSString, NSURL, PFUbiquityLocation;

__attribute__((visibility("hidden")))
@interface PFUbiquityStoreMetadata : NSManagedObject
{
}

+ (BOOL)isBaselineRootURL:(id)arg1;
+ (id)baselineRootDirectoryForUbiquityName:(id)arg1 andUbiquityLogURL:(id)arg2;
+ (id)baselineMetaFileURLForUbiquityName:(id)arg1 andUbiquityLogURL:(id)arg2;
+ (id)baselineGCModelURLForUbiquityName:(id)arg1 andUbiquityLogURL:(id)arg2;
+ (id)baselineModelURLForUbiquityName:(id)arg1 andUbiquityLogURL:(id)arg2;
+ (id)baselineStoreURLForUbiquityName:(id)arg1 andUbiquityLogURL:(id)arg2;
+ (id)metadataForStoreWithName:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)storeMetadatasWithName:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)allStoreMetadataInManagedObjectContext:(id)arg1;
@property(retain, nonatomic) NSDictionary *storeOptions;
@property(readonly) PFUbiquityLocation *ubiquityRootLocation;
@property(readonly, nonatomic) NSURL *ubiquityRootURL;
- (void)updatePeerStatesToMatchKnowledgeVector:(id)arg1;
- (id)peerStateForPeerID:(id)arg1;
- (void)loadFromBaselineMetadata:(id)arg1 withLocalPeerID:(id)arg2;
- (void)updateWithStore:(id)arg1 andRootLocation:(id)arg2;
- (id)initWithUbiquityName:(id)arg1 andUbiquityRootLocation:(id)arg2 insertIntoManagedObjectContext:(id)arg3;

// Remaining properties
@property(retain, nonatomic) NSString *modelVersionHashString; // @dynamic modelVersionHashString;
@property(retain, nonatomic) NSSet *peerStates; // @dynamic peerStates;
@property(retain, nonatomic) NSSet *primaryKeyRanges; // @dynamic primaryKeyRanges;
@property(retain, nonatomic) NSString *storeIdentifier; // @dynamic storeIdentifier;
@property(retain, nonatomic) NSData *storeOptionsBinaryPlistData; // @dynamic storeOptionsBinaryPlistData;
@property(retain, nonatomic) NSString *storeType; // @dynamic storeType;
@property(retain, nonatomic) NSString *storeURLString; // @dynamic storeURLString;
@property(retain, nonatomic) NSSet *transactionEntries; // @dynamic transactionEntries;
@property(retain, nonatomic) NSString *ubiquityName; // @dynamic ubiquityName;
@property(retain, nonatomic) NSString *ubiquityRelativePath; // @dynamic ubiquityRelativePath;
@property(retain, nonatomic) NSString *ubiquityRootURLString; // @dynamic ubiquityRootURLString;

@end

