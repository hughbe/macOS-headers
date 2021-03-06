//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Mail/MFLibraryUpgradeStep.h>

#import <Mail/EFLoggable-Protocol.h>
#import <Mail/MFUpdateAttachmentsWithAttachmentIDUpgradeStepDataSource-Protocol.h>

@class NSDirectoryEnumerator, NSRegularExpression, NSString;
@protocol MFUpdateAttachmentsWithAttachmentIDUpgradeStepDataSource;

@interface MFUpdateAttachmentsWithAttachmentIDUpgradeStep : MFLibraryUpgradeStep <MFUpdateAttachmentsWithAttachmentIDUpgradeStepDataSource, EFLoggable>
{
    NSDirectoryEnumerator *_directoryEnumerator;
    NSRegularExpression *_attachmentFileRegularExpression;
    id <MFUpdateAttachmentsWithAttachmentIDUpgradeStepDataSource> _dataSource;
}

+ (unsigned long long)targetVersion;
+ (id)log;
- (void).cxx_destruct;
@property(nonatomic) __weak id <MFUpdateAttachmentsWithAttachmentIDUpgradeStepDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSRegularExpression *attachmentFileRegularExpression; // @synthesize attachmentFileRegularExpression=_attachmentFileRegularExpression;
@property(retain, nonatomic) NSDirectoryEnumerator *directoryEnumerator; // @synthesize directoryEnumerator=_directoryEnumerator;
- (BOOL)updateAttachmentsWithAttachmentIDUpgradeStep:(id)arg1 isDirectoryForFileURL:(id)arg2;
- (CDUnknownBlockType)skipDescendantsBlockForUpdateAttachmentsWithAttachmentIDUpgradeStep:(id)arg1;
- (id)fileURLEnumeratorForUpdateAttachmentsWithAttachmentIDUpgradeStep:(id)arg1;
- (void)processAttachmentsIfNecessaryAtFileURL:(id)arg1 isDirectory:(BOOL)arg2 skipDescendantsBlock:(CDUnknownBlockType)arg3 resultsBlock:(CDUnknownBlockType)arg4;
- (void)_insertAttachmentEntryWithConnection:(id)arg1 messageIdentifier:(id)arg2 attachmentID:(id)arg3 name:(id)arg4;
- (void)_migrateDataFromOldAttachmentsTableUsingConnection:(id)arg1 dataSource:(id)arg2;
- (void)runWithRowIDsNeedingConversationRecalculation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

