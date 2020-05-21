//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKDashboardPlayerCell.h>

@class NSButton, NSImageView, NSLayoutConstraint;

@interface GKDashboardPlayerPickerCell : GKDashboardPlayerCell
{
    BOOL _selectable;
    BOOL _showsLastPlayedStatusText;
    NSImageView *_selectionView;
    NSButton *_selectionButton;
    NSLayoutConstraint *_nameConstraint;
    NSLayoutConstraint *_selectionHorizontalConstraint;
    NSLayoutConstraint *_selectionVerticalConstraint;
    NSLayoutConstraint *_statusHeightConstraint;
    double _nameInitialConstant;
    double _selectionInitialHorizontalConstant;
    double _selectionInitialVerticalConstant;
    double _statusInitialConstant;
}

@property(nonatomic) double statusInitialConstant; // @synthesize statusInitialConstant=_statusInitialConstant;
@property(nonatomic) double selectionInitialVerticalConstant; // @synthesize selectionInitialVerticalConstant=_selectionInitialVerticalConstant;
@property(nonatomic) double selectionInitialHorizontalConstant; // @synthesize selectionInitialHorizontalConstant=_selectionInitialHorizontalConstant;
@property(nonatomic) double nameInitialConstant; // @synthesize nameInitialConstant=_nameInitialConstant;
@property(nonatomic) NSLayoutConstraint *statusHeightConstraint; // @synthesize statusHeightConstraint=_statusHeightConstraint;
@property(nonatomic) NSLayoutConstraint *selectionVerticalConstraint; // @synthesize selectionVerticalConstraint=_selectionVerticalConstraint;
@property(nonatomic) NSLayoutConstraint *selectionHorizontalConstraint; // @synthesize selectionHorizontalConstraint=_selectionHorizontalConstraint;
@property(nonatomic) NSLayoutConstraint *nameConstraint; // @synthesize nameConstraint=_nameConstraint;
@property(nonatomic) NSButton *selectionButton; // @synthesize selectionButton=_selectionButton;
@property(nonatomic) NSImageView *selectionView; // @synthesize selectionView=_selectionView;
@property(nonatomic) BOOL showsLastPlayedStatusText; // @synthesize showsLastPlayedStatusText=_showsLastPlayedStatusText;
@property(nonatomic, getter=isSelectable) BOOL selectable; // @synthesize selectable=_selectable;
- (void)setSelected:(BOOL)arg1;
- (void)setStatusWithAchievementEarnedPoints:(long long)arg1 andDate:(id)arg2;
- (void)setPlayer:(id)arg1;
- (void)awakeFromNib;

@end

