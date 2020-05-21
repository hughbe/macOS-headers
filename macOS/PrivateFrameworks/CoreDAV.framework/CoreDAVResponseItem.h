//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVErrorItem, CoreDAVItemWithHrefChildItem, CoreDAVLeafItem, CoreDAVMatchResultsItem, NSMutableArray, NSMutableSet;

@interface CoreDAVResponseItem : CoreDAVItem
{
    NSMutableArray *_hrefs;
    CoreDAVLeafItem *_status;
    NSMutableSet *_propStats;
    CoreDAVErrorItem *_errorItem;
    CoreDAVLeafItem *_responseDescription;
    CoreDAVItemWithHrefChildItem *_location;
    CoreDAVLeafItem *_serverUID;
    CoreDAVMatchResultsItem *_matchResults;
}

+ (id)copyParseRules;
- (void).cxx_destruct;
@property(retain, nonatomic) CoreDAVMatchResultsItem *matchResults; // @synthesize matchResults=_matchResults;
@property(retain, nonatomic) CoreDAVLeafItem *serverUID; // @synthesize serverUID=_serverUID;
@property(retain, nonatomic) CoreDAVItemWithHrefChildItem *location; // @synthesize location=_location;
@property(retain, nonatomic) CoreDAVLeafItem *responseDescription; // @synthesize responseDescription=_responseDescription;
@property(retain, nonatomic) CoreDAVErrorItem *errorItem; // @synthesize errorItem=_errorItem;
@property(retain, nonatomic) NSMutableSet *propStats; // @synthesize propStats=_propStats;
@property(retain, nonatomic) CoreDAVLeafItem *status; // @synthesize status=_status;
@property(retain, nonatomic) NSMutableArray *hrefs; // @synthesize hrefs=_hrefs;
- (BOOL)hasPropertyError;
- (id)successfulPropertiesToValues;
- (id)firstHref;
- (void)addHref:(id)arg1;
- (void)addPropStat:(id)arg1;
- (id)description;
- (id)init;

@end

