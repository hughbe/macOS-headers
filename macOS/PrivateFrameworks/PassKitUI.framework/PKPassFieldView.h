//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSString, PKPassTextField;

@interface PKPassFieldView : NSView
{
    NSString *_key;
    PKPassTextField *_labelField;
    PKPassTextField *_valueField;
}

- (void).cxx_destruct;
@property(readonly) PKPassTextField *valueField; // @synthesize valueField=_valueField;
@property(readonly) PKPassTextField *labelField; // @synthesize labelField=_labelField;
@property(readonly) NSString *key; // @synthesize key=_key;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFieldType:(int)arg1 key:(id)arg2 label:(id)arg3 value:(id)arg4;
- (id)_textFieldWithValue:(id)arg1;

@end

