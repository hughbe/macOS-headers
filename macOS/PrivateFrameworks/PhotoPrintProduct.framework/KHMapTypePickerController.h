//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UXKit/UXViewController.h>

@class KHFrame, NSPopUpButton, NSTextField;

@interface KHMapTypePickerController : UXViewController
{
    KHFrame *_mapFrame;
    NSTextField *_mapTypeLabel;
    NSPopUpButton *_mapTypeButton;
}

- (void).cxx_destruct;
@property(retain) NSPopUpButton *mapTypeButton; // @synthesize mapTypeButton=_mapTypeButton;
@property(retain) NSTextField *mapTypeLabel; // @synthesize mapTypeLabel=_mapTypeLabel;
@property(retain, nonatomic) KHFrame *mapFrame; // @synthesize mapFrame=_mapFrame;
- (void)mapTypeChanged:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)loadView;
- (void)dealloc;

@end

