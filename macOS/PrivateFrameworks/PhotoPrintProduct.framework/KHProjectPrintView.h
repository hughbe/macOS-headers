//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class KHProject;

@interface KHProjectPrintView : NSView
{
    KHProject *_project;
    long long _currentPage;
}

- (void).cxx_destruct;
- (struct CGRect)_rectForPage:(long long)arg1 inProject:(id)arg2;
- (double)_scalingFactor;
- (id)_newComponentGeneratorForPage:(unsigned long long)arg1 inProject:(id)arg2;
- (id)_componentsForProject:(id)arg1;
- (struct CGRect)rectForPage:(long long)arg1;
- (BOOL)knowsPageRange:(struct _NSRange *)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithProject:(id)arg1;

@end

