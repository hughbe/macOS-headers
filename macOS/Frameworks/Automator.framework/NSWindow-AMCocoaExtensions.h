//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindow.h>

@interface NSWindow (AMCocoaExtensions)
- (struct CGPoint)am_convertPointToScreen:(struct CGPoint)arg1;
- (struct CGPoint)am_convertPointFromScreen:(struct CGPoint)arg1;
- (void)am_constrainToScreen:(id)arg1 adjustWidth:(BOOL)arg2 adjustHeight:(BOOL)arg3;
@end

