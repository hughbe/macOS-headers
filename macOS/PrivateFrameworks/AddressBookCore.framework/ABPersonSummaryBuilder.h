//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AddressBookCore/ABRecordSummaryBuilding-Protocol.h>

@class ABPropertySummaryBuilder, NSArray, NSDictionary, NSMutableArray, NSString;

@interface ABPersonSummaryBuilder : NSObject <ABRecordSummaryBuilding>
{
    NSArray *_properties;
    NSDictionary *_propertiesAndTypes;
    NSMutableArray *_summaries;
    ABPropertySummaryBuilder *_propertySummaryBuilder;
}

- (id)_summaryForProperty:(id)arg1 onPerson:(id)arg2;
- (void)_buildSummariesOfPropertiesOnPerson:(id)arg1;
- (id)buildSummaryOfRecord:(id)arg1;
- (void)_cachePropertiesAndTypes;
- (id)_ignoredProperties;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

