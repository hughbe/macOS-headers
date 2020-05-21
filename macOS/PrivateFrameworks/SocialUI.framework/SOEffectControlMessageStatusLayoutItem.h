//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SocialUI/IMChatTranscriptDrawable-Protocol.h>

@class IMTranscriptChatItem, NSString, SOEffectControlMessageStatusCollectionViewItem;

@interface SOEffectControlMessageStatusLayoutItem : NSObject <IMChatTranscriptDrawable>
{
    SOEffectControlMessageStatusCollectionViewItem *_referenceViewController;
    IMTranscriptChatItem *_chatTranscriptItem;
}

+ (id)itemTypeIdentifier;
+ (Class)viewClass;
- (void).cxx_destruct;
@property(retain, nonatomic) IMTranscriptChatItem *chatTranscriptItem; // @synthesize chatTranscriptItem=_chatTranscriptItem;
- (struct CGSize)sizeConstrainedToWidth:(double)arg1;
@property(readonly, nonatomic) long long layoutOrientation;
@property(readonly, nonatomic) long long layoutClassification;
- (long long)verticalSpaceToPrecedingItemOfClassification:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

