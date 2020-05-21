//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <CharacterPicker/CPKCharactersViewDataSource-Protocol.h>
#import <CharacterPicker/CPKCharactersViewDelegate-Protocol.h>
#import <CharacterPicker/NSSearchFieldDelegate-Protocol.h>
#import <CharacterPicker/NSWindowDelegate-Protocol.h>

@class CPKBottomView, CPKCategoriesView, CPKCharactersView, CPKDataProvider, CPKSearchView, CPSearchManager, NSArray, NSDictionary, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CPKPopoverController : NSViewController <CPKCharactersViewDelegate, CPKCharactersViewDataSource, NSSearchFieldDelegate, NSWindowDelegate>
{
    CPKBottomView *_bottomView;
    CPKSearchView *_searchView;
    CPSearchManager *_searchManager;
    long long _lastCategoryIndex;
    NSMutableArray *_categorySectionTitle;
    NSDictionary *_wholeCharCache;
    long long _maxSearchCount;
    long long _numberOfRecentsCategories;
    BOOL _searchViewShown;
    BOOL _nowSearching;
    BOOL _symbolCategoriesInitialized;
    BOOL _detachedWindow;
    BOOL _enabled;
    CPKDataProvider *_dataProvider;
    CPKCategoriesView *_categoriesView;
    CPKCharactersView *_charactersView;
    NSArray *_lastSearchResult;
}

@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) BOOL detachedWindow; // @synthesize detachedWindow=_detachedWindow;
@property(retain) NSArray *lastSearchResult; // @synthesize lastSearchResult=_lastSearchResult;
@property(readonly) CPKSearchView *searchView; // @synthesize searchView=_searchView;
@property(readonly) CPKCharactersView *charactersView; // @synthesize charactersView=_charactersView;
@property(readonly) CPKCategoriesView *categoriesView; // @synthesize categoriesView=_categoriesView;
@property(readonly) CPKDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
- (void)_rootCategorySelected:(long long)arg1 scrollCharacters:(BOOL)arg2 clearSearch:(BOOL)arg3 forceUpdate:(BOOL)arg4;
- (void)_setupInitialFirstResponder;
- (void)setHasShownDiversityAlert;
- (BOOL)hasShownDiversityAlert;
- (BOOL)_isEmojiCategory:(long long)arg1;
- (BOOL)_isEmojiFontPreferredSection:(long long)arg1;
- (BOOL)_isEmojiSection:(long long)arg1;
- (long long)_dataSectionFromCategory:(long long)arg1;
- (long long)_categoryFromDataSection:(long long)arg1;
- (long long)_dataSectionFromTableSection:(long long)arg1;
- (id)preferredFontsOfSection:(long long)arg1 fallbackType:(long long *)arg2;
- (BOOL)hasSkinToneVariantsAtIndex:(long long)arg1 ofSection:(long long)arg2 hasSelected:(char *)arg3;
- (id)characterAtIndex:(long long)arg1 ofSection:(long long)arg2 withSpecificFont:(id *)arg3;
- (BOOL)isValidIndex:(long long)arg1 ofSection:(long long)arg2;
- (long long)numberOfCharactersOfSection:(long long)arg1;
- (id)titleOfSection:(long long)arg1 localized:(BOOL)arg2;
- (long long)numberOfSections;
- (void)charactersViewDidCancelOperation:(id)arg1;
- (void)_showSkinToneHelpWithCharacterInfo:(id)arg1;
- (void)_handleConfirmCharacterInfo:(id)arg1;
- (void)charactersView:(id)arg1 didConfirmCharacter:(id)arg2 withFont:(id)arg3 byDrag:(BOOL)arg4;
- (void)charactersView:(id)arg1 didScrolledToSection:(long long)arg2 fromSection:(long long)arg3;
- (void)_characterViewerButtonClicked:(id)arg1;
- (void)_searchFieldTextDidChange:(id)arg1;
- (void)searchFieldTextChangedImmediately:(id)arg1;
- (void)_symbolCategoriesInitializationSync;
- (void)_lastPhasedInitialization;
- (void)searchFieldDidFocused:(id)arg1;
- (void)categoryMatrixSelectionDidChanged:(id)arg1;
- (void)categoryMatrixSelectionWillChanged:(id)arg1;
- (void)characterDidSelectedInController:(id)arg1;
- (void)prefsUpdatedExternally:(id)arg1;
- (BOOL)_isEmojiCategoriesIndex:(long long)arg1 withDataSource:(id)arg2;
- (BOOL)isEmojiCategorySelectedInLastState:(id)arg1 withDataSource:(id)arg2;
@property(readonly) BOOL isEmojiIMMode;
- (void)openExternalCharacterViewerWindow;
- (void)popoverDidClosed;
- (void)popoverWillClosed;
- (void)popoverDidOpened;
- (void)dealloc;
- (id)initWithController:(id)arg1;
- (void)setDataProvider:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

