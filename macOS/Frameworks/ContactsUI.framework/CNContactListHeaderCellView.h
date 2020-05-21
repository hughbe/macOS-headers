//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class NSArray, NSTextField;

@interface CNContactListHeaderCellView : NSTableCellView
{
    NSTextField *_headerTextField;
    NSArray *_customConstraints;
}

- (void).cxx_destruct;
@property(retain) NSArray *customConstraints; // @synthesize customConstraints=_customConstraints;
@property(retain) NSTextField *headerTextField; // @synthesize headerTextField=_headerTextField;
- (id)metrics;
- (id)views;
- (void)updateConstraints;
- (void)setHeader:(id)arg1;
- (void)awakeFromNib;

@end

