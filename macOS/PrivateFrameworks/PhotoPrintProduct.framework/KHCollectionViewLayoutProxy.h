//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSProxy.h>

@class NSMapTable, UXCollectionViewLayout;
@protocol KHCollectionViewLayoutProxyDelegate;

@interface KHCollectionViewLayoutProxy : NSProxy
{
    id <KHCollectionViewLayoutProxyDelegate> _delegate;
    UXCollectionViewLayout *_layout;
    NSMapTable *_methodSignituresBySelector;
}

+ (Class)invalidationContextClass;
+ (Class)layoutAttributesClass;
+ (Class)class;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMapTable *methodSignituresBySelector; // @synthesize methodSignituresBySelector=_methodSignituresBySelector;
@property(readonly, nonatomic) UXCollectionViewLayout *layout; // @synthesize layout=_layout;
@property(nonatomic) __weak id <KHCollectionViewLayoutProxyDelegate> delegate; // @synthesize delegate=_delegate;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)initWithLayout:(id)arg1;

@end

