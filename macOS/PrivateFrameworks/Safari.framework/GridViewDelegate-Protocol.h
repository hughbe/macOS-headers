//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class GridView, NSIndexSet;
@protocol NSDraggingInfo;

@protocol GridViewDelegate <NSObject>

@optional
- (unsigned long long)gridView:(GridView *)arg1 indexOfCellReplacedByDrop:(id <NSDraggingInfo>)arg2;
- (NSIndexSet *)indexesOfCellsWithFixedLocationDuringDraggingInGridView:(GridView *)arg1;
- (void)gridView:(GridView *)arg1 willDragCellAtIndex:(unsigned long long)arg2;
- (void)gridView:(GridView *)arg1 didSelectCellAtIndex:(unsigned long long)arg2;
@end

