//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class MapDragRadiusView;

@interface MapDragHandleView : NSView
{
    MapDragRadiusView *_radView;
}

- (void).cxx_destruct;
@property __weak MapDragRadiusView *radView; // @synthesize radView=_radView;
- (void)updateLayer;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

