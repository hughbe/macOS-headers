//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SASTTemplateItem-Protocol.h>

@class NSString, SAUIDecoratedText;

@interface SASTSpecificAnswerItem : AceObject <SASTTemplateItem>
{
}

+ (id)specificAnswerItemWithDictionary:(id)arg1 context:(id)arg2;
+ (id)specificAnswerItem;
@property(copy, nonatomic) NSString *value;
@property(copy, nonatomic) NSString *footer;
@property(retain, nonatomic) SAUIDecoratedText *decoratedValue;
@property(retain, nonatomic) SAUIDecoratedText *decoratedFooter;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

