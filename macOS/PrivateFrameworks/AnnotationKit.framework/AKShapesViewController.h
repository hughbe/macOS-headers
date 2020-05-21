//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class AKController, AKShapesGridViewController, NSButton, NSStackView;

@interface AKShapesViewController : NSViewController
{
    AKController *_controller;
    CDUnknownBlockType _actionBlock;
    NSStackView *_stackView;
    AKShapesGridViewController *_shapesPicker;
    NSButton *_maskButton;
    NSButton *_loupeButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSButton *loupeButton; // @synthesize loupeButton=_loupeButton;
@property(retain, nonatomic) NSButton *maskButton; // @synthesize maskButton=_maskButton;
@property(retain) AKShapesGridViewController *shapesPicker; // @synthesize shapesPicker=_shapesPicker;
@property(retain) NSStackView *stackView; // @synthesize stackView=_stackView;
@property(copy) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property __weak AKController *controller; // @synthesize controller=_controller;
- (void)_validateItems;
- (id)_separatorView;
- (void)_performAction:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithController:(id)arg1;

@end

