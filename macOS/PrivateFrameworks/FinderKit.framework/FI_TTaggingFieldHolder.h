//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FI_TView.h>

@class NSView;

__attribute__((visibility("hidden")))
@interface FI_TTaggingFieldHolder : FI_TView
{
    NSView *_interiorView;
    struct CGRect _interiorViewFrameCache;
    struct TNotificationCenterObserver _interiorViewFrameChangedObserver;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)interiorViewResized;
- (void)didAddSubview:(id)arg1;
- (void)initCommon;
- (id)initWithFrame:(struct CGRect)arg1 interiorView:(id)arg2;

@end

