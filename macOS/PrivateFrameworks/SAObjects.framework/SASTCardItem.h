//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SASTTemplateItem-Protocol.h>

@class NSString, SAUIColor, SAUIDecoratedText;

@interface SASTCardItem : AceObject <SASTTemplateItem>
{
}

+ (id)cardItemWithDictionary:(id)arg1 context:(id)arg2;
+ (id)cardItem;
@property(retain, nonatomic) SAUIColor *titleTextColor;
@property(retain, nonatomic) SAUIColor *titleBackgroundColor;
@property(retain, nonatomic) SAUIDecoratedText *title;
@property(retain, nonatomic) SAUIColor *labelTextColor;
@property(retain, nonatomic) SAUIDecoratedText *label;
@property(retain, nonatomic) SAUIDecoratedText *footnote;
@property(retain, nonatomic) SAUIColor *backgroundColor;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

