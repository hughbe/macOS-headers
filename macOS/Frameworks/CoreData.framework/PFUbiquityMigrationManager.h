//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectModel, NSString, PFUbiquityLocation;

__attribute__((visibility("hidden")))
@interface PFUbiquityMigrationManager : NSObject
{
    NSManagedObjectModel *_destinationModel;
    NSManagedObjectModel *_sourceModel;
    PFUbiquityLocation *_rootLocation;
    NSString *_localPeerID;
}

@property(readonly) NSManagedObjectModel *destinationModel; // @synthesize destinationModel=_destinationModel;
@property(readonly) NSManagedObjectModel *sourceModel; // @synthesize sourceModel=_sourceModel;
@property(readonly) PFUbiquityLocation *rootLocation; // @synthesize rootLocation=_rootLocation;
- (BOOL)migrateTransactionLogs:(BOOL)arg1 andBaselineIfNecessaryForStoreName:(id)arg2 peerID:(id)arg3 error:(id *)arg4;
- (void)dealloc;
- (id)initWithDestinationModel:(id)arg1 sourceModel:(id)arg2 ubiquityRootLocation:(id)arg3 localPeerID:(id)arg4;
- (id)initWithDestinationModel:(id)arg1 storeName:(id)arg2 previousModelVersionHash:(id)arg3 ubiquityRootLocation:(id)arg4 localPeerID:(id)arg5;

@end

