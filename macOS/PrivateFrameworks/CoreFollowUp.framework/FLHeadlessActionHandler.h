//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FLFollowUpItem;

@interface FLHeadlessActionHandler : NSObject
{
    FLFollowUpItem *_item;
}

+ (id)handlerWithItem:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) FLFollowUpItem *item; // @synthesize item=_item;
- (void)dealloc;
- (void)handleExtensionBasedAction:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleAction:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithItem:(id)arg1;

@end

