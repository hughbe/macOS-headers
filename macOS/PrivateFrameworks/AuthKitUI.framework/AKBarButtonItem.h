//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSButton, NSString;

@interface AKBarButtonItem : NSObject
{
    NSButton *_barButton;
    NSString *_title;
    long long _style;
    SEL _action;
    id _target;
}

- (void).cxx_destruct;
@property __weak id target; // @synthesize target=_target;
@property SEL action; // @synthesize action=_action;
@property long long style; // @synthesize style=_style;
@property(copy) NSString *title; // @synthesize title=_title;
- (id)_createButton;
@property(getter=isEnabled) BOOL enabled;
- (id)initWithTitle:(id)arg1 style:(long long)arg2 target:(id)arg3 action:(SEL)arg4;

@end

