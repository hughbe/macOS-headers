//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpotlightServices/SFSearchResult_SpotlightExtras.h>

#import <Spotlight/NSPasteboardWriting-Protocol.h>
#import <Spotlight/QLSeamlessOpenerDelegate-Protocol.h>

@class NSImage, NSString, NSURL;

@interface SFSearchResult_SpotlightExtras (SPResultExtensions) <QLSeamlessOpenerDelegate, NSPasteboardWriting>
- (id)quickLookItemForQueryString:(id)arg1;
@property(readonly) BOOL isPhotoImageOrMovie;
- (BOOL)isMovie;
- (BOOL)isImage;
@property(readonly) NSString *targetString;
- (BOOL)allowShowPath;
- (int)qlPreviewMode;
- (id)previewItemURL;
- (id)sharedCustomPreviewController;
- (id)seamlessOpener:(id)arg1 sourcePreviewViewForPreviewItem:(id)arg2;
- (id)unknownImage;
- (id)safariDocumentImage;
- (id)prefPaneImage;
- (id)iconForBundle:(id)arg1 key:(id)arg2;
- (id)contactImage;
- (id)title_note;
@property(readonly) NSString *displayInfo;
@property(readonly) NSImage *iconImageForApplication;
@property(readonly) NSImage *iconImage;
@property(readonly) NSImage *largeIconImage;
@property(readonly) NSURL *fastURL;
@property(readonly) NSString *fastPath;
@property(readonly) NSString *parentPath;
- (BOOL)isPrefixMatchWithName:(id)arg1;
- (BOOL)isExactMatchWithName:(id)arg1;
- (BOOL)isSomewhatRecentlyUsed;
- (BOOL)isRecentlyUsed;
- (BOOL)isVeryRecentlyUsed;
- (BOOL)isUsedWithinDays:(double)arg1;
- (id)customOpenSearchString;
- (unsigned long long)resultOpenOptions;
- (BOOL)isShortcutAllowed;
- (BOOL)shouldNotBeTopHit;
- (int)isTopHit;
- (BOOL)isLocalResult;
- (BOOL)isCalculation;
- (BOOL)isSafariHistory;
- (BOOL)isEmail;
- (BOOL)isCalendarEvent;
- (BOOL)isFolder;
- (BOOL)isContact;
- (BOOL)isPrefPane;
- (BOOL)isVideo;
- (BOOL)isValidResultForFeedback;
- (BOOL)isMusic;
- (BOOL)isApplicationQueryResult;
- (BOOL)isApplication;
- (BOOL)isIndexingProgress;
- (BOOL)isGroupHeading;
- (BOOL)isFile;
- (BOOL)isSelectable;
- (void)addAdamID:(id)arg1;
- (id)adamID;
- (BOOL)utiTypeConformsTo:(id)arg1;
- (void)setMatchName:(id)arg1;
- (unsigned long long)writingOptionsForType:(id)arg1 pasteboard:(id)arg2;
- (id)pasteboardPropertyListForType:(id)arg1;
- (id)writableTypesForPasteboard:(id)arg1;
- (id)pasteboardObject;
- (id)previewController;
- (BOOL)isCompatibleWithPreviewController:(id)arg1;
- (id)pathForApplicationToOpen;
- (void)setLastRestrictionStatus:(BOOL)arg1;
- (void)setNeedsPreviewUpdate:(BOOL)arg1;
- (BOOL)needsPreviewUpdate;
- (BOOL)isApplicationManaged;
- (id)subjectForEmailAttachment;
- (BOOL)isBoundEmailAttachment;
- (id)emailURLForAttachment;
- (void)markAsEngaged;
- (void)markAsUsed;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSString *filePath;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

