//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSButton.h>

@class NSImage;

__attribute__((visibility("hidden")))
@interface SwitchButtonWithAccessoryImage : NSButton
{
    NSImage *_accessoryImage;
}

+ (Class)cellClass;
- (void).cxx_destruct;
@property(copy, nonatomic) NSImage *accessoryImage; // @synthesize accessoryImage=_accessoryImage;
- (struct CGSize)intrinsicContentSize;
- (id)initWithTitle:(id)arg1 accessoryImage:(id)arg2;

@end

