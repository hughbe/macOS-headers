//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <Mondrian/NSWindowDelegate-Protocol.h>

@class MOMonitoringController, MOUIProgressBar, NSString, NSTextField;

@interface MOMonitoringPanelController : NSWindowController <NSWindowDelegate>
{
    MOMonitoringController *_monitoringController;
    MOUIProgressBar *_frameRateProgressBar;
    NSTextField *_frameRateTextField;
    NSTextField *_lowFrameRateTextField;
    NSTextField *_processCPUUsageTextField;
    NSTextField *_systemCPUUsageTextField;
    NSTextField *_diskBytesReadTextField;
    NSTextField *_diskBytesWriteTextField;
    NSTextField *_processAnonymousSizeTextField;
    NSTextField *_processPurgeableSizeTextField;
    NSTextField *_physicalMemoryFreeTextField;
    NSTextField *_physicalMemoryUsedTextField;
    NSTextField *_vmPageOutTextField;
    NSTextField *_vmCompressorTextField;
    NSTextField *_numberOfItemsTextField;
    NSTextField *_numberOfSectionsTextField;
    NSTextField *_indexPathsForItemsInRectAverageDurationTextField;
    NSTextField *_indexPathsForItemsInRectMaximumDurationTextField;
    NSTextField *_prefetchLowThumbnailsPreparationAverageDurationTextField;
    NSTextField *_prefetchLowThumbnailsPreparationMaximumDurationTextField;
    NSTextField *_numberOfVisibleCellsTextField;
    NSTextField *_numberOfContentCellsTextField;
    NSTextField *_numberOfSelectedCellsTextField;
    NSTextField *_numberOfEmptyCellsTextField;
    NSTextField *_numberOfRecentEmptyCellsTextField;
    NSTextField *_numberOfLowCellOperationsTextField;
    NSTextField *_lastNumberOfLowCellOperationsTextField;
    NSTextField *_numberOfBestCellOperationsTextField;
    NSTextField *_lastNumberOfBestCellOperationsTextField;
    NSTextField *_numberOfLowPrefetchOperationsTextField;
    NSTextField *_lastNumberOfLowPrefetchOperationsTextField;
    NSTextField *_numberOfBestPrefetchOperationsTextField;
    NSTextField *_lastNumberOfBestPrefetchOperationsTextField;
    NSTextField *_lowCellOperationAverageDurationTextField;
    NSTextField *_lowCellOperationMaximumDurationTextField;
    NSTextField *_bestCellOperationAverageDurationTextField;
    NSTextField *_bestCellOperationMaximumDurationTextField;
    NSTextField *_lowPrefetchOperationAverageDurationTextField;
    NSTextField *_lowPrefetchOperationMaximumDurationTextField;
    NSTextField *_bestPrefetchOperationAverageDurationTextField;
    NSTextField *_bestPrefetchOperationMaximumDurationTextField;
    NSTextField *_lowThumbnailGenerationAverageDurationTextField;
    NSTextField *_lowThumbnailGenerationMaximumDurationTextField;
    NSTextField *_bestThumbnailGenerationAverageDurationTextField;
    NSTextField *_bestThumbnailGenerationMaximumDurationTextField;
    NSTextField *_rescheduleThumbnailCellOperationsAverageDurationTextField;
    NSTextField *_rescheduleThumbnailCellOperationsMaximumDurationTextField;
    NSTextField *_numberOfSectionsMemoryCacheAvailableSlotsTextField;
    NSTextField *_numberOfSectionsMemoryCacheUsedSlotTextField;
    NSTextField *_numberOfItemsMemoryCacheAvailableSlotsTextField;
    NSTextField *_numberOfItemsMemoryCacheUsedSlotsTextField;
    NSTextField *_numberOfLowThumbnailsMemoryCacheAvailableSlotsTextField;
    NSTextField *_numberOfLowThumbnailsMemoryCacheAvailableSlotsSizeTextField;
    NSTextField *_numberOfLowThumbnailsMemoryCacheUsedSlotTextField;
    NSTextField *_numberOfBestThumbnailsMemoryCacheAvailableSlotsTextField;
    NSTextField *_numberOfBestThumbnailsMemoryCacheAvailableSlotsSizeTextField;
    NSTextField *_numberOfBestThumbnailsMemoryCacheUsedSlotsTextField;
    NSTextField *_lowThumbnailsMemoryCacheGetAverageDurationTextField;
    NSTextField *_lowThumbnailsMemoryCacheGetMaximumDurationTextField;
    NSTextField *_lowThumbnailsMemoryCacheSetAverageDurationTextField;
    NSTextField *_lowThumbnailsMemoryCacheSetMaximumDurationTextField;
    NSTextField *_bestThumbnailsMemoryCacheGetAverageDurationTextField;
    NSTextField *_bestThumbnailsMemoryCacheGetMaximumDurationTextField;
    NSTextField *_bestThumbnailsMemoryCacheSetAverageDurationTextField;
    NSTextField *_bestThumbnailsMemoryCacheSetMaximumDurationTextField;
}

