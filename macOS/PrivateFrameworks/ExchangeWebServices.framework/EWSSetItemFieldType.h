//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ExchangeWebServices/EWSItemChangeDescriptionType.h>

@class EWSItemType;

@interface EWSSetItemFieldType : EWSItemChangeDescriptionType
{
    EWSItemType *_Item;
}

+ (id)definition;
- (void).cxx_destruct;
@property(retain, nonatomic) EWSItemType *Item; // @synthesize Item=_Item;

@end

