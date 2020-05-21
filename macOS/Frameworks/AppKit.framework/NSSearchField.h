//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTextField.h>

@class NSArray, NSMenu, NSString;
@protocol NSSearchFieldDelegate;

@interface NSSearchField : NSTextField
{
    struct {
        unsigned int _inTransition:1;
        unsigned int _reselecting:1;
        unsigned int _isSearching:1;
        unsigned int _reserved:29;
    } _sfFlags;
    unsigned int _reserved2;
    unsigned int _reserved3;
    unsigned int _reserved4;
}

+ (void)initialize;
- (struct CGRect)rectForCancelButtonWhenCentered:(BOOL)arg1;
- (struct CGRect)rectForSearchButtonWhenCentered:(BOOL)arg1;
- (struct CGRect)rectForSearchTextWhenCentered:(BOOL)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)_windowResignedKeyStatus:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)textDidEndEditing:(id)arg1;
- (void)selectText:(id)arg1;
- (BOOL)sendAction:(SEL)arg1 to:(id)arg2;
- (void)_updateSearchingState;
- (BOOL)becomeFirstResponder;
- (id)_previousResponder;
- (void)_setPreviousResponder:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)keyUp:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)_addEventToBeRepostedAfterTransition:(id)arg1;
- (void)_setEventsNeedingReposting:(id)arg1;
- (id)_eventsNeedingReposting;
- (void)_transitionForFirstResponder:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_invokePostAnimationBlocks;
- (void)_createPostAnimationQueueWithBlock:(CDUnknownBlockType)arg1;
- (void)_addPostAnimationBlock:(CDUnknownBlockType)arg1;
- (void)_setAnimationCompletionBlocks:(id)arg1;
- (id)_animationCompletionBlocks;
- (void)_windowDidOrderOffScreen;
- (BOOL)_shouldDoLayerPerformanceUpdates;
- (BOOL)searchFieldCell:(id)arg1 shouldChangeCancelButtonVisibility:(BOOL)arg2;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(retain) NSMenu *searchMenuTemplate;
@property __weak id <NSSearchFieldDelegate> delegate;
@property BOOL centersPlaceholder;
@property BOOL sendsSearchStringImmediately;
@property long long maximumRecents;
@property BOOL sendsWholeSearchString;
@property(copy) NSString *recentsAutosaveName;
@property(copy) NSArray *recentSearches;
- (id)ns_widgetType;

@end

