//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class NSButton, NSImageView, NSTextField;

@interface PKUICredentialRowView : NSTableCellView
{
    NSImageView *_cardIcon;
    NSTextField *_cardLastDigits;
    NSButton *_cardSelected;
}

- (void).cxx_destruct;
@property __weak NSButton *cardSelected; // @synthesize cardSelected=_cardSelected;
@property __weak NSTextField *cardLastDigits; // @synthesize cardLastDigits=_cardLastDigits;
@property __weak NSImageView *cardIcon; // @synthesize cardIcon=_cardIcon;
- (void)setBackgroundStyle:(long long)arg1;

@end

