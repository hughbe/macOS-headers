//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTextFieldCell.h>

@class NSTextView;

@interface CalUITextFieldCell : NSTextFieldCell
{
    NSTextView *_fieldEditor;
}

- (void).cxx_destruct;
@property(retain) NSTextView *fieldEditor; // @synthesize fieldEditor=_fieldEditor;
- (id)fieldEditorForView:(id)arg1;
- (void)configureWithFont:(id)arg1 textColor:(id)arg2 linkColor:(id)arg3;
- (id)init;

@end

