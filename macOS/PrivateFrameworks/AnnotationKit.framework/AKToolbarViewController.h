//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class AKController;

@interface AKToolbarViewController : NSViewController
{
    AKController *_controller;
}

+ (BOOL)isOptionKeyPressed;
+ (unsigned long long)buttonTypeForToolbarButtonItemOfType:(unsigned long long)arg1;
+ (id)alternateImageForToolbarButtonItemOfType:(unsigned long long)arg1;
+ (id)imageForToolbarButtonItemOfType:(unsigned long long)arg1;
+ (id)_imageNameForToolbarButtonItemOfType:(unsigned long long)arg1;
+ (id)titleForToolbarButtonItemOfType:(unsigned long long)arg1;
+ (struct CGSize)minimumSize;
- (void).cxx_destruct;
@property __weak AKController *controller; // @synthesize controller=_controller;
- (id)_toolbarButtonItemOfType:(unsigned long long)arg1 style:(unsigned long long)arg2;
- (void)setStrokeColorUIDisplayToColor:(id)arg1;
- (void)setFillColorUIDisplayToColor:(id)arg1;
- (void)revalidateItems;
@property(readonly) BOOL isPresentingPopover;
- (void)teardown;
- (id)initWithController:(id)arg1;

@end

