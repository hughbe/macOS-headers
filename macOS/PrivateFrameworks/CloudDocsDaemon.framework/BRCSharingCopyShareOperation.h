//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/_BRCFrameworkOperation.h>

#import <CloudDocsDaemon/BRCOperationSubclass-Protocol.h>

@class BRCClientZone, BRCItemID, CKRecordID, NSString;

__attribute__((visibility("hidden")))
@interface BRCSharingCopyShareOperation : _BRCFrameworkOperation <BRCOperationSubclass>
{
    CKRecordID *_shareID;
    CKRecordID *_recordIDNeedingFetch;
    BRCItemID *_rootItemIDToLookup;
    BRCClientZone *_clientZone;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BRCClientZone *clientZone; // @synthesize clientZone=_clientZone;
@property(retain, nonatomic) BRCItemID *rootItemIDToLookup; // @synthesize rootItemIDToLookup=_rootItemIDToLookup;
@property(retain, nonatomic) CKRecordID *recordIDNeedingFetch; // @synthesize recordIDNeedingFetch=_recordIDNeedingFetch;
@property(retain, nonatomic) CKRecordID *shareID; // @synthesize shareID=_shareID;
- (void)main;
- (void)fetchRootURLIfNecessaryAndFinishWithShare:(id)arg1;
- (id)createActivity;
- (id)initWithItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

