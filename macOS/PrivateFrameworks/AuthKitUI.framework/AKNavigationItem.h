//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AKBarButtonItem, NSString;

@interface AKNavigationItem : NSObject
{
    NSString *_title;
    AKBarButtonItem *_rightBarButtonItem;
}

- (void).cxx_destruct;
@property(retain) AKBarButtonItem *rightBarButtonItem; // @synthesize rightBarButtonItem=_rightBarButtonItem;
@property(copy) NSString *title; // @synthesize title=_title;
- (id)initWithTitle:(id)arg1;
- (id)init;

@end

