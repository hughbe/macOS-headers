//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTableView.h>

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface ODCEmptyMessageTableView : NSTableView
{
    NSAttributedString *_emptyListMsg;
    int _msgRow;
}

- (void)keyDown:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (void)awakeFromNib;
- (void)setMessageRow:(int)arg1;
- (void)setAttributedMesageForEmptyList:(id)arg1;
- (void)setMesageForEmptyList:(id)arg1;

@end

