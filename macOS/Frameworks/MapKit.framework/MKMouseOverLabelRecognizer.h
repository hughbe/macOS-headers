//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTrackingArea, NSView, VKLabelMarker;
@protocol MKMouseOverLabelRecognizerDelegate, MKMouseOverLabelTarget;

__attribute__((visibility("hidden")))
@interface MKMouseOverLabelRecognizer : NSObject
{
    VKLabelMarker *_labelMarker;
    NSTrackingArea *_trackingArea;
    id <MKMouseOverLabelTarget> _target;
    long long _state;
    id <MKMouseOverLabelRecognizerDelegate> _delegate;
    NSView *_view;
}

- (void).cxx_destruct;
@property(nonatomic) __weak NSView *view; // @synthesize view=_view;
@property(nonatomic) __weak id <MKMouseOverLabelRecognizerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <MKMouseOverLabelTarget> target; // @synthesize target=_target;
@property(retain, nonatomic) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
@property(retain, nonatomic) VKLabelMarker *labelMarker; // @synthesize labelMarker=_labelMarker;
- (void)detachFromView;
- (void)attachToView:(id)arg1;
- (void)setState:(long long)arg1 withEvent:(id)arg2;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseMoved:(id)arg1;
@property(readonly, nonatomic) BOOL recognizesMouseOverSelectablePartsOnly;
- (struct CGPoint)_convertPointInWindow:(struct CGPoint)arg1;
- (id)initWithLabelMarker:(id)arg1 trackingRect:(struct CGRect)arg2 target:(id)arg3;
- (id)init;

@end

