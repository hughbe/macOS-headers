//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTableView.h>

@class CalUISuggestionsField;

@interface CalUISuggestionsTable : NSTableView
{
    CalUISuggestionsField *_suggestionsField;
}

- (void).cxx_destruct;
@property __weak CalUISuggestionsField *suggestionsField; // @synthesize suggestionsField=_suggestionsField;
- (void)mouseDown:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseExited:(id)arg1;
- (BOOL)moveDown;
- (BOOL)moveUp;
- (void)selectRow:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

