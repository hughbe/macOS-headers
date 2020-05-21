//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AnnotationKit/AKFormFeatureDetectorDelegate-Protocol.h>

@class AKController, NSString;

@interface AKFormFeatureDetectorController : NSObject <AKFormFeatureDetectorDelegate>
{
    AKController *_controller;
}

- (void).cxx_destruct;
@property __weak AKController *controller; // @synthesize controller=_controller;
- (double)maximumFeatureWidthForPage:(id)arg1;
- (struct CGSize)defaultFeatureSizeForPage:(id)arg1;
- (BOOL)wantsDefaultFeatures;
- (id)_convertFont:(id)arg1 toSize:(double)arg2;
- (BOOL)formFeature:(id)arg1 intersectsAnnotationsOnPage:(id)arg2;
- (void)createAnnotationWithFeature:(id)arg1 onPageController:(id)arg2;
- (id)formFeatureAtPoint:(struct CGPoint)arg1 inPageController:(id)arg2;
- (BOOL)detectFormFeatureAtPoint:(struct CGPoint)arg1 inPageController:(id)arg2;
- (id)initWithController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

