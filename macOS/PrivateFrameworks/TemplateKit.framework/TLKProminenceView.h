//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@interface TLKProminenceView : NSView
{
    unsigned long long _prominence;
}

+ (id)viewWithProminence:(unsigned long long)arg1;
@property(nonatomic) unsigned long long prominence; // @synthesize prominence=_prominence;
- (void)tlk_updateForAppearance:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)viewDidChangeEffectiveAppearance;
- (BOOL)allowsVibrancy;
- (id)initWithProminence:(unsigned long long)arg1;
- (id)init;

@end

