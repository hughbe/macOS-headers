//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAIntentGroupSettingSnippetTemplate.h>

@protocol SAServerBoundCommand;

@interface SAIntentGroupChoiceSettingSnippetTemplate : SAIntentGroupSettingSnippetTemplate
{
}

+ (id)choiceSettingSnippetTemplateWithDictionary:(id)arg1 context:(id)arg2;
+ (id)choiceSettingSnippetTemplate;
@property(retain, nonatomic) id <SAServerBoundCommand> updateSlotCommand;
@property(nonatomic) BOOL selected;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

