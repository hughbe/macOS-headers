//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSObject, PXWidgetCompositionElement;
@protocol PXAnonymousViewController;

@protocol PXWidgetCompositionElementDelegate <NSObject>
- (NSObject<PXAnonymousViewController> *)elementViewController:(PXWidgetCompositionElement *)arg1;

@optional
- (BOOL)element:(PXWidgetCompositionElement *)arg1 requestViewControllerDismissalAnimated:(BOOL)arg2;
- (BOOL)element:(PXWidgetCompositionElement *)arg1 transitionToViewController:(NSObject<PXAnonymousViewController> *)arg2 withTransitionType:(long long)arg3;
@end

