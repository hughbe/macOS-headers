//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SASTTemplateItem-Protocol.h>

@class NSString, SAUIDecoratedText;

@interface SASTHeaderItem : AceObject <SASTTemplateItem>
{
}

+ (id)headerItemWithDictionary:(id)arg1 context:(id)arg2;
+ (id)headerItem;
@property(copy, nonatomic) NSString *text;
@property(retain, nonatomic) SAUIDecoratedText *subtitle;
@property(retain, nonatomic) SAUIDecoratedText *header;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

