//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ExchangeWebServices/EWSBaseRequestType.h>

@class EWSItemResponseShapeType, NSArray;

@interface EWSGetItemType : EWSBaseRequestType
{
    EWSItemResponseShapeType *_ItemShape;
    NSArray *_ItemIds;
}

+ (id)definition;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *ItemIds; // @synthesize ItemIds=_ItemIds;
@property(retain, nonatomic) EWSItemResponseShapeType *ItemShape; // @synthesize ItemShape=_ItemShape;

@end