+ (id)panelControllerForMonitoringController:(id)arg1;
- (void).cxx_destruct;
@property(retain) NSTextField *bestThumbnailsMemoryCacheSetMaximumDurationTextField; // @synthesize bestThumbnailsMemoryCacheSetMaximumDurationTextField=_bestThumbnailsMemoryCacheSetMaximumDurationTextField;
@property(retain) NSTextField *bestThumbnailsMemoryCacheSetAverageDurationTextField; // @synthesize bestThumbnailsMemoryCacheSetAverageDurationTextField=_bestThumbnailsMemoryCacheSetAverageDurationTextField;
@property(retain) NSTextField *bestThumbnailsMemoryCacheGetMaximumDurationTextField; // @synthesize bestThumbnailsMemoryCacheGetMaximumDurationTextField=_bestThumbnailsMemoryCacheGetMaximumDurationTextField;
@property(retain) NSTextField *bestThumbnailsMemoryCacheGetAverageDurationTextField; // @synthesize bestThumbnailsMemoryCacheGetAverageDurationTextField=_bestThumbnailsMemoryCacheGetAverageDurationTextField;
@property(retain) NSTextField *lowThumbnailsMemoryCacheSetMaximumDurationTextField; // @synthesize lowThumbnailsMemoryCacheSetMaximumDurationTextField=_lowThumbnailsMemoryCacheSetMaximumDurationTextField;
@property(retain) NSTextField *lowThumbnailsMemoryCacheSetAverageDurationTextField; // @synthesize lowThumbnailsMemoryCacheSetAverageDurationTextField=_lowThumbnailsMemoryCacheSetAverageDurationTextField;
@property(retain) NSTextField *lowThumbnailsMemoryCacheGetMaximumDurationTextField; // @synthesize lowThumbnailsMemoryCacheGetMaximumDurationTextField=_lowThumbnailsMemoryCacheGetMaximumDurationTextField;
@property(retain) NSTextField *lowThumbnailsMemoryCacheGetAverageDurationTextField; // @synthesize lowThumbnailsMemoryCacheGetAverageDurationTextField=_lowThumbnailsMemoryCacheGetAverageDurationTextField;
@property(retain) NSTextField *numberOfBestThumbnailsMemoryCacheUsedSlotsTextField; // @synthesize numberOfBestThumbnailsMemoryCacheUsedSlotsTextField=_numberOfBestThumbnailsMemoryCacheUsedSlotsTextField;
@property(retain) NSTextField *numberOfBestThumbnailsMemoryCacheAvailableSlotsSizeTextField; // @synthesize numberOfBestThumbnailsMemoryCacheAvailableSlotsSizeTextField=_numberOfBestThumbnailsMemoryCacheAvailableSlotsSizeTextField;
@property(retain) NSTextField *numberOfBestThumbnailsMemoryCacheAvailableSlotsTextField; // @synthesize numberOfBestThumbnailsMemoryCacheAvailableSlotsTextField=_numberOfBestThumbnailsMemoryCacheAvailableSlotsTextField;
@property(retain) NSTextField *numberOfLowThumbnailsMemoryCacheUsedSlotTextField; // @synthesize numberOfLowThumbnailsMemoryCacheUsedSlotTextField=_numberOfLowThumbnailsMemoryCacheUsedSlotTextField;
@property(retain) NSTextField *numberOfLowThumbnailsMemoryCacheAvailableSlotsSizeTextField; // @synthesize numberOfLowThumbnailsMemoryCacheAvailableSlotsSizeTextField=_numberOfLowThumbnailsMemoryCacheAvailableSlotsSizeTextField;
@property(retain) NSTextField *numberOfLowThumbnailsMemoryCacheAvailableSlotsTextField; // @synthesize numberOfLowThumbnailsMemoryCacheAvailableSlotsTextField=_numberOfLowThumbnailsMemoryCacheAvailableSlotsTextField;
@property(retain) NSTextField *numberOfItemsMemoryCacheUsedSlotsTextField; // @synthesize numberOfItemsMemoryCacheUsedSlotsTextField=_numberOfItemsMemoryCacheUsedSlotsTextField;
@property(retain) NSTextField *numberOfItemsMemoryCacheAvailableSlotsTextField; // @synthesize numberOfItemsMemoryCacheAvailableSlotsTextField=_numberOfItemsMemoryCacheAvailableSlotsTextField;
@property(retain) NSTextField *numberOfSectionsMemoryCacheUsedSlotTextField; // @synthesize numberOfSectionsMemoryCacheUsedSlotTextField=_numberOfSectionsMemoryCacheUsedSlotTextField;
@property(retain) NSTextField *numberOfSectionsMemoryCacheAvailableSlotsTextField; // @synthesize numberOfSectionsMemoryCacheAvailableSlotsTextField=_numberOfSectionsMemoryCacheAvailableSlotsTextField;
@property(retain) NSTextField *rescheduleThumbnailCellOperationsMaximumDurationTextField; // @synthesize rescheduleThumbnailCellOperationsMaximumDurationTextField=_rescheduleThumbnailCellOperationsMaximumDurationTextField;
@property(retain) NSTextField *rescheduleThumbnailCellOperationsAverageDurationTextField; // @synthesize rescheduleThumbnailCellOperationsAverageDurationTextField=_rescheduleThumbnailCellOperationsAverageDurationTextField;
@property(retain) NSTextField *bestThumbnailGenerationMaximumDurationTextField; // @synthesize bestThumbnailGenerationMaximumDurationTextField=_bestThumbnailGenerationMaximumDurationTextField;
@property(retain) NSTextField *bestThumbnailGenerationAverageDurationTextField; // @synthesize bestThumbnailGenerationAverageDurationTextField=_bestThumbnailGenerationAverageDurationTextField;
@property(retain) NSTextField *lowThumbnailGenerationMaximumDurationTextField; // @synthesize lowThumbnailGenerationMaximumDurationTextField=_lowThumbnailGenerationMaximumDurationTextField;
@property(retain) NSTextField *lowThumbnailGenerationAverageDurationTextField; // @synthesize lowThumbnailGenerationAverageDurationTextField=_lowThumbnailGenerationAverageDurationTextField;
@property(retain) NSTextField *bestPrefetchOperationMaximumDurationTextField; // @synthesize bestPrefetchOperationMaximumDurationTextField=_bestPrefetchOperationMaximumDurationTextField;
@property(retain) NSTextField *bestPrefetchOperationAverageDurationTextField; // @synthesize bestPrefetchOperationAverageDurationTextField=_bestPrefetchOperationAverageDurationTextField;
@property(retain) NSTextField *lowPrefetchOperationMaximumDurationTextField; // @synthesize lowPrefetchOperationMaximumDurationTextField=_lowPrefetchOperationMaximumDurationTextField;
@property(retain) NSTextField *lowPrefetchOperationAverageDurationTextField; // @synthesize lowPrefetchOperationAverageDurationTextField=_lowPrefetchOperationAverageDurationTextField;
@property(retain) NSTextField *bestCellOperationMaximumDurationTextField; // @synthesize bestCellOperationMaximumDurationTextField=_bestCellOperationMaximumDurationTextField;
@property(retain) NSTextField *bestCellOperationAverageDurationTextField; // @synthesize bestCellOperationAverageDurationTextField=_bestCellOperationAverageDurationTextField;
@property(retain) NSTextField *lowCellOperationMaximumDurationTextField; // @synthesize lowCellOperationMaximumDurationTextField=_lowCellOperationMaximumDurationTextField;
@property(retain) NSTextField *lowCellOperationAverageDurationTextField; // @synthesize lowCellOperationAverageDurationTextField=_lowCellOperationAverageDurationTextField;
@property(retain) NSTextField *lastNumberOfBestPrefetchOperationsTextField; // @synthesize lastNumberOfBestPrefetchOperationsTextField=_lastNumberOfBestPrefetchOperationsTextField;
@property(retain) NSTextField *numberOfBestPrefetchOperationsTextField; // @synthesize numberOfBestPrefetchOperationsTextField=_numberOfBestPrefetchOperationsTextField;
@property(retain) NSTextField *lastNumberOfLowPrefetchOperationsTextField; // @synthesize lastNumberOfLowPrefetchOperationsTextField=_lastNumberOfLowPrefetchOperationsTextField;
@property(retain) NSTextField *numberOfLowPrefetchOperationsTextField; // @synthesize numberOfLowPrefetchOperationsTextField=_numberOfLowPrefetchOperationsTextField;
@property(retain) NSTextField *lastNumberOfBestCellOperationsTextField; // @synthesize lastNumberOfBestCellOperationsTextField=_lastNumberOfBestCellOperationsTextField;
@property(retain) NSTextField *numberOfBestCellOperationsTextField; // @synthesize numberOfBestCellOperationsTextField=_numberOfBestCellOperationsTextField;
@property(retain) NSTextField *lastNumberOfLowCellOperationsTextField; // @synthesize lastNumberOfLowCellOperationsTextField=_lastNumberOfLowCellOperationsTextField;
@property(retain) NSTextField *numberOfLowCellOperationsTextField; // @synthesize numberOfLowCellOperationsTextField=_numberOfLowCellOperationsTextField;
@property(retain) NSTextField *numberOfRecentEmptyCellsTextField; // @synthesize numberOfRecentEmptyCellsTextField=_numberOfRecentEmptyCellsTextField;
@property(retain) NSTextField *numberOfEmptyCellsTextField; // @synthesize numberOfEmptyCellsTextField=_numberOfEmptyCellsTextField;
@property(retain) NSTextField *numberOfSelectedCellsTextField; // @synthesize numberOfSelectedCellsTextField=_numberOfSelectedCellsTextField;
@property(retain) NSTextField *numberOfContentCellsTextField; // @synthesize numberOfContentCellsTextField=_numberOfContentCellsTextField;
@property(retain) NSTextField *numberOfVisibleCellsTextField; // @synthesize numberOfVisibleCellsTextField=_numberOfVisibleCellsTextField;
@property(retain) NSTextField *prefetchLowThumbnailsPreparationMaximumDurationTextField; // @synthesize prefetchLowThumbnailsPreparationMaximumDurationTextField=_prefetchLowThumbnailsPreparationMaximumDurationTextField;
@property(retain) NSTextField *prefetchLowThumbnailsPreparationAverageDurationTextField; // @synthesize prefetchLowThumbnailsPreparationAverageDurationTextField=_prefetchLowThumbnailsPreparationAverageDurationTextField;
@property(retain) NSTextField *indexPathsForItemsInRectMaximumDurationTextField; // @synthesize indexPathsForItemsInRectMaximumDurationTextField=_indexPathsForItemsInRectMaximumDurationTextField;
@property(retain) NSTextField *indexPathsForItemsInRectAverageDurationTextField; // @synthesize indexPathsForItemsInRectAverageDurationTextField=_indexPathsForItemsInRectAverageDurationTextField;
@property(retain) NSTextField *numberOfSectionsTextField; // @synthesize numberOfSectionsTextField=_numberOfSectionsTextField;
@property(retain) NSTextField *numberOfItemsTextField; // @synthesize numberOfItemsTextField=_numberOfItemsTextField;
@property(retain) NSTextField *vmCompressorTextField; // @synthesize vmCompressorTextField=_vmCompressorTextField;
@property(retain) NSTextField *vmPageOutTextField; // @synthesize vmPageOutTextField=_vmPageOutTextField;
@property(retain) NSTextField *physicalMemoryUsedTextField; // @synthesize physicalMemoryUsedTextField=_physicalMemoryUsedTextField;
@property(retain) NSTextField *physicalMemoryFreeTextField; // @synthesize physicalMemoryFreeTextField=_physicalMemoryFreeTextField;
@property(retain) NSTextField *processPurgeableSizeTextField; // @synthesize processPurgeableSizeTextField=_processPurgeableSizeTextField;
@property(retain) NSTextField *processAnonymousSizeTextField; // @synthesize processAnonymousSizeTextField=_processAnonymousSizeTextField;
@property(retain) NSTextField *diskBytesWriteTextField; // @synthesize diskBytesWriteTextField=_diskBytesWriteTextField;
@property(retain) NSTextField *diskBytesReadTextField; // @synthesize diskBytesReadTextField=_diskBytesReadTextField;
@property(retain) NSTextField *systemCPUUsageTextField; // @synthesize systemCPUUsageTextField=_systemCPUUsageTextField;
@property(retain) NSTextField *processCPUUsageTextField; // @synthesize processCPUUsageTextField=_processCPUUsageTextField;
@property(retain) NSTextField *lowFrameRateTextField; // @synthesize lowFrameRateTextField=_lowFrameRateTextField;
@property(retain) NSTextField *frameRateTextField; // @synthesize frameRateTextField=_frameRateTextField;
@property(retain) MOUIProgressBar *frameRateProgressBar; // @synthesize frameRateProgressBar=_frameRateProgressBar;
@property(nonatomic) __weak MOMonitoringController *monitoringController; // @synthesize monitoringController=_monitoringController;
- (void)updateWithMeasurements:(id)arg1;
- (id)_convertBytesToBestReadableFormat:(double)arg1;
- (BOOL)isVisible;
- (void)windowWillClose:(id)arg1;
- (void)close:(id)arg1;
- (void)open:(id)arg1;
- (void)windowDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

