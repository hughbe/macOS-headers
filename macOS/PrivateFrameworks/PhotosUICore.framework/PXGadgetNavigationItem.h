//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol PXGadget;

@interface PXGadgetNavigationItem : NSObject
{
    BOOL _animated;
    unsigned long long _gadgetType;
    NSString *_gadgetId;
    id <PXGadget> _gadget;
    long long _navigationType;
    CDUnknownBlockType _navigationBlock;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL animated; // @synthesize animated=_animated;
@property(readonly, copy, nonatomic) CDUnknownBlockType navigationBlock; // @synthesize navigationBlock=_navigationBlock;
@property(readonly, nonatomic) long long navigationType; // @synthesize navigationType=_navigationType;
@property(readonly, nonatomic) id <PXGadget> gadget; // @synthesize gadget=_gadget;
@property(readonly, nonatomic) NSString *gadgetId; // @synthesize gadgetId=_gadgetId;
@property(readonly, nonatomic) unsigned long long gadgetType; // @synthesize gadgetType=_gadgetType;
- (id)initWithGadget:(id)arg1 navigationBlock:(CDUnknownBlockType)arg2 animated:(BOOL)arg3;
- (id)initWithGadgetId:(id)arg1 navigationBlock:(CDUnknownBlockType)arg2 animated:(BOOL)arg3;
- (id)initWithGadetType:(unsigned long long)arg1 navigationBlock:(CDUnknownBlockType)arg2 animated:(BOOL)arg3;

@end

