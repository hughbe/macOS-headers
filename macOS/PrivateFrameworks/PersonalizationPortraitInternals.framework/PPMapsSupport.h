//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PPMapsSupport : NSObject
{
}

+ (BOOL)harvestMapItem:(id)arg1 documentIdentifier:(id)arg2 groupIdentifier:(id)arg3 includingPostalAddress:(BOOL)arg4 error:(id *)arg5;
+ (void)_clearMapsFavorites;
+ (void)importMapsData;
+ (id)favoritesContainer;

@end

