//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSTextField;

@interface PRSColumnsSliceView : NSView
{
    NSTextField *_titleTextField;
}

@property NSTextField *titleTextField; // @synthesize titleTextField=_titleTextField;
- (void)removeTitle;
- (id)columnTextFieldAtIndex:(unsigned long long)arg1;
- (unsigned long long)columnCount;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

