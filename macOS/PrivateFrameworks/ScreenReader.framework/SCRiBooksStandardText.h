//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenReader/SCRStandardText.h>

__attribute__((visibility("hidden")))
@interface SCRiBooksStandardText : SCRStandardText
{
}

- (id)captionDescription;
- (id)iBooksMoveToTextElementWithEvent:(id)arg1 request:(id)arg2 direction:(long long)arg3;
- (void)iBooksAdvanceToNextTextElementWithEvent:(id)arg1 request:(id)arg2;
- (void)addTextBoundryToRequest:(id)arg1 edge:(long long)arg2;
- (BOOL)addContentSummaryToRequest:(id)arg1;
- (id)sentenceEndMarkerAfterPosition:(id)arg1;
- (BOOL)handleReadContentsCallbackForEvent:(id)arg1 request:(id)arg2 visibleOnly:(BOOL)arg3;
- (BOOL)interactDownShiftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactPageDownShiftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactPageUpShiftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactPageDownCommandWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactPageUpCommandWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactDownWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactUpWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactRightWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactLeftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactRightShiftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactLeftShiftWithEvent:(id)arg1 request:(id)arg2;
- (long long)groupBehavior;
- (id)iBooksInteractWithoutBoundaryCheckWithEvent:(id)arg1 request:(id)arg2 direction:(long long)arg3;
- (id)iBooksFocusIntoTextUIElement:(id)arg1 withEvent:(id)arg2 request:(id)arg3 direction:(long long)arg4;
- (BOOL)iBooksHasReachedEndOfTextElementWithGranularity:(long long)arg1;
- (BOOL)iBooksHasReachedBeginningOfTextElementWithGranularity:(long long)arg1;
- (BOOL)iBooksMarkerIsInNextSibling:(id)arg1;
- (BOOL)iBooksMarkerIsInPreviousSibling:(id)arg1;
- (id)iBooksLastMarker;
- (id)iBooksFirstMarker;

@end

