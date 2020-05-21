//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMapTable, NSView, _NSTouchBarCustomizationDragRecord;
@protocol NSTouchBarCustomizationPreviewInteractionCoordinatorDelegate;

__attribute__((visibility("hidden")))
@interface NSTouchBarCustomizationPreviewInteractionCoordinator : NSObject
{
    NSView *_referenceCoordinateSpace;
    id <NSTouchBarCustomizationPreviewInteractionCoordinatorDelegate> _delegate;
    NSMapTable *_dragRecords;
    _NSTouchBarCustomizationDragRecord *_cursorDragRecord;
    NSDate *_interactionStartTime;
}

@property(copy) NSDate *interactionStartTime; // @synthesize interactionStartTime=_interactionStartTime;
@property(readonly) _NSTouchBarCustomizationDragRecord *cursorDragRecord; // @synthesize cursorDragRecord=_cursorDragRecord;
- (void)cancelDragOfItem:(id)arg1 isRemoval:(BOOL)arg2;
- (void)endDragOfItem:(id)arg1 isRemoval:(BOOL)arg2;
- (void)updateDragOfItem:(id)arg1 toPoint:(struct CGPoint)arg2;
- (id)beginDragOfItem:(id)arg1 anchorPoint:(struct CGPoint)arg2 dragType:(long long)arg3 atPoint:(struct CGPoint)arg4 isInsertion:(BOOL)arg5;
- (id)dragRecordForItem:(id)arg1;
- (BOOL)isItemBeingDragged:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 referenceCoordinateSpace:(id)arg2;

@end

