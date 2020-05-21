//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Mail/NSCopying-Protocol.h>

@class MFSyncedSignatureContentsFile, NSData, NSString, WebArchive;

@interface MFSignature : NSObject <NSCopying>
{
    NSString *_name;
    NSData *_webArchiveData;
    BOOL _isRich;
    BOOL _isSavedAsRich;
    BOOL _isDirty;
    NSString *_uniqueId;
    MFSyncedSignatureContentsFile *_syncedFile;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL isDirty; // @synthesize isDirty=_isDirty;
@property(readonly, nonatomic) BOOL isSavedAsRich; // @synthesize isSavedAsRich=_isSavedAsRich;
@property(readonly, nonatomic) MFSyncedSignatureContentsFile *syncedFile; // @synthesize syncedFile=_syncedFile;
@property(readonly, copy, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
@property(nonatomic) BOOL isRich;
@property(copy, nonatomic) WebArchive *webArchive;
- (void)_makeWebArchiveDataIfNeeded;
@property(readonly, copy, nonatomic) NSData *webArchiveData;
- (void)reloadFromDisk;
@property(copy, nonatomic) NSString *name;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)removeContentFromDisk;
- (BOOL)saveContentToDisk;
- (id)initWithDictionary:(id)arg1;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 uniqueId:(id)arg2;

@end

