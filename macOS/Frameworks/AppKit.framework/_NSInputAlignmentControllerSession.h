//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSInputAlignmentController, NSInputAlignmentFilter, _NSInputAlignmentItem;

@interface _NSInputAlignmentControllerSession : NSObject
{
    _NSInputAlignmentItem *_item;
    NSInputAlignmentController *_controller;
    NSArray *_alignmentGuidesAffectingItem;
    NSInputAlignmentFilter *_activeFilter;
}

- (id)alignItemUsingFilter:(id)arg1;
- (void)setAlignmentGuidesAffectingItem:(id)arg1;
- (id)initWithItem:(id)arg1 controller:(id)arg2;
- (void)dealloc;

@end

