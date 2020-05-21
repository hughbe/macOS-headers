//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AddressBook/ABActionDelegate-Protocol.h>

@class ABCollectionViewItem, NSString;
@protocol ABCardCollectionViewDelegate;

@interface ABActionIgnoreSuggestedValue : NSObject <ABActionDelegate>
{
    NSString *_property;
    id _value;
    id <ABCardCollectionViewDelegate> _delegate;
    ABCollectionViewItem *_item;
}

- (void)performActionForPerson:(id)arg1 identifier:(id)arg2;
- (id)titleForPerson:(id)arg1 identifier:(id)arg2;
- (id)unlocalizedTitle;
@property(readonly) NSString *actionProperty;
- (void)dealloc;
- (id)initWithProperty:(id)arg1 value:(id)arg2 delegate:(id)arg3 item:(id)arg4;

@end

