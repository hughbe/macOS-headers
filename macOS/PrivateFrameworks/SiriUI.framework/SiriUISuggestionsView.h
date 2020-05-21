//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColor, NSMutableArray, NSString, SiriUIAcousticIDSpinner, SiriUIContentLabel;
@protocol SiriUISuggestionsViewDelegate;

@interface SiriUISuggestionsView : NSView
{
    SiriUIContentLabel *_headerLabel;
    SiriUIContentLabel *_oldHeaderLabel;
    SiriUIContentLabel *_subheaderLabel;
    SiriUIContentLabel *_largeSubheaderLabel;
    BOOL _firstSuggestionPresentation;
    SiriUIAcousticIDSpinner *_acousticIDSpinner;
    BOOL _useSmallText;
    NSMutableArray *_allConstraints;
    BOOL _springAnimateIn;
    NSString *_headerText;
    NSString *_subheaderText;
    NSString *_largeSubheaderText;
    NSColor *_textColor;
    id <SiriUISuggestionsViewDelegate> _delegate;
    struct CGPoint _contentOffset;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SiriUISuggestionsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL springAnimateIn; // @synthesize springAnimateIn=_springAnimateIn;
@property(nonatomic) struct CGPoint contentOffset; // @synthesize contentOffset=_contentOffset;
@property(copy, nonatomic) NSColor *textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) NSString *largeSubheaderText; // @synthesize largeSubheaderText=_largeSubheaderText;
@property(copy, nonatomic) NSString *subheaderText; // @synthesize subheaderText=_subheaderText;
@property(copy, nonatomic) NSString *headerText; // @synthesize headerText=_headerText;
- (id)accessibilityIdentifier;
- (id)accessibilityChildren;
- (id)accessibilityLabel;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
@property(nonatomic) BOOL useSmallText;
- (void)_updateHeaderFontSize;
- (BOOL)isFlipped;
- (void)acousticIDSpinnerDidHide:(id)arg1;
- (double)_headerFontSize;
- (double)_suggestionFontSize;
- (double)_largeSubheaderFontSize;
- (double)_subheaderFontSize;
- (double)_headerToLargeSubheaderOffset;
- (double)_headerToSubheaderOffset;
- (unsigned long long)_numberOfSuggestionsToDisplay;
- (double)_suggestionSpacing;
- (void)hideAcousticIDSpinner;
- (void)_reallyShowAcousticIDSpinner;
- (void)showAcousticIDSpinner;
- (void)animateOutWithCompletion:(CDUnknownBlockType)arg1;
- (void)_animateHeaderOut;
- (void)_animateHeaderIn;
- (void)updateConstraints;
- (void)_loadLargeSubheaderViewIfNeeded;
- (void)_loadSubheaderViewIfNeeded;
- (id)initWithFrame:(struct CGRect)arg1;

@end

