//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSGestureRecognizer.h>

@class NSEvent;

@interface PXContextClickGestureRecognizer : NSGestureRecognizer
{
    NSEvent *_recognizedEvent;
    unsigned long long _cleanupEventType;
}

- (void).cxx_destruct;
- (void)reset;
- (void)rightMouseDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)popUpContextMenu:(id)arg1 forView:(id)arg2;

@end

