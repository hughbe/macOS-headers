//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHSuggestion.h>

#import <PhotoAnalysis/PGSuggestion-Protocol.h>

@class NSArray, NSDate, NSSet, NSString;

@interface PHSuggestion (PGSuggestion) <PGSuggestion>
@property(readonly, nonatomic) unsigned long long relevanceDurationInDays;
@property(readonly, nonatomic) id recipe;
@property(readonly, nonatomic) unsigned char notificationQuality;
@property(readonly, nonatomic) BOOL containsUnverifiedPersons;
@property(readonly, copy, nonatomic) NSArray *suggestedPersonLocalIdentifiers;
@property(readonly, nonatomic) NSSet *features;
@property(readonly, nonatomic) NSArray *representativeAssets;
@property(readonly, nonatomic) NSArray *keyAssets;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSDate *universalEndDate;
@property(readonly, nonatomic) NSDate *universalStartDate;

// Remaining properties
@property(readonly, nonatomic) NSDate *creationDate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isInvalid;
@property(readonly, nonatomic) unsigned short notificationState;
@property(readonly, copy, nonatomic) NSArray *reasons;
@property(readonly, nonatomic) unsigned short state;
@property(readonly, nonatomic) unsigned short subtype;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title; // @dynamic title;
@property(readonly, nonatomic) unsigned short type;
@property(readonly, nonatomic) long long version;
@end

