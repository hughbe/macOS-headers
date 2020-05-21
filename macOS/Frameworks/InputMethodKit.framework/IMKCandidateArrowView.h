//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <InputMethodKit/IMKUIView.h>

@class NSImage;

@interface IMKCandidateArrowView : IMKUIView
{
    NSImage *_arrowImageUp;
    NSImage *_arrowImageDown;
    SEL _action;
    BOOL _pointsUpwards;
    id _target;
    BOOL _visible;
}

@property(nonatomic) BOOL visible; // @synthesize visible=_visible;
@property(nonatomic) id target; // @synthesize target=_target;
@property(nonatomic) BOOL pointsUpwards; // @synthesize pointsUpwards=_pointsUpwards;
@property(nonatomic) SEL action; // @synthesize action=_action;
- (void)drawRect:(struct CGRect)arg1;
- (void)mouseUp:(id)arg1;
@property(readonly, retain, nonatomic) NSImage *arrowImageDown; // @synthesize arrowImageDown=_arrowImageDown;
@property(readonly, retain, nonatomic) NSImage *arrowImageUp; // @synthesize arrowImageUp=_arrowImageUp;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 properties:(id)arg2;

@end

