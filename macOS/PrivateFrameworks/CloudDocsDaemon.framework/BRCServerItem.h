//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/BRCItem-Protocol.h>

@class BRCAccountSession, BRCClientZone, BRCItemID, BRCPQLConnection, BRCServerMetrics, BRCServerStatInfo, BRCServerZone, BRCSharedServerItem, BRCUserRowID, BRCVersion, BRFieldCKInfo, NSString;

@interface BRCServerItem : NSObject <BRCItem>
{
    BRCAccountSession *_session;
    BRCServerZone *_zone;
    unsigned long long _sharingOptions;
    BRCPQLConnection *_db;
    BRFieldCKInfo *_sideCarCKInfo;
    BOOL _needsInsert;
    unsigned int _pcsChainState;
    NSString *_symlinkTarget;
    BRCUserRowID *_ownerKey;
    BRCItemID *_itemID;
    NSString *_originalName;
    long long _rank;
    BRCServerStatInfo *_st;
    BRCVersion *_latestVersion;
    BRCServerMetrics *_serverMetrics;
    BRCServerZone *_serverZone;
    BRCClientZone *_clientZone;
    long long _directoryMtime;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long directoryMtime; // @synthesize directoryMtime=_directoryMtime;
@property(readonly, nonatomic) NSString *symlinkTarget; // @synthesize symlinkTarget=_symlinkTarget;
@property(nonatomic) unsigned long long sharingOptions; // @synthesize sharingOptions=_sharingOptions;
@property(readonly, nonatomic) BRCAccountSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) BRCClientZone *clientZone; // @synthesize clientZone=_clientZone;
@property(readonly, nonatomic) BRCServerZone *serverZone; // @synthesize serverZone=_serverZone;
@property(readonly, nonatomic) BRCServerMetrics *serverMetrics; // @synthesize serverMetrics=_serverMetrics;
@property(readonly, nonatomic) BRCVersion *latestVersion; // @synthesize latestVersion=_latestVersion;
@property(readonly, nonatomic) BRCServerStatInfo *st; // @synthesize st=_st;
@property(readonly, nonatomic) long long rank; // @synthesize rank=_rank;
@property(readonly, nonatomic) NSString *originalName; // @synthesize originalName=_originalName;
@property(readonly, nonatomic) BRCItemID *itemID; // @synthesize itemID=_itemID;
@property(readonly, nonatomic) BRCUserRowID *ownerKey; // @synthesize ownerKey=_ownerKey;
- (id)aliasTargetItemID;
- (id)aliasTargetAppLibrary;
- (id)aliasTargetClientZone;
- (id)parentItemIDOnServer;
- (id)parentItemIDOnFS;
- (id)parentZoneOnFS;
- (id)parentLocalItemOnFS;
- (id)parentItemOnFS;
- (unsigned int)pcsChainState;
- (id)newLocalItemWithServerZone:(id)arg1 dbRowID:(unsigned long long)arg2;
- (id)appLibraryForRootItem;
- (id)description;
- (id)descriptionWithContext:(id)arg1;
- (unsigned long long)diffAgainstServerItem:(id)arg1;
- (BOOL)validateLoggingToFile:(struct __sFILE *)arg1;
- (id)initFromPQLResultSet:(id)arg1 serverZone:(id)arg2 error:(id *)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithServerItem:(id)arg1;
@property(readonly, nonatomic) BRCSharedServerItem *asSharedItem;
@property(readonly, nonatomic) BOOL isSharedToMeChildItem;
@property(readonly, nonatomic) BOOL isSharedToMeTopLevelItem;
@property(readonly, nonatomic) BOOL isSharedItem;
@property(readonly, nonatomic) BOOL isPackage;
@property(readonly, nonatomic) BOOL isFinderBookmark;
@property(readonly, nonatomic) BOOL isSymLink;
@property(readonly, nonatomic) BOOL isZoneRoot;
@property(readonly, nonatomic) BOOL isFSRoot;
@property(readonly, nonatomic) BOOL isDocument;
@property(readonly, nonatomic) BOOL isDirectory;
@property(readonly, nonatomic) BOOL isBRAlias;
@property(readonly, nonatomic) BOOL isDead;
@property(readonly, nonatomic) BOOL isLive;
- (id)sideCarInfo;

@end

