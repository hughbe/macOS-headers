//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UXView, UXViewController;

@interface KHEditorTitleContext : NSObject
{
    NSString *_title;
    NSString *_subtitle;
    NSString *_detailTitle;
    NSString *_toolTip;
    UXViewController *_titleAccessoryViewController;
    UXView *_titleAccessoryView;
}

+ (id)contextWithTitle:(id)arg1 subtitle:(id)arg2 detailTitle:(id)arg3 toolTip:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) UXView *titleAccessoryView; // @synthesize titleAccessoryView=_titleAccessoryView;
@property(retain, nonatomic) UXViewController *titleAccessoryViewController; // @synthesize titleAccessoryViewController=_titleAccessoryViewController;
@property(retain, nonatomic) NSString *toolTip; // @synthesize toolTip=_toolTip;
@property(retain, nonatomic) NSString *detailTitle; // @synthesize detailTitle=_detailTitle;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;

@end

