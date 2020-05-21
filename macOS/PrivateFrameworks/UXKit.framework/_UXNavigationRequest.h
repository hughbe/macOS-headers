//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, UXViewController;

@interface _UXNavigationRequest : NSObject
{
    NSMutableArray *_addedViewControllers;
    BOOL _animated;
    long long _operation;
    NSArray *_viewControllers;
}

+ (id)setRequestWithViewControllers:(id)arg1 animated:(BOOL)arg2;
+ (id)popRequestWithViewController:(id)arg1 animated:(BOOL)arg2;
+ (id)pushRequestWithViewController:(id)arg1 animated:(BOOL)arg2;
+ (id)_requestWithOperation:(long long)arg1 viewControllers:(id)arg2 animated:(BOOL)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL animated; // @synthesize animated=_animated;
@property(readonly, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(readonly, nonatomic) long long operation; // @synthesize operation=_operation;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToNavigationRequest:(id)arg1;
- (id)description;
- (void)tearDownContainmentIfNeeded;
- (void)setupContainmentIfNeededInParentViewController:(id)arg1;
@property(readonly, nonatomic) UXViewController *viewController;

@end

