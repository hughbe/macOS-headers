//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScreenReader/SCRBrailleDescribing-Protocol.h>

@class AXFDispatchQueue, NSArray, NSMutableArray, NSMutableDictionary, NSMutableString, NSSet, NSString, SCRCProcessIdentifier, SCRCTargetSelectorTimer, SCRCThreadKey, SCRGuideItem, SCRKeyboardKey, SCRVisualsHighlightCursor, SCRVisualsMenuWindow;

__attribute__((visibility("hidden")))
@interface SCRGuide : NSObject <SCRBrailleDescribing>
{
    NSMutableArray *_typeAheadItems;
    NSMutableDictionary *_auxDictionary;
    SCRCTargetSelectorTimer *_moreItemsTimer;
    NSSet *_workspaceCommandSet;
    unsigned long long _selectedItemIndex;
    _Atomic _Bool __isOpen;
    BOOL __isFirstOpen;
    NSString *_title;
    NSMutableString *_typeAheadString;
    SCRKeyboardKey *_hotKey;
    id _delegate;
    long long _tag;
    SCRGuide *_initialOpenSubguide;
    SCRCThreadKey *_threadKey;
    SCRCProcessIdentifier *_processIdentifier;
    SCRGuide *__subguide;
    SCRGuideItem *_parentItem;
    NSMutableArray *__guideItems;
    NSMutableArray *__unsortedItems;
    AXFDispatchQueue *__syncQueue;
    SCRVisualsMenuWindow *_menuWindow;
    SCRVisualsHighlightCursor *_cursor;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SCRVisualsHighlightCursor *cursor; // @synthesize cursor=_cursor;
@property(readonly, nonatomic) SCRVisualsMenuWindow *menuWindow; // @synthesize menuWindow=_menuWindow;
@property(readonly, nonatomic) AXFDispatchQueue *_syncQueue; // @synthesize _syncQueue=__syncQueue;
@property(readonly, nonatomic) NSMutableArray *_unsortedItems; // @synthesize _unsortedItems=__unsortedItems;
@property(readonly, nonatomic) NSMutableArray *_guideItems; // @synthesize _guideItems=__guideItems;
@property(nonatomic, setter=_setIsFirstOpen:) BOOL _isFirstOpen; // @synthesize _isFirstOpen=__isFirstOpen;
@property(nonatomic, setter=_setParentItem:) __weak SCRGuideItem *parentItem; // @synthesize parentItem=_parentItem;
@property(retain, nonatomic, setter=_setSubguide:) SCRGuide *_subguide; // @synthesize _subguide=__subguide;
@property(retain, nonatomic) SCRCProcessIdentifier *processIdentifier; // @synthesize processIdentifier=_processIdentifier;
@property(readonly, nonatomic) SCRCThreadKey *threadKey; // @synthesize threadKey=_threadKey;
@property(retain, nonatomic) SCRGuide *initialOpenSubguide; // @synthesize initialOpenSubguide=_initialOpenSubguide;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SCRKeyboardKey *hotKey; // @synthesize hotKey=_hotKey;
@property(retain, nonatomic) NSMutableString *typeAheadString; // @synthesize typeAheadString=_typeAheadString;
- (id)_lastWordForString:(id)arg1;
- (BOOL)_handleGestureTrackingEvent:(id)arg1 request:(id)arg2;
- (void)_handleOutputForIndexSelection:(unsigned long long)arg1 request:(id)arg2 shouldBraille:(BOOL)arg3;
- (BOOL)handlesEvents;
- (void)_restoreViewFinderFocus;
- (void)handleMouseClickForItemAtIndex:(long long)arg1;
- (void)handleTypeAheadWithKey:(id)arg1 request:(id)arg2;
- (BOOL)handleItemSelection:(id)arg1 outputRequest:(id)arg2;
- (id)threadDescription;
- (BOOL)handleEvent:(id)arg1 request:(id)arg2;
- (void)addTopBoundaryOutputToRequest:(id)arg1;
- (void)_processEvent:(id)arg1;
- (void)dispatchEvent:(id)arg1;
- (BOOL)_handleReadVisibleText:(id)arg1 request:(id)arg2 options:(long long)arg3;
- (void)_setIsOpen:(BOOL)arg1;
- (BOOL)_isOpen;
- (void)_closeWithOutputRequest:(id)arg1;
- (void)_addDescriptionToOutputRequest:(id)arg1;
- (id)contextualHelpToSpeak;
- (void)_checkForMoreItems;
- (void)_addGuideItemsFromCallback:(id)arg1;
- (void)_threadSafeAddGuideItemsFromCallback:(id)arg1;
- (void)addBrailleDescriptionToRequest:(id)arg1;
- (void)_openWithSelectionIndex:(unsigned long long)arg1 request:(id)arg2;
- (void)resetMoreItemsTimerWithDelay:(double)arg1;
- (void)_openRootWithOutputRequest:(id)arg1;
- (void)_openRootWithSelectionIndex:(unsigned long long)arg1 request:(id)arg2;
- (void)close;
- (void)openWithSelectionIndex:(unsigned long long)arg1;
- (void)open;
- (id)itemForHotKey:(id)arg1;
- (id)_rootGuide;
- (id)_guidePath;
@property(readonly, nonatomic) long long numberOfItems;
@property(readonly, nonatomic) NSArray *guideItemsIgnoringTypeahead;
@property(readonly, nonatomic) NSArray *guideItems;
- (void)selectItem:(id)arg1 indexForView:(unsigned long long)arg2;
- (void)selectItemAtIndex:(unsigned long long)arg1 indexForView:(unsigned long long)arg2;
- (id)_arrayOfItemsWithTitleContainingString:(id)arg1;
- (unsigned long long)_indexOfItemWithTitleContainingString:(id)arg1;
- (unsigned long long)indexOfSelectedItem;
- (id)_deepestGuide;
- (id)selectedItem;
- (void)insertItem:(id)arg1 atIndex:(unsigned int)arg2;
- (void)sortItems:(long long)arg1 inRange:(struct _NSRange)arg2;
- (void)_refreshMenuWindow;
- (void)sortItems:(long long)arg1;
- (void)removeAllItems;
- (void)addItems:(id)arg1;
- (void)addItem:(id)arg1;
- (void)addItemWithTitle:(id)arg1 command:(id)arg2 subguide:(id)arg3 target:(id)arg4 action:(id)arg5 tag:(long long)arg6 info:(id)arg7;
- (void)addItemWithTitle:(id)arg1 key:(id)arg2 modifier:(unsigned long long)arg3 subguide:(id)arg4 target:(id)arg5 action:(id)arg6 tag:(long long)arg7 info:(id)arg8;
- (void)addItemWithTitle:(id)arg1 key:(id)arg2 modifier:(unsigned long long)arg3 subguide:(id)arg4 info:(id)arg5;
- (void)addItemWithTitle:(id)arg1 target:(id)arg2 action:(id)arg3 tag:(long long)arg4 info:(id)arg5;
@property(readonly, copy) NSString *spokenTitle;
@property(copy) NSString *title; // @synthesize title=_title;
- (BOOL)boolForKey:(id)arg1;
- (id)valueForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)typeAheadItems;
- (void)_readWriteSync:(CDUnknownBlockType)arg1;
- (void)_readOnlySync:(CDUnknownBlockType)arg1;
- (id)initWithTitle:(id)arg1 menuWindow:(id)arg2 cursor:(id)arg3;

@end

