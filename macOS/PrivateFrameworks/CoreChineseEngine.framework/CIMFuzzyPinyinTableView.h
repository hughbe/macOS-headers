//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTableView.h>

@class NSLayoutConstraint;

@interface CIMFuzzyPinyinTableView : NSTableView
{
    BOOL _tableWidthAdjusted;
    NSLayoutConstraint *_tableWidthConstraint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *tableWidthConstraint; // @synthesize tableWidthConstraint=_tableWidthConstraint;
@property(nonatomic) BOOL tableWidthAdjusted; // @synthesize tableWidthAdjusted=_tableWidthAdjusted;
- (void)adjustColumnWidth;

@end

