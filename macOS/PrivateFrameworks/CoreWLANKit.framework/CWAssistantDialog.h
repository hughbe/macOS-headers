//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <CoreWLANKit/NSTextViewDelegate-Protocol.h>
#import <CoreWLANKit/NSWindowDelegate-Protocol.h>

@class NSArray, NSButton, NSString, NSTextField, NSTextView;
@protocol CWAssistantDialogDelegate;

@interface CWAssistantDialog : NSWindowController <NSWindowDelegate, NSTextViewDelegate>
{
    NSTextField *_titleTF;
    NSTextView *_descriptionTV;
    NSTextField *_indexTF;
    NSTextField *_ofTF;
    NSTextField *_totalTF;
    NSButton *_previousButton;
    NSButton *_nextButton;
    NSButton *_cancelButton;
    NSArray *_recommendationItems;
    unsigned long long _currentIndex;
    id <CWAssistantDialogDelegate> _delegate;
}

@property id <CWAssistantDialogDelegate> delegate; // @synthesize delegate=_delegate;
- (BOOL)textView:(id)arg1 clickedOnLink:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)windowDidLoad;
- (void)updateHealthUIWithItem:(id)arg1 initial:(BOOL)arg2;
- (id)localizedStringForKey:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithRecommendationItems:(id)arg1;
- (void)onPreviousButton:(id)arg1;
- (void)onNextButton:(id)arg1;
- (void)learnMoreButtonClicked:(id)arg1;
- (void)onCancelButton:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

