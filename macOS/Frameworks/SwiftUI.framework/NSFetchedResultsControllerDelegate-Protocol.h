//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SwiftUI/NSObject-Protocol.h>

@class NSDiffableDataSourceSnapshot, NSIndexPath, NSOrderedCollectionDifference, NSString;
@protocol NSFetchedResultsSectionInfo;

@protocol NSFetchedResultsControllerDelegate <NSObject>

@optional
- (NSString *)controller:(id)arg1 sectionIndexTitleForSectionName:(NSString *)arg2;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controllerWillChangeContent:(id)arg1;
- (void)controller:(id)arg1 didChangeSection:(id <NSFetchedResultsSectionInfo>)arg2 atIndex:(long long)arg3 forChangeType:(unsigned long long)arg4;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(NSIndexPath *)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(NSIndexPath *)arg5;
- (void)controller:(id)arg1 didChangeContentWithDifference:(NSOrderedCollectionDifference *)arg2;
- (void)controller:(id)arg1 didChangeContentWithSnapshot:(NSDiffableDataSourceSnapshot *)arg2;
@end

