//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPrefCrossFadeView, NSPrefCrossFadeWindow, NSWindow;

@interface IASheetMorpher : NSObject
{
    NSPrefCrossFadeWindow *_hostSheet;
    NSPrefCrossFadeView *_crossFadeImageView;
}

- (void).cxx_destruct;
@property(retain) NSWindow *hostSheet; // @synthesize hostSheet=_hostSheet;
- (void)setContentView:(id)arg1 displayAndAnimate:(BOOL)arg2;
- (id)initWithHostSheet:(id)arg1;

@end

