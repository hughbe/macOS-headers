//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKDashboardPlayerCell.h>

@class NSColor, NSImageView, NSLayoutConstraint, NSTextField;

@interface GKDashboardTurnCell : GKDashboardPlayerCell
{
    long long _displayIndex;
    NSTextField *_dateLabel;
    NSTextField *_turnLabel;
    NSImageView *_actionIndicatorView;
    NSLayoutConstraint *_dateToNameConstraint;
    NSLayoutConstraint *_turnToNameConstraint;
    NSColor *_dateColor;
    NSColor *_turnColor;
    double _dateToNameConstant;
    double _turnToNameConstant;
}

+ (struct CGSize)defaultSizeForTurnDetail;
@property(nonatomic) double turnToNameConstant; // @synthesize turnToNameConstant=_turnToNameConstant;
@property(nonatomic) double dateToNameConstant; // @synthesize dateToNameConstant=_dateToNameConstant;
@property(retain, nonatomic) NSColor *turnColor; // @synthesize turnColor=_turnColor;
@property(retain, nonatomic) NSColor *dateColor; // @synthesize dateColor=_dateColor;
@property(nonatomic) NSLayoutConstraint *turnToNameConstraint; // @synthesize turnToNameConstraint=_turnToNameConstraint;
@property(nonatomic) NSLayoutConstraint *dateToNameConstraint; // @synthesize dateToNameConstraint=_dateToNameConstraint;
@property(nonatomic) NSImageView *actionIndicatorView; // @synthesize actionIndicatorView=_actionIndicatorView;
@property(nonatomic) NSTextField *turnLabel; // @synthesize turnLabel=_turnLabel;
@property(nonatomic) NSTextField *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(nonatomic) long long displayIndex; // @synthesize displayIndex=_displayIndex;
- (void)setOnDarkBackground:(BOOL)arg1;
- (void)configureForParticipant:(id)arg1 inMatch:(id)arg2;
- (void)configureForMatch:(id)arg1;
- (BOOL)wantsLocalPlayerAction:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;

@end

