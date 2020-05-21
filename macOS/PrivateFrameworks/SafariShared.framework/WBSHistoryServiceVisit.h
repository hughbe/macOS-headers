//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/WBSHistoryServiceObject.h>

@class NSString;

@interface WBSHistoryServiceVisit : WBSHistoryServiceObject
{
    BOOL _loadSuccessful;
    BOOL _httpNonGet;
    BOOL _synthesized;
    int _score;
    long long _itemID;
    NSString *_title;
    double _visitTime;
    long long _redirectSource;
    long long _redirectDestination;
    long long _origin;
    long long _generation;
    long long _attributes;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) int score; // @synthesize score=_score;
@property(nonatomic) long long attributes; // @synthesize attributes=_attributes;
@property(nonatomic) long long generation; // @synthesize generation=_generation;
@property(nonatomic) long long origin; // @synthesize origin=_origin;
@property(nonatomic) long long redirectDestination; // @synthesize redirectDestination=_redirectDestination;
@property(nonatomic) long long redirectSource; // @synthesize redirectSource=_redirectSource;
@property(readonly, nonatomic) BOOL synthesized; // @synthesize synthesized=_synthesized;
@property(readonly, nonatomic) BOOL httpNonGet; // @synthesize httpNonGet=_httpNonGet;
@property(readonly, nonatomic) BOOL loadSuccessful; // @synthesize loadSuccessful=_loadSuccessful;
@property(readonly, nonatomic) double visitTime; // @synthesize visitTime=_visitTime;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) long long itemID; // @synthesize itemID=_itemID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)visitWithUpdatedID:(long long)arg1 updatedItemID:(long long)arg2;
- (id)_initWithDatabaseID:(long long)arg1 serviceVisit:(id)arg2;
- (id)initWithVisit:(id)arg1;

@end

