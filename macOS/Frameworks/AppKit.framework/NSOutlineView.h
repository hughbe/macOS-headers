//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTableView.h>

#import <AppKit/NSAccessibilityOutline-Protocol.h>

@class NSButtonCell, NSMapTable, NSMutableArray, NSString, NSTableColumn, _NSOVRowEntry;
@protocol NSOutlineViewDataSource, NSOutlineViewDelegate;

@interface NSOutlineView : NSTableView <NSAccessibilityOutline>
{
    long long _numberOfRows;
    _NSOVRowEntry *_rowEntryTree;
    NSMapTable *_itemToEntryMap;
    struct __CFArray *_rowEntryArray;
    long long _firstRowIndexDrawn;
    id _autoExpandTimerItem;
    NSTableColumn *_outlineTableColumn;
    BOOL _initedRows;
    BOOL _indentationMarkerInCell;
    long long _indentationPerLevel;
    NSButtonCell *_outlineCell;
    struct CGRect _trackingOutlineFrame;
    id _expandingItem;
    NSMutableArray *_draggedItems;
    struct __OvFlags {
        unsigned int unused3:1;
        unsigned int dataSourceObjectValueByItem:1;
        unsigned int allowAutomaticAnimations:1;
        unsigned int dontRedisplayOnFrameChange:1;
        unsigned int _isSpringLoadingFlashing:1;
        unsigned int unused2:1;
        unsigned int delegateShouldAutoExpandItem:1;
        unsigned int delegateAutoCollapseItem:1;
        unsigned int delegateAutoExpandItem:1;
        unsigned int delegateShouldShowOutlineCellForItem:1;
        unsigned int dataSourceDraggedImageMovedTo:1;
        unsigned int dataSourceDraggingEndedAt:1;
        unsigned int reloadingData:1;
        unsigned int validDataSourceMethods:1;
        unsigned int numberOfRowsDataExpandEntered:1;
        unsigned int delayRowEntryFreeDisabled:1;
        unsigned int delegateHeightOfRowByItem:1;
        unsigned int animateExpandAndCollapse:1;
        unsigned int stronglyReferencesItems:1;
        unsigned int selectionAdjustmentDisabled:1;
        unsigned int subclassRowForItem:1;
        unsigned int delegateWillDisplayOutlineCell:1;
        unsigned int enableExpandNotifications:1;
        unsigned int autoSaveExpandItems:1;
        unsigned int autoresizesOutlineColumn:1;
        unsigned int delegateShouldExpandItem:1;
        unsigned int delegateShouldCollapseItem:1;
        unsigned int delegateSelectionShouldChangeInOutlineView:1;
        unsigned int delegateShouldSelectTableColumn:1;
        unsigned int delegateShouldSelectItem:1;
        unsigned int delegateShouldEditTableColumn:1;
        unsigned int delegateWillDisplayCell:1;
    } _ovFlags;
    long long *_indentArray;
    long long _originalWidth;
    id _expandSet;
    id _expandSetToExpandItemsInto;
    long long _indentArraySize;
    NSButtonCell *_trackingOutlineCell;
    long long _trackingRow;
    id _ovReserved;
}

