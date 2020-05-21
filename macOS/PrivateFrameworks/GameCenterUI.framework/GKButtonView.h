//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/NSUICollectionReusableView.h>

@class GKCollectionViewDataSource, NSButton, NSMutableArray;

@interface GKButtonView : NSUICollectionReusableView
{
    NSButton *_button;
    SEL _action;
    NSMutableArray *_buttonConstraints;
    GKCollectionViewDataSource *_dataSource;
}

+ (void)registerSupplementaryViewClassesForKind:(id)arg1 withCollectionView:(id)arg2;
+ (BOOL)requiresConstraintBasedLayout;
@property(retain, nonatomic) GKCollectionViewDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSMutableArray *buttonConstraints; // @synthesize buttonConstraints=_buttonConstraints;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(retain, nonatomic) NSButton *button; // @synthesize button=_button;
- (void)dealloc;
- (void)buttonPressed:(id)arg1;
- (void)applyLayoutAttributes:(id)arg1;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

