//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSStackView.h>

@class NSArray, NSInspectorBar;

__attribute__((visibility("hidden")))
@interface __NSInspectorBarView : NSStackView
{
    NSInspectorBar *_inspectorBar;
}

@property NSInspectorBar *inspectorBar; // @synthesize inspectorBar=_inspectorBar;
- (BOOL)mouseDownCanMoveWindow;
- (void)addItem:(id)arg1;
@property(copy) NSArray *items;
- (void)removeItems;
- (id)accessibilityRoleAttribute;
- (BOOL)accessibilityIsIgnored;

@end

