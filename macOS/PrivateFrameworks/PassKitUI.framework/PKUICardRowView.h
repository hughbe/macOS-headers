//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class NSImageView, NSTextField;

@interface PKUICardRowView : NSTableCellView
{
    NSImageView *_cardIcon;
    NSTextField *_cardLastDigits;
}

- (void).cxx_destruct;
@property(retain) NSTextField *cardLastDigits; // @synthesize cardLastDigits=_cardLastDigits;
@property(retain) NSImageView *cardIcon; // @synthesize cardIcon=_cardIcon;
- (void)setBackgroundStyle:(long long)arg1;

@end

