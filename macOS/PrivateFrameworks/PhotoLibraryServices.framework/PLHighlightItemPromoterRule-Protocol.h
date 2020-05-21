//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class NSArray, NSSet;
@protocol PLHighlightItem;

@protocol PLHighlightItemPromoterRule <NSObject>
- (id <PLHighlightItem>)fallbackHighlightItemFromAllHighlightItems:(NSSet *)arg1;
- (NSArray *)highlightItemsSortedByImportance:(NSSet *)arg1;
- (BOOL)highlightItemHasMinimumRequirementToBePromoted:(id <PLHighlightItem>)arg1;
- (unsigned long long)maximumNumberOfHighlightItemsToPromote;
@end

