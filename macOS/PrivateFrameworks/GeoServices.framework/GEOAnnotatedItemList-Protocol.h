//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class GEOMapItemAttribution, NSString;
@protocol GEOPictureItemContainer, GEOTextItemContainer;

@protocol GEOAnnotatedItemList
@property(readonly, nonatomic) GEOMapItemAttribution *attribution;
@property(readonly, nonatomic) int annotatedItemStyle;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) id <GEOTextItemContainer> textItemContainer;
@property(readonly, nonatomic) id <GEOPictureItemContainer> pictureItemContainer;
@end

