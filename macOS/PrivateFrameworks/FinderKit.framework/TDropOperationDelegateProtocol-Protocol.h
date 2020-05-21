//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FinderKit/TNodeTaskDelegateProtocol-Protocol.h>

@class NSDraggingItem, NSView;
@protocol NSDraggingInfo;

@protocol TDropOperationDelegateProtocol <TNodeTaskDelegateProtocol>
- (_Bool)useSpecialInFlightAnimation;
- (void)offsetSpatialData:(struct IconSpatialData *)arg1;

@optional
- (NSView *)dropTargetViewForDraggingInfo:(id <NSDraggingInfo>)arg1;
- (void)receivePromiseDragNode:(const struct TFENode *)arg1 spatialData:(const struct IconSpatialData *)arg2;
- (void)calculateSpatialData:(struct IconSpatialData *)arg1 draggingItem:(NSDraggingItem *)arg2 forcePlace:(_Bool)arg3;
- (void)calculatePropertiesWithDrop:(struct TDropOperation *)arg1 forNode:(const struct TFENode *)arg2 withPasteboardItem:(void *)arg3 pbItemIndex:(unsigned long long)arg4 inPropertyList:(struct TFENodePropertyList *)arg5 forcePlace:(_Bool)arg6 applyNow:(_Bool)arg7;
@end

