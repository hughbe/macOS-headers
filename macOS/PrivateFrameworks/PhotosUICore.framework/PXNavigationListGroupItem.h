//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXNavigationListItem.h>

@interface PXNavigationListGroupItem : PXNavigationListItem
{
    BOOL _group;
    BOOL _draggable;
    BOOL _expandable;
}

+ (id)titleForIdentifier:(id)arg1;
- (BOOL)isExpandable;
- (BOOL)isDraggable;
- (BOOL)isGroup;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1;

@end

