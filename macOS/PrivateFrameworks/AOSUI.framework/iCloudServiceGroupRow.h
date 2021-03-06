//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableRowView.h"

@class NSButton, NSDictionary, NSTextField;

@interface iCloudServiceGroupRow : NSTableRowView
{
    NSTextField *_nameFieldAlt;
    NSTextField *_statusField;
    NSButton *_optionsButton;
    BOOL _isRowEnabled;
    NSDictionary *_groupRowProperties;
}

+ (id)createFromNib;
@property(retain, nonatomic) NSDictionary *groupRowProperties; // @synthesize groupRowProperties=_groupRowProperties;
@property(setter=setRowEnabled:) BOOL isRowEnabled; // @synthesize isRowEnabled=_isRowEnabled;
- (BOOL)isFlipped;
- (void)optionsButtonPressed:(id)arg1;
- (int)openItemWithURL:(id)arg1 andParameterData:(id)arg2;
- (void)update;
- (void)doUpdate:(id)arg1;
- (void)updateOptionsButton;
- (BOOL)isRTL;

@end

