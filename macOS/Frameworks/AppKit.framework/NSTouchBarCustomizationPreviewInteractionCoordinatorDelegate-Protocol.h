//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSTouchBarCustomizationPreviewInteractionCoordinator, _NSTouchBarCustomizationDragRecord;

@protocol NSTouchBarCustomizationPreviewInteractionCoordinatorDelegate
- (void)coordinator:(NSTouchBarCustomizationPreviewInteractionCoordinator *)arg1 didCancelDrag:(_NSTouchBarCustomizationDragRecord *)arg2 isRemoval:(BOOL)arg3;
- (void)coordinator:(NSTouchBarCustomizationPreviewInteractionCoordinator *)arg1 didFinishDrag:(_NSTouchBarCustomizationDragRecord *)arg2 isRemoval:(BOOL)arg3;
- (void)coordinator:(NSTouchBarCustomizationPreviewInteractionCoordinator *)arg1 willFinishDrag:(_NSTouchBarCustomizationDragRecord *)arg2;
- (void)coordinator:(NSTouchBarCustomizationPreviewInteractionCoordinator *)arg1 didUpdateDrag:(_NSTouchBarCustomizationDragRecord *)arg2;
- (void)coordinator:(NSTouchBarCustomizationPreviewInteractionCoordinator *)arg1 didBeginDrag:(_NSTouchBarCustomizationDragRecord *)arg2 isInsertion:(BOOL)arg3;
@end

