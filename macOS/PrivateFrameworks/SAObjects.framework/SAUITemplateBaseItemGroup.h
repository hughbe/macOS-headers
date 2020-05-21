//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAUITemplateBaseItem.h>

#import <SAObjects/SAUITemplateItemGroup-Protocol.h>

@class NSArray, NSString, SAUITemplateEdgeInsets;

@interface SAUITemplateBaseItemGroup : SAUITemplateBaseItem <SAUITemplateItemGroup>
{
}

+ (id)baseItemGroupWithDictionary:(id)arg1 context:(id)arg2;
+ (id)baseItemGroup;
@property(copy, nonatomic) NSArray *templateItems;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(copy, nonatomic) NSArray *communicationOptions; // @dynamic communicationOptions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) SAUITemplateEdgeInsets *fullScreenPaddingDelta; // @dynamic fullScreenPaddingDelta;
@property(nonatomic) BOOL hasPriorityLayout; // @dynamic hasPriorityLayout;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) SAUITemplateEdgeInsets *padding; // @dynamic padding;
@property(copy, nonatomic) NSArray *presentationOptions; // @dynamic presentationOptions;
@property(nonatomic) BOOL shouldBeOffscreenInPartial; // @dynamic shouldBeOffscreenInPartial;
@property(readonly) Class superclass;

@end

