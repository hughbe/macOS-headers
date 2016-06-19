//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSClipView, NSColor, NSEvent, NSImage, NSMapTable, NSMatrix, NSMutableArray, NSString, _NSBrowserColumnScrollHelper, _NSBrowserDragSourceContext, _NSBrowserDropDestContext, _NSBrowserScrollView, _NSTypeSelectData;

@interface _NSBrowserAuxiliary : NSObject
{
    _NSBrowserScrollView *_scrollViewForColumns;
    NSClipView *_clipViewForTitles;
    _NSBrowserColumnScrollHelper *_scrollToPointHelper;
    long long _scrollNotificationDisableCount;
    long long _columnAnimationDisabledCount;
    NSMatrix *_handlingViewSingleActionForView;
    NSEvent *_eventBeforeHandlingSingleActionForView;
    double _preferedColumnWidthToArchive;
    NSMutableArray *_visitedColumnContentWidths;
    long long _columnResizingNotificationDisabledCount;
    unsigned long long _columnResizingType;
    NSString *_columnsAutosaveName;
    struct __BrFlags2 {
        unsigned int delegateShouldSizeColumnToWidth:1;
        unsigned int delegateSizeToFitWidtOfColumn:1;
        unsigned int shouldAnimateColumnScrolling:1;
        unsigned int tilingDisabled:1;
        unsigned int setPathOptimizationOn:1;
        unsigned int readingSavedColumns:1;
        unsigned int recomputeExistingColumnPositions:1;
        unsigned int waitingToSendDoubleActionAtEndOfScroll:1;
        unsigned int waitingToSendSingleActionAtEndOfScroll:1;
        unsigned int waitingToSendConfigChangeNotificationAtEndOfScroll:1;
        unsigned int continuousResizeNotifications:1;
        unsigned int sendDoubleAction:1;
        unsigned int forceSynchronizedScrollingAnimation:1;
        unsigned int useCustomBorderType:1;
        unsigned int customBorderType:3;
        unsigned int addingNewColumn:1;
        unsigned int userColumnResizingAutoresizesWindow:1;
        unsigned int delegateProvidesItems:1;
        unsigned int isAutoExpandingItems:1;
        unsigned int delegateProvidesLeafViewController:1;
        unsigned int delegateProvidesHeaderViewController:1;
        unsigned int delegateDidChangeLastColumn:1;
        unsigned int delegateRootItemForBrowser:1;
        unsigned int forwardTypeSelectionToNextColumn:1;
        unsigned int reloadingColumnZero:1;
        unsigned int allowsDelegateSizingForUserResize:1;
        unsigned int reserved:4;
    } _brFlags2;
    NSMutableArray *_unusedColumns;
    unsigned long long _draggingSourceOperationMaskForLocal;
    unsigned long long _draggingSourceOperationMaskForNonLocal;
    _NSBrowserDropDestContext *_dropContext;
    _NSBrowserDragSourceContext *_dragSourceContext;
    _NSTypeSelectData *_typeSelectData;
    NSColor *_backgroundColor;
    long long _clickedColumn;
    long long _clickedRow;
    NSMutableArray *_autoExpandOriginalSelection;
    NSMutableArray *_autoExpandingLastSelectedItems;
    id _autoExpandDraggingSource;
    NSMutableArray *_columnControllers;
    NSImage *_emptyVerticalSrollerImageCache;
    void *_reserved;
    NSMapTable *_leafItemViewControllerByItem;
    double _rowHeight;
    unsigned long long _disableUpdatesToken;
    struct NSEdgeInsets _contentInsets;
}

@end

