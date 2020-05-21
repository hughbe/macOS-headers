//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKBaseGameCell.h>

@class NSImageView, NSTextField;

@interface GKTurnGameCell : GKBaseGameCell
{
    unsigned long long _numberOfActiveMatches;
    unsigned long long _numberOfLocalPlayerTurns;
    NSTextField *_activeMatchesLabel;
    NSTextField *_localPlayerTurnsLabel;
    NSImageView *_statusImageView;
    struct NSEdgeInsets _insets;
}

+ (void)registerCellClassesForCollectionView:(id)arg1;
+ (id)itemHeightList;
+ (double)defaultRowHeight;
@property NSImageView *statusImageView; // @synthesize statusImageView=_statusImageView;
@property NSTextField *localPlayerTurnsLabel; // @synthesize localPlayerTurnsLabel=_localPlayerTurnsLabel;
@property NSTextField *activeMatchesLabel; // @synthesize activeMatchesLabel=_activeMatchesLabel;
@property(nonatomic) struct NSEdgeInsets insets; // @synthesize insets=_insets;
@property(nonatomic) unsigned long long numberOfLocalPlayerTurns; // @synthesize numberOfLocalPlayerTurns=_numberOfLocalPlayerTurns;
@property(nonatomic) unsigned long long numberOfActiveMatches; // @synthesize numberOfActiveMatches=_numberOfActiveMatches;
- (void)setSelected:(BOOL)arg1;
- (void)didUpdateModel;

@end

