//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

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

