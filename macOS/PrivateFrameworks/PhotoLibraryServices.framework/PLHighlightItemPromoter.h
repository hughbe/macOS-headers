//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol PLHighlightItemPromoterRule;

@interface PLHighlightItemPromoter : NSObject
{
    id <PLHighlightItemPromoterRule> _rule;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <PLHighlightItemPromoterRule> rule; // @synthesize rule=_rule;
- (void)processHighlightItemsInHighlightItemList:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (id)initWithRule:(id)arg1;

@end

