//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/_MKInfoCardChildViewControllerAnalyticsDelegate-Protocol.h>

@class NSString;
@protocol _MKPlaceActionButtonControllerProtocol;

@interface _MKPlaceActionButtonController : NSObject <_MKInfoCardChildViewControllerAnalyticsDelegate>
{
    int _analyticsAction;
    NSString *_buttonTitle;
    NSString *_buttonSubTitle;
    CDUnknownBlockType _buttonSelectedBlock;
    id <_MKPlaceActionButtonControllerProtocol> _delegate;
}

+ (id)actionButtonControllerWithTitle:(id)arg1 subTitle:(id)arg2 selectedBlock:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) int analyticsAction; // @synthesize analyticsAction=_analyticsAction;
@property(nonatomic) __weak id <_MKPlaceActionButtonControllerProtocol> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) CDUnknownBlockType buttonSelectedBlock; // @synthesize buttonSelectedBlock=_buttonSelectedBlock;
@property(readonly, nonatomic) NSString *buttonSubTitle; // @synthesize buttonSubTitle=_buttonSubTitle;
@property(readonly, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
- (id)infoCardChildUnactionableUIElements;
- (id)infoCardChildPossibleActions;
- (void)buttonTextChanged;
- (id)initWithTitle:(id)arg1 subTitle:(id)arg2 analyticsAction:(int)arg3 selectedBlock:(CDUnknownBlockType)arg4;
- (id)initWithTitle:(id)arg1 subTitle:(id)arg2 selectedBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

