//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FinderKit/TDraggingDestinationDelegate-Protocol.h>
#import <FinderKit/TSpringLoadingDestinationDelegate-Protocol.h>

@class NSView;
@protocol NSDraggingInfo;

@protocol TBrowserViewDelegate <TDraggingDestinationDelegate, TSpringLoadingDestinationDelegate>
- (void)getDropTargetNode:(struct TFENode *)arg1 fromDraggingInfo:(id <NSDraggingInfo>)arg2 inDropTargetView:(NSView *)arg3;
@end

