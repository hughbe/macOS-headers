//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ExchangeWebServices/EWSBaseRequestType.h>

@class EWSItemIdType, NSArray;

@interface EWSCreateAttachmentType : EWSBaseRequestType
{
    EWSItemIdType *_ParentItemId;
    NSArray *_Attachments;
}

+ (id)definition;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *Attachments; // @synthesize Attachments=_Attachments;
@property(retain, nonatomic) EWSItemIdType *ParentItemId; // @synthesize ParentItemId=_ParentItemId;

@end

