//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitMacHelper/UINSToolbarItem.h>

#import <UIKitMacHelper/UINSSearchFieldToolbarItem-Protocol.h>

@class NSString;
@protocol UINSAccessibilityInfo;

__attribute__((visibility("hidden")))
@interface UINSSearchFieldToolbarItem : UINSToolbarItem <UINSSearchFieldToolbarItem>
{
    BOOL _enabled;
    NSString *_text;
    NSString *_placeholder;
    CDUnknownBlockType _actionHandler;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void)action:(id)arg1;
- (void)prepareItem;
- (void)_updateText:(id)arg1;
- (id)initWithIdentifier:(id)arg1;

// Remaining properties
@property(copy, nonatomic) id <UINSAccessibilityInfo> accessibilityInfo;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(copy, nonatomic) NSString *label;

@end

