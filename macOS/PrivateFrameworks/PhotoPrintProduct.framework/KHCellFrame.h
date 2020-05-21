//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoPrintProduct/KHChildFrame.h>

@class KHProjectJournalEntry;
@protocol KHCellFrameJournalDataProvider;

@interface KHCellFrame : KHChildFrame
{
    id <KHCellFrameJournalDataProvider> _cell;
    KHProjectJournalEntry *_journalEntry;
}

- (void)fillContext:(struct CGContext *)arg1 environment:(id)arg2 scale:(double)arg3;
- (BOOL)isValidDestinationForType:(id)arg1;
- (void)moveCaptionToNextAvailableCell;
- (BOOL)wantsCalendarHUD;
- (BOOL)wantsTransparencyLayer;
- (BOOL)wantsFrameHUD;
- (id)snapshotPhotoFrameWithSize:(struct CGSize)arg1;
- (id)cell;
- (void)setCell:(id)arg1;
- (id)addAttributeValue:(id)arg1 forKey:(id)arg2 type:(id)arg3 momentary:(BOOL)arg4;
- (void)removeAttributeForKey:(id)arg1;
- (id)attributeForKey:(id)arg1;
- (id)setValue:(id)arg1 forKey:(id)arg2 type:(id)arg3 momentary:(BOOL)arg4;
- (id)attributes;
- (void)swapWithFrame:(id)arg1;
- (id)photoId;
- (id)rawText;
- (void)setRawText:(id)arg1 momentary:(BOOL)arg2;
- (void)setHasBoilerplateText:(BOOL)arg1 momentary:(BOOL)arg2;
- (BOOL)hasBoilerplateText;
- (void)loadAttributes;
- (id)photo;
- (void)setPhoto:(id)arg1 shouldAutoZoomAndCrop:(BOOL)arg2 momentary:(BOOL)arg3 sendPlacementNotification:(BOOL)arg4 storePreviousPhotoInfo:(BOOL)arg5;
- (id)photoCaptionText;
- (long long)captionArrowPosition;
- (id)textFormatter;
- (id)stripCaptionFormatFromString:(id)arg1;
- (id)treatment;
- (void)setTreatment:(id)arg1;
- (double)rotation;
- (id)journalEntry;
- (void)setJournalEntry:(id)arg1;
- (void)persist;
- (BOOL)isCellFrame;
- (void)dealloc;
- (struct CGRect)selectionRectForScale:(double)arg1;
- (struct CGRect)baseRectForScale:(double)arg1;

@end

