//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTextFieldCell.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NSTextFinderBarTextFieldCell : NSTextFieldCell
{
    NSTextFieldCell *statusCell;
}

- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)statusStringFieldRectForBounds:(struct CGRect)arg1;
- (struct CGRect)drawingRectForBounds:(struct CGRect)arg1;
@property(copy) NSString *statusString;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initTextCell:(id)arg1;
- (void)_commonTextFinderInit;

@end

