//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPProcessableFeedback-Protocol.h>
#import <CoreParsec/_CPResultEngagementFeedback-Protocol.h>

@class NSData, NSDictionary, NSString, _CPSearchResultForFeedback;

@interface _CPResultEngagementFeedback : PBCodable <_CPProcessableFeedback, _CPResultEngagementFeedback, NSSecureCoding>
{
    BOOL _actionEngaged;
    BOOL _matchesUnengagedSuggestion;
    int _triggerEvent;
    int _destination;
    int _actionTarget;
    unsigned long long _timestamp;
    _CPSearchResultForFeedback *_result;
    NSString *_titleText;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL matchesUnengagedSuggestion; // @synthesize matchesUnengagedSuggestion=_matchesUnengagedSuggestion;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(retain, nonatomic) _CPSearchResultForFeedback *result; // @synthesize result=_result;
@property(nonatomic) int actionTarget; // @synthesize actionTarget=_actionTarget;
@property(nonatomic) int destination; // @synthesize destination=_destination;
@property(nonatomic) int triggerEvent; // @synthesize triggerEvent=_triggerEvent;
@property(nonatomic) BOOL actionEngaged; // @synthesize actionEngaged=_actionEngaged;
@property(nonatomic) unsigned long long timestamp;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)init;
- (id)initWithFacade:(id)arg1;
- (id)actionDestinationFromResult:(id)arg1 actionEngaged:(BOOL)arg2 destination:(int)arg3;
@property(readonly, nonatomic) id feedbackJSON;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

