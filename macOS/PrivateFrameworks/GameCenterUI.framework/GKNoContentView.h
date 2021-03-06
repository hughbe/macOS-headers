//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class GKUIActivityIndicatorView, GKUIContentUnavailableView, NSStackView, NSString;

@interface GKNoContentView : NSView
{
    BOOL _loading;
    CDUnknownBlockType _buttonAction;
    GKUIContentUnavailableView *_contentUnavailableView;
    GKUIActivityIndicatorView *_loadingIndicatorView;
    NSStackView *_stackView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) GKUIActivityIndicatorView *loadingIndicatorView; // @synthesize loadingIndicatorView=_loadingIndicatorView;
@property(retain, nonatomic) GKUIContentUnavailableView *contentUnavailableView; // @synthesize contentUnavailableView=_contentUnavailableView;
@property(nonatomic, getter=isLoading) BOOL loading; // @synthesize loading=_loading;
@property(copy, nonatomic) CDUnknownBlockType buttonAction; // @synthesize buttonAction=_buttonAction;
@property(copy, nonatomic) NSString *buttonTitle; // @dynamic buttonTitle;
@property(copy, nonatomic) NSString *message; // @dynamic message;
@property(copy, nonatomic) NSString *title; // @dynamic title;
- (id)initWithFrame:(struct CGRect)arg1;

@end

