//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreThemeDefinition/TDNamedArtworkProduction.h>

@class NSSet;

@interface TDMultisizeImageSetProduction : TDNamedArtworkProduction
{
}

- (void)processRendition:(id)arg1 withBackstop:(id)arg2;
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

// Remaining properties
@property(retain, nonatomic) NSSet *multisizeImageSetRenditions; // @dynamic multisizeImageSetRenditions;
@property(retain, nonatomic) NSSet *sizeIndexes; // @dynamic sizeIndexes;

@end

