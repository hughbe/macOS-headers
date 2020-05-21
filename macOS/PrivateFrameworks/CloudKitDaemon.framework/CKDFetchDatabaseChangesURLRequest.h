//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

#import <CloudKitDaemon/CKDURLRequestPipelining-Protocol.h>

@class CKRecordZoneID, NSArray, NSData, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CKDFetchDatabaseChangesURLRequest : CKDURLRequest <CKDURLRequestPipelining>
{
    NSMutableArray *_changedZoneIDs;
    NSMutableArray *_deletedZoneIDs;
    NSMutableArray *_purgedZoneIDs;
    unsigned long long _resultsLimit;
    NSData *_serverChangeTokenData;
    long long _status;
    CDUnknownBlockType _zoneChangedBlock;
    CDUnknownBlockType _zoneDeletedBlock;
    CDUnknownBlockType _zonePurgedBlock;
    CKRecordZoneID *_recordZoneID;
    NSData *_previousServerChangeTokenData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *previousServerChangeTokenData; // @synthesize previousServerChangeTokenData=_previousServerChangeTokenData;
@property(retain, nonatomic) CKRecordZoneID *recordZoneID; // @synthesize recordZoneID=_recordZoneID;
@property(copy, nonatomic) CDUnknownBlockType zonePurgedBlock; // @synthesize zonePurgedBlock=_zonePurgedBlock;
@property(copy, nonatomic) CDUnknownBlockType zoneDeletedBlock; // @synthesize zoneDeletedBlock=_zoneDeletedBlock;
@property(copy, nonatomic) CDUnknownBlockType zoneChangedBlock; // @synthesize zoneChangedBlock=_zoneChangedBlock;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSData *serverChangeTokenData; // @synthesize serverChangeTokenData=_serverChangeTokenData;
@property(nonatomic) unsigned long long resultsLimit; // @synthesize resultsLimit=_resultsLimit;
@property(readonly, nonatomic) NSArray *purgedZoneIDs; // @synthesize purgedZoneIDs=_purgedZoneIDs;
@property(readonly, nonatomic) NSArray *deletedZoneIDs; // @synthesize deletedZoneIDs=_deletedZoneIDs;
@property(readonly, nonatomic) NSArray *changedZoneIDs; // @synthesize changedZoneIDs=_changedZoneIDs;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)generateRequestOperations;
- (id)requestOperationClasses;
- (int)operationType;
- (BOOL)allowsAnonymousAccount;
- (id)initWithPreviousServerChangeTokenData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

