//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AKPageController;

@interface _AKInkOverlayDrawingUndoTarget : NSObject
{
    AKPageController *_pageController;
}

- (void).cxx_destruct;
@property __weak AKPageController *pageController; // @synthesize pageController=_pageController;
- (void)performUndo:(id)arg1;
- (id)initWithPageController:(id)arg1;

@end