+ (BOOL)_shouldRequireAutoCollapseOutlineAfterDropsDefault;
+ (BOOL)_shouldAllowAutoCollapseItemsDuringDragsDefault;
+ (BOOL)_shouldAllowAutoExpandItemsDuringDragsDefault;
+ (void)_delayedFreeRowEntryFreeList;
- (Class)_animatorClass;
- (void)_updateForSizeModeChange;
- (void)_sizeModeChangeForRowView:(id)arg1 row:(long long)arg2;
- (void)reloadItem:(id)arg1 reloadChildren:(BOOL)arg2 withInsertAnimation:(unsigned long long)arg3 removeAnimation:(unsigned long long)arg4;
- (void)_recursivelyReloadItem:(id)arg1 reloadChildren:(BOOL)arg2 withInsertAnimation:(unsigned long long)arg3 removeAnimation:(unsigned long long)arg4;
- (long long)_nextFloatableRowFromRow:(long long)arg1 inVisibleRange:(struct _NSRange)arg2;
- (long long)_lastGroupRowChildFromRow:(long long)arg1;
- (BOOL)_shouldFloatRow:(long long)arg1 inVisibleRange:(struct _NSRange)arg2;
- (void)_delegateDidRemoveRowView:(id)arg1 forRow:(long long)arg2;
- (BOOL)_delegateRespondsTo_didRemoveRowView;
- (void)_delegateDidAddRowView:(id)arg1 forRow:(long long)arg2;
- (BOOL)_delegateRespondsTo_didAddRowView;
- (void)moveRowAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)removeRowsAtIndexes:(id)arg1 withAnimation:(unsigned long long)arg2;
- (void)insertRowsAtIndexes:(id)arg1 withAnimation:(unsigned long long)arg2;
- (void)moveItemAtIndex:(long long)arg1 inParent:(id)arg2 toIndex:(long long)arg3 inParent:(id)arg4;
- (void)removeItemsAtIndexes:(id)arg1 inParent:(id)arg2 withAnimation:(unsigned long long)arg3;
- (void)insertItemsAtIndexes:(id)arg1 inParent:(id)arg2 withAnimation:(unsigned long long)arg3;
- (void)_staticMoveItemAtIndex:(long long)arg1 inParent:(id)arg2 toIndex:(long long)arg3 inParent:(id)arg4;
- (void)_staticRemoveItemsAtIndexes:(id)arg1 inParent:(id)arg2;
- (void)_staticInsertItemsAtIndexes:(id)arg1 inParent:(id)arg2;
- (void)_moveItemAtIndex:(long long)arg1 inParentRowEntry:(id)arg2 toIndex:(long long)arg3 inParentRowEntry:(id)arg4;
- (void)_insertItemsAtIndexes:(id)arg1 inParentRowEntry:(id)arg2 withAnimation:(unsigned long long)arg3;
- (void)_removeItemsAtIndexes:(id)arg1 inParentRowEntry:(id)arg2 withAnimation:(unsigned long long)arg3;
- (void)_recursivelyDeleteRowEntryAndAllChildren:(id)arg1;
- (void)_validateRowEntryArray;
- (void)_validateParentRowEntry:(id)arg1 reason:(id)arg2 indexes:(id)arg3;
- (void)_throwExceptionForUpdateErrorAtIndexes:(id)arg1 kind:(id)arg2 ofParentRowEntry:(id)arg3;
- (id)_rowEntryForItem:(id)arg1;
- (struct CGRect)_dropDestinationIndicatorFrameForDraggingDestinationStyle:(long long)arg1 rowIndexes:(id)arg2;
- (double)_dropHighlightIndentationForRow:(long long)arg1 withLevel:(long long)arg2;
- (void)prepareDraggingDestinationView:(id)arg1 forRowIndexes:(id)arg2 draggingStyle:(long long)arg3;
- (id)_delegate_viewForTableColumn:(id)arg1 row:(long long)arg2;
- (id)_delegateRowViewForRow:(long long)arg1;
- (id)_makeNewRowViewForItem:(id)arg1;
- (id)_disclosureButtonForRowView:(id)arg1;
- (void)addDropBetweenFeedbackViewsForRow:(long long)arg1;
- (void)addDropOnFeedbackViewsForRow:(long long)arg1;
- (void)didAddRowView:(id)arg1 forRow:(long long)arg2;
- (void)_updateDisclosureButtonForRowView:(id)arg1 forRow:(long long)arg2 removeIfNotAvailable:(BOOL)arg3 updatePosition:(BOOL)arg4 inDidAddRowView:(BOOL)arg5;
- (void)noteHeightOfRowsWithIndexesChanged:(id)arg1;
- (void)_removeDisclosureButtonForRowView:(id)arg1;
- (void)_removeDisclosureButtonOtherIdentifierForRowView:(id)arg1 withIdentifier:(id)arg2;
- (BOOL)_removeDisclosureButtonForRowView:(id)arg1 withIdentifier:(id)arg2;
- (id)_identifierForDisclosureButtonForRowView:(id)arg1;
- (id)makeViewWithIdentifier:(id)arg1 owner:(id)arg2;
- (void)_outlineControlClicked:(id)arg1;
- (id)_makeShowHideOutlineControl;
- (id)_makeOutlineControl;
- (id)identifierForRow:(long long)arg1;
- (BOOL)_delegate_isGroupRow:(long long)arg1;
- (BOOL)_delegate_shouldTypeSelectForEvent:(id)arg1 withCurrentSearchString:(id)arg2;
- (BOOL)_delegateRespondsTo_shouldTypeSelectForEvent;
- (id)_delegateTypeSelectStringForTableColumn:(id)arg1 row:(long long)arg2;
- (BOOL)_delegateRespondsTo_typeSelectStringForTableColumn;
- (long long)_delegate_nextTypeSelectMatchFromRow:(long long)arg1 toRow:(long long)arg2 forString:(id)arg3;
- (BOOL)_delegateRespondsTo_nextTypeSelectMatchFromRow;
- (double)_sizeToFitWidthOfColumn:(long long)arg1 row:(long long)arg2;
- (double)_delegate_sizeToFitWidthOfColumn:(long long)arg1;
- (void)removeFromSuperview;
- (id)_findParentWithLevel:(long long)arg1 beginingAtItem:(id)arg2 childEncountered:(long long *)arg3;
- (long long)_countDisplayedDescendantsOfItem:(id)arg1;
- (double)_maxXLocOfOutlineColumn;
- (double)_minXLocOfOutlineColumn;
- (double)_locOfOutlineColumnAtMin:(BOOL)arg1;
- (id)_itemsFromRowsWithIndexes:(id)arg1;
- (void)_collapseAutoExpandedItems:(id)arg1;
- (void)_cancelAnyScheduledAutoCollapse;
- (void)_collapseAllAutoExpandedItems;
- (BOOL)_autoExpandItemUnderCursor;
- (void)_autoExpandItem:(id)arg1;
- (void)_scheduleAutoExpandTimerForItem:(id)arg1 dragInfo:(id)arg2;
- (BOOL)_shouldAutoExpandItem:(id)arg1;
- (void)_stopAutoExpandingItemFlash;
- (void)_autoExpandFlashOnce;
- (void)_startAutoExpandingItemFlash;
- (void)_startAutoExpandWithFlash:(id)arg1;
- (void)_autoExpandItem:(id)arg1 afterFlashCount:(long long)arg2;
- (void)_flashOutlineCell;
- (BOOL)_shouldAutoExpandNoExpandableItem:(id)arg1;
- (BOOL)_dataSourceRespondsToNamesOfPromisedFilesDroppedAtDestination;
- (id)_dataSourceNamesOfPromisedFilesAtDestination:(id)arg1;
- (void)draggedImage:(id)arg1 movedTo:(struct CGPoint)arg2;
- (void)draggedImage:(id)arg1 endedAt:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (BOOL)performDragOperation:(id)arg1;
- (id)_pasteboardWriterForRow:(long long)arg1;
- (BOOL)_dataSourceRespondsToPasteboardWriterForRow;
- (void)_delegateUpdateDraggingItemsForDrag:(id)arg1;
- (void)_sendDraggingSession:(id)arg1 endedAtPoint:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (void)_sendWillBeginDraggingSession:(id)arg1 willBeginAtPoint:(struct CGPoint)arg2 forDraggedRowIndexes:(id)arg3;
- (long long)_preferredDragColumnForEvent:(id)arg1;
- (void)_invalidateDropCandidateItem;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (BOOL)_dataSourceRespondsToSortDescriptorsDidChange;
- (void)_sendDataSourceSortDescriptorsDidChange:(id)arg1;
- (BOOL)_dataSourceRespondsToWriteDragData;
- (BOOL)_sendDataSourceWriteDragDataWithIndexes:(id)arg1 toPasteboard:(id)arg2;
- (void)_sendDelegateDidDragColumn:(long long)arg1;
- (void)_sendDelegateDidClickColumn:(long long)arg1;
- (void)_sendDelegateDidMouseDownInHeader:(long long)arg1;
- (void)_drawDropHighlight;
- (BOOL)_isDropFeedbackRow:(long long)arg1;
- (long long)_dropCandidateChildIndex;
- (id)_dropCandidateItem;
- (long long)_dropCandidateRowToHighlight;
- (long long)_dropCandidateRow;
- (struct CGRect)_dropHighlightBackgroundRectForRow:(long long)arg1;
- (double)_indentationForDropTargetRow:(long long)arg1;
- (BOOL)_shouldHighlightParentRows;
- (id)_columnsForDragImage;
- (void)dragImage:(id)arg1 at:(struct CGPoint)arg2 offset:(struct CGSize)arg3 event:(id)arg4 pasteboard:(id)arg5 source:(id)arg6 slideBack:(BOOL)arg7;
- (void)_setNeedsDisplayForDropCandidateItem:(id)arg1 childIndex:(long long)arg2 mask:(unsigned long long)arg3;
- (void)_getRow:(long long *)arg1 andParentRow:(long long *)arg2 forDropCandidateItem:(id)arg3 childIndex:(long long)arg4;
- (void)_determineDropCandidateForDragInfo:(id)arg1;
- (long long)_hitRowForDropTargetRow:(long long)arg1 point:(struct CGPoint)arg2;
- (void)_updateDropFeedbackFromPriorItem:(id)arg1 childIndex:(long long)arg2 mask:(unsigned long long)arg3;
- (BOOL)_shouldDoDragUpdateOfViewBasedRowData;
- (void)_tryDrop:(id)arg1 dropItem:(id)arg2 dropChildIndex:(long long)arg3;
- (BOOL)_hoverAreaIsSameAsLast:(id)arg1;
- (void)setDropItem:(id)arg1 dropChildIndex:(long long)arg2;
- (BOOL)shouldCollapseAutoExpandedItemsForDeposited:(BOOL)arg1;
- (BOOL)_shouldAttemptDroppingAsChildOfLeafItems;
- (BOOL)_shouldSlideBackAfterDragFailed;
- (void)_readPersistentTableColumns;
- (void)_writePersistentTableColumns;
- (void)setAutosaveName:(id)arg1;
- (void)_writePersistentExpandItems;
- (id)_convertPersistentItem:(id)arg1;
- (void)_readPersistentExpandItems;
@property BOOL autosaveExpandedItems;
- (BOOL)_userCanEditTableColumn:(id)arg1 row:(long long)arg2;
- (BOOL)isItemExpanded:(id)arg1;
- (BOOL)_isItemLoadedAndExpanded:(id)arg1;
- (long long)levelForRow:(long long)arg1;
- (long long)levelForItem:(id)arg1;
- (id)parentForItem:(id)arg1;
- (long long)childIndexForItem:(id)arg1;
- (long long)rowForItem:(id)arg1;
- (void)_loadItemsIfNeeded;
- (id)itemAtRow:(long long)arg1;
- (id)_rowEntryForRow:(long long)arg1 requiredRowEntryLoadMask:(unsigned long long)arg2;
- (id)_rowEntryForChild:(long long)arg1 ofParent:(id)arg2 requiredRowEntryLoadMask:(unsigned long long)arg3;
- (id)_lazyRowEntryForItem:(id)arg1 requiredRowEntryLoadMask:(unsigned long long)arg2;
- (BOOL)_rowEntryExistsForItem:(id)arg1;
- (id)_rowEntryForItem:(id)arg1 requiredRowEntryLoadMask:(unsigned long long)arg2;
- (BOOL)_sendDelegateCanSelectColumn:(long long)arg1;
- (id)_sendDelegateSelectionIndexesForProposedSelection:(id)arg1;
- (BOOL)_sendDelegateCanSelectRow:(long long)arg1;
- (BOOL)_delegateRespondsToCanSelectRow;
- (BOOL)_userCanChangeSelection;
- (void)_redisplayAndResizeFromRow:(long long)arg1;
- (BOOL)_needsRedisplayOnFrameChange;
- (void)_outlineMouseExited:(id)arg1;
- (void)_outlineMouseEntered:(id)arg1;
- (long long)_outlineTrackingRowForEvent:(id)arg1;
- (void)_updateTrackingAreasWithInvalidCursorRects:(BOOL)arg1;
- (BOOL)_shouldUseTrackingAreasForOutlineCell;
- (void)_addOutlineCellTrackingAreas;
- (void)_delegateWantsTrackingAreasForRow:(long long)arg1 column:(long long)arg2;
- (BOOL)_delegateRespondsTo_wantsTrackingAreasForRowColumn;
- (void)_setOutlineCellTrackingAreaRow:(long long)arg1;
- (void)_setOutlineButtonVisible:(BOOL)arg1 onRow:(long long)arg2;
- (struct CGRect)frameOfOutlineCellAtRow:(long long)arg1;
- (struct CGRect)_frameOfOutlineCellAtRow:(long long)arg1;
- (id)preparedCellAtColumn:(long long)arg1 row:(long long)arg2;
- (struct CGRect)_frameOfSourceListGroupOutlineCellRow:(long long)arg1;
- (long long)_outlineColumnIndex;
- (BOOL)_shouldShowOutlineCellForRow:(long long)arg1;
- (BOOL)_delegateShouldShowOutlineCellForItem:(id)arg1;
- (void)_setNeedsDisplayInRow:(long long)arg1;
- (struct CGRect)_cellOffsetConstraintConstantsForColumn:(long long)arg1 row:(long long)arg2;
- (struct CGRect)frameOfCellAtColumn:(long long)arg1 row:(long long)arg2;
- (void)_gutterSpacingChanged;
- (BOOL)_isOutlineView;
- (BOOL)shouldShowOutlineCellInlineForRow:(long long)arg1;
- (double)_indentationForRow:(long long)arg1 withLevel:(long long)arg2 isSourceListGroupRow:(BOOL)arg3;
- (double)_outlineCellIndentation;
- (BOOL)_canUseUpdatedIdentation;
- (void)setSelectionHighlightStyle:(long long)arg1;
- (void)_forgetBeingASourceList;
- (void)_becomeASourceList;
- (void)_adjustDrawingTestFrame:(struct CGRect *)arg1 atRow:(long long)arg2 column:(long long)arg3;
- (void)_drawContentsAtRow:(long long)arg1 column:(long long)arg2 withCellFrame:(struct CGRect)arg3;
- (void)_drawOutlineCellAtRow:(long long)arg1;
- (id)_trackingOutlineCellForRow:(long long)arg1;
- (id)_preparedOutlineCellForRow:(long long)arg1;
- (id)_trackingOutlineCell;
- (void)_setTrackingOutlineCell:(id)arg1;
- (id)_outlineCell;
- (void)_setOutlineCell:(id)arg1;
- (void)_ensureTextOutlineCell;
- (id)_makeTextOutlineCell;
- (void)_notifyDelegateOfStateChangeForCell:(id)arg1;
- (void)_setupStateForOutlineCell:(id)arg1 atRow:(long long)arg2;
- (long long)_outlineCellBackgroundStyleForRow:(long long)arg1;
- (struct CGRect)_adjustRectForFocusRing:(struct CGRect)arg1 atRow:(long long)arg2;
- (void)drawRowIndexes:(id)arg1 clipRect:(struct CGRect)arg2;
- (double)_backgroundOffsetForGroupRow:(long long)arg1;
- (BOOL)_priorRowIsSelectedFromRow:(long long)arg1 inSelection:(id)arg2;
- (void)_debugDrawRowNumberInCell:(id)arg1 withFrame:(struct CGRect)arg2 forRow:(long long)arg3;
- (id)_alternateAutoExpandImageForOutlineCell:(id)arg1 inRow:(long long)arg2 withFrame:(struct CGRect)arg3;
- (void)_sendDelegateWillDisplayCell:(id)arg1 forColumn:(id)arg2 row:(long long)arg3;
- (void)_sendBindingAdapterWillDisplayCell:(id)arg1 forColumn:(id)arg2 row:(long long)arg3;
- (id)_sendDelegateToolTipForCell:(id)arg1 tableColumn:(id)arg2 rect:(struct CGRect *)arg3 row:(long long)arg4 mouseLocation:(struct CGPoint)arg5;
- (BOOL)_delegateRespondsToGetToolTip;
- (BOOL)_sendDelegateShouldShowCellExpansionForColumn:(long long)arg1 row:(long long)arg2;
- (BOOL)_delegateRespondsToShouldShowCellExpansion;
- (void)_sendDelegateWillDisplayOutlineCell:(id)arg1 inOutlineTableColumnAtRow:(long long)arg2;
- (BOOL)_shouldCallWillDisplayOutlineCell;
- (void)_delegateWillDisplayOutlineCell:(id)arg1 forColumn:(id)arg2 row:(long long)arg3;
- (void)_delegateWillDisplayCell:(id)arg1 forColumn:(id)arg2 row:(long long)arg3;
- (void)_dataSourceSetValue:(id)arg1 forColumn:(id)arg2 row:(long long)arg3;
- (id)_dataSourceValueForColumn:(id)arg1 row:(long long)arg2;
- (long long)_dataSourceNumberOfChildrenOfItem:(id)arg1;
- (long long)_nonStaticNumberOfChildrenOfItem:(id)arg1;
- (long long)_staticNumberOfChildrenOfItem:(id)arg1;
- (void)_staticLoadChildrenForItem:(id)arg1 itemData:(id)arg2;
- (id)_makeAndCacheStaticDataForItem:(id)arg1;
- (id)_staticRowViewForRow:(long long)arg1;
- (BOOL)_shouldReuseViews;
- (void)setUsesStaticContents:(BOOL)arg1;
- (void)_staticTableViewDecodeRowsWithCoder:(id)arg1;
- (void)_staticTableViewEncodeRowsWithCoder:(id)arg1;
- (void)_setStaticItems:(id)arg1;
- (id)_staticItems;
- (id)_nonStaticDataSourceChild:(long long)arg1 ofItem:(id)arg2;
- (id)_staticDataSourceChild:(long long)arg1 ofItem:(id)arg2;
- (id)_staticItemDataChild:(long long)arg1 ofItemData:(id)arg2;
- (id)_staticDataForItem:(id)arg1;
- (id)child:(long long)arg1 ofItem:(id)arg2;
- (long long)numberOfChildrenOfItem:(id)arg1;
- (id)_dataSourceChild:(long long)arg1 ofItem:(id)arg2;
- (BOOL)_nonStaticDataSourceIsItemExpandable:(id)arg1;
- (BOOL)_staticDataSourceIsItemExpandable:(id)arg1;
- (BOOL)_dataSourceIsItemExpandable:(id)arg1;
- (void)_printDataSourceWarning;
- (BOOL)mouseTracker:(id)arg1 didStopTrackingWithEvent:(id)arg2;
- (BOOL)mouseTracker:(id)arg1 shouldContinueTrackingWithEvent:(id)arg2;
- (BOOL)mouseTracker:(id)arg1 shouldStartTrackingWithEvent:(id)arg2;
- (BOOL)_shouldIndentBackgroundRect;
- (BOOL)_canUseWhiteDisclosureTriangles;
- (void)keyDown:(id)arg1;
- (void)_handleRightArrowKeyWithChildren:(BOOL)arg1;
- (void)_handleLeftArrowKeyWithChildren:(BOOL)arg1;
- (struct __CFArray *)_newSelectedRowEntriesArrayIncludingExpandable:(BOOL)arg1 includingUnexpandable:(BOOL)arg2 withCurrentExpandState:(BOOL)arg3;
- (void)_doUserExpandOrCollapseOfItem:(id)arg1 isExpand:(BOOL)arg2 optionKeyWasDown:(BOOL)arg3;
- (void)_dropOverdrawBeforeAnimation;
- (void)_doExpandAnimation:(BOOL)arg1 forRow:(long long)arg2;
- (BOOL)_shouldDoExpandAnimationForRow:(long long)arg1;
- (void)_highlightOutlineCell:(id)arg1 highlight:(BOOL)arg2 withFrame:(struct CGRect)arg3 inView:(id)arg4;
- (void)_drawOutlineCell:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (void)mouseDown:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (BOOL)_isEditingRowAChildOfRowAtPoint:(struct CGPoint)arg1;
- (BOOL)_clickedInExpansionTriangle:(struct CGPoint)arg1;
- (void)_autoscrollForDraggingInfo:(id)arg1 timeDelta:(double)arg2;
- (long long)numberOfRows;
- (BOOL)_numberOfRowsIsValid;
- (long long)_uncachedNumberOfRows;
- (void)viewWillDraw;
- (void)_setAllowAnimationsToYes;
@property __weak id <NSOutlineViewDelegate> delegate;
@property __weak id <NSOutlineViewDataSource> dataSource;
- (void)_checkDataSource;
- (void)_postItemDidCollapseNotification:(id)arg1;
- (void)_postItemDidExpandNotification:(id)arg1;
- (void)_postItemWillCollapseNotification:(id)arg1;
- (void)_postItemWillExpandNotification:(id)arg1;
@property BOOL autoresizesOutlineColumn;
- (void)removeTableColumn:(id)arg1;
- (void)addTableColumn:(id)arg1;
@property NSTableColumn *outlineTableColumn;
- (void)_setOutlineTableColumn:(id)arg1;
@property BOOL indentationMarkerFollowsCell;
@property double indentationPerLevel;
- (void)reloadItem:(id)arg1 reloadChildren:(BOOL)arg2;
- (void)_staticRemoveAllChildrenForItemEntry:(id)arg1;
- (void)_updateDisclosureButtonAtRow:(long long)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)reloadItem:(id)arg1;
- (void)reloadData;
- (void)_resizeOutlineColumn;
- (void)_calcOutlineColumnWidth;
- (double)_originalOutlineColumnWidth;
- (void)_adjustSelectionForItemEntry:(id)arg1 numberOfRows:(long long)arg2 adjustFieldEditorIfNecessary:(BOOL)arg3;
- (id)_delegate_dataCellForTableColumn:(id)arg1 row:(long long)arg2;
- (BOOL)_sendShouldTrackCell:(id)arg1 forTableColumn:(id)arg2 row:(long long)arg3;
- (double)_sendDelegateHeightOfRow:(long long)arg1;
- (double)_sourceListGroupRowBottomSpacing;
- (BOOL)_delegateShouldReorderColumn:(long long)arg1 toColumn:(long long)arg2;
- (BOOL)_supportsVariableHeightRows;
- (void)_scrollFieldEditorToVisible:(id)arg1;
- (void)_adjustEditedCellLocation;
- (void)_endEditingIfEditedCellIsChildOfItemEntry:(id)arg1;
- (void)_collapseItem:(id)arg1 collapseChildren:(BOOL)arg2 clearExpandState:(BOOL)arg3;
- (void)_collapseRootEntry:(BOOL)arg1 clearExpandState:(BOOL)arg2;
- (void)collapseItem:(id)arg1 collapseChildren:(BOOL)arg2;
- (void)collapseItem:(id)arg1;
- (void)_batchCollapseItemsWithItemEntries:(struct __CFArray *)arg1 collapseChildren:(BOOL)arg2;
- (void)_batchCollapseItemsWithItemEntries:(struct __CFArray *)arg1 collapseChildren:(BOOL)arg2 clearExpandState:(BOOL)arg3;
- (void)_collapseItemEntry:(id)arg1 collapseChildren:(BOOL)arg2 clearExpandState:(BOOL)arg3;
- (void)_recursiveCollapseItemEntry:(id)arg1 collapseChildren:(BOOL)arg2 clearExpandState:(BOOL)arg3;
- (void)expandItem:(id)arg1 expandChildren:(BOOL)arg2;
- (BOOL)_shouldAnimateExpandCollapse;
- (void)_setAnimateExpandAndCollapse:(BOOL)arg1;
- (void)_setupAnimationsIfNeeded;
- (BOOL)_reallySwitchToNonViewBasedIfNeeded;
- (void)_switchToViewBasedIfNeeded;
- (BOOL)_shouldAnimateChanges;
- (void)expandItem:(id)arg1;
- (void)_batchExpandItemsWithItemEntries:(struct __CFArray *)arg1 expandChildren:(BOOL)arg2;
- (void)_expandItemEntry:(id)arg1 expandChildren:(BOOL)arg2;
- (BOOL)_staticItemWasExpanded:(id)arg1;
- (void)_staticSetItem:(id)arg1 isExpanded:(BOOL)arg2;
- (void)_restoreExpandedChildrenForItem:(id)arg1;
- (void)_expandItemEntry:(id)arg1 expandChildren:(BOOL)arg2 startLevel:(long long)arg3;
- (unsigned long long)_expandAnimation;
- (unsigned long long)_collapseAnimation;
- (void)_expandItemEntryChildren:(id)arg1 atStartLevel:(long long)arg2 expandChildren:(BOOL)arg3 andInvalidate:(BOOL)arg4;
- (long long)_numVisibleChildrenForEntry:(id)arg1;
- (BOOL)_shouldCollapseItem:(id)arg1;
- (BOOL)_shouldExpandItem:(id)arg1;
- (BOOL)_shouldContinueExpandAtLevel:(long long)arg1 beganAtLevel:(long long)arg2;
- (void)_redisplayAfterExpansionChangeFromRow:(long long)arg1 withOriginalRowCount:(long long)arg2;
- (BOOL)isExpandable:(id)arg1;
@property BOOL stronglyReferencesItems; // @dynamic stronglyReferencesItems;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (void)_initializeStaticRowViews;
- (id)initWithCoder:(id)arg1;
- (BOOL)_shouldEncodeUILayoutDirection;
- (void)_finishedTableViewInitWithCoder;
- (void)_finishedMakingConnections;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonInit;
@property long long userInterfaceLayoutDirection; // @dynamic userInterfaceLayoutDirection;
- (BOOL)_supportsRTL;
- (id)_disclosureTriangleButtonImageSorceID;
- (id)_tableViewColumnDidResizeNotificationName;
- (id)_selectionIsChangingNotificationName;
- (id)_selectionDidChangeNotificationName;
- (id)_didMoveNotificationName;
- (void)accessibilityPostNotification:(id)arg1 context:(id)arg2;
- (id)_accessibilityTableRow:(long long)arg1;
- (id)accessibilityRoleAttribute;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

