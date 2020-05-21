//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarUI/EKUISummaryGadget.h>

@interface EKUINoteURLAttachmentSummaryGadget : EKUISummaryGadget
{
    BOOL _hideBecauseAllIsolatedAreVisible;
    BOOL _hasEverHadNote;
    BOOL _hasEverHadURL;
    BOOL _hasEverHadAttachment;
}

+ (id)interestedChangeKeys;
@property BOOL hasEverHadAttachment; // @synthesize hasEverHadAttachment=_hasEverHadAttachment;
@property BOOL hasEverHadURL; // @synthesize hasEverHadURL=_hasEverHadURL;
@property BOOL hasEverHadNote; // @synthesize hasEverHadNote=_hasEverHadNote;
@property BOOL hideBecauseAllIsolatedAreVisible; // @synthesize hideBecauseAllIsolatedAreVisible=_hideBecauseAllIsolatedAreVisible;
- (double)preferredWidth;
- (BOOL)shouldDisplay;
- (id)summaryString;
- (id)addAllString;
- (void)setObject:(id)arg1;
- (id)initWithViewController:(id)arg1;

@end

