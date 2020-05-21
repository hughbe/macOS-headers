//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKSectionMetrics.h>

@interface GKDynamicColumnSectionMetrics : GKSectionMetrics
{
    unsigned long long _columnsInPortrait;
    unsigned long long _columnsInLandscape;
}

+ (id)dynamicColumnSectionMetricsWithColumnsInPortrait:(unsigned long long)arg1 columnsInLandscape:(unsigned long long)arg2;
+ (id)dynamicColumnSectionMetricsWithColumnsInPortrait:(unsigned long long)arg1 columnsInLandscape:(unsigned long long)arg2 forIdiom:(int)arg3;
@property(nonatomic) unsigned long long columnsInLandscape; // @synthesize columnsInLandscape=_columnsInLandscape;
@property(nonatomic) unsigned long long columnsInPortrait; // @synthesize columnsInPortrait=_columnsInPortrait;
- (void)updateColumnsInPortrait:(unsigned long long)arg1 columnsInLandscape:(unsigned long long)arg2;
- (struct CGSize)itemSizeForCollectionView:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdiom:(int)arg1;

@end

