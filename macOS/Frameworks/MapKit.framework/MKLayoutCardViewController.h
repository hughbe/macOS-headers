//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKStackingViewController.h>

@class MKMapItem, NSMutableDictionary;

@interface MKLayoutCardViewController : MKStackingViewController
{
    MKMapItem *_mapItem;
    NSMutableDictionary *_cacheVC;
    NSMutableDictionary *_cacheModuleType;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *cacheModuleType; // @synthesize cacheModuleType=_cacheModuleType;
@property(retain, nonatomic) NSMutableDictionary *cacheVC; // @synthesize cacheVC=_cacheVC;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
- (id)_createViewControllerForModule:(id)arg1;
- (id)_cachedViewControllerForModule:(int)arg1;
- (void)_createModuleLayout:(id)arg1;
- (id)_layoutModuleForMapItem;
- (BOOL)isLayoutDynamic;
- (BOOL)isTransitItem;

@end

