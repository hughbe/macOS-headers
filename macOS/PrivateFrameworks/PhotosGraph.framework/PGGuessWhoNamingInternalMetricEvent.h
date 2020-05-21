//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PLMetricEvent-Protocol.h>

@class NSDictionary, NSString, PGGraph;

@interface PGGuessWhoNamingInternalMetricEvent : NSObject <PLMetricEvent>
{
    NSString *_identifier;
    NSDictionary *_payload;
    PGGraph *_graph;
    double _precisionContactSuggestionTop1;
    double _precisionContactSuggestionTop2;
    double _precisionContactSuggestionTop3;
    double _precisionContactSuggestionTop10;
    double _precisionHighConfidenceContactSuggestion;
    unsigned long long _numberOfAddressSignalRegistrations;
    unsigned long long _numberOfBirthdaySignalRegistrations;
    unsigned long long _numberOfPotentialBirthdaySignalRegistrations;
    unsigned long long _numberOfMentionedAddressSignalRegistrations;
    unsigned long long _numberOfSharedAssetSignalRegistrations;
    unsigned long long _numberOfCMMSignalRegistrations;
    unsigned long long _numberOfCalendarSignalRegistrations;
    unsigned long long _numberOfFaceTimeSignalRegistrations;
    unsigned long long _numberOfContactFaceprintSignalRegistrations;
    unsigned long long _numberOfGenderSignalRegistrations;
    unsigned long long _numberOfSocialGroupSignalRegistrations;
    unsigned long long _numberOfRelationshipSignalRegistrations;
    double _precisionAddressSignal;
    double _precisionBirthdaySignal;
    double _precisionPotentialBirthdaySignal;
    double _precisionMentionedAddressSignal;
    double _precisionSharedAssetSignal;
    double _precisionCMMSignal;
    double _precisionCalendarSignal;
    double _precisionFaceTimeSignal;
    double _precisionContactFaceprintSignal;
    double _precisionGenderSignal;
    double _precisionSocialGroupSignal;
    double _precisionRelationshipSignal;
    unsigned long long _truePositiveAddressSignal;
    unsigned long long _falsePositiveAddressSignal;
    unsigned long long _truePositiveBirthdaySignal;
    unsigned long long _falsePositiveBirthdaySignal;
    unsigned long long _truePositivePotentialBirthdaySignal;
    unsigned long long _falsePositivePotentialBirthdaySignal;
    unsigned long long _truePositiveMentionedAddressSignal;
    unsigned long long _falsePositiveMentionedAddressSignal;
    unsigned long long _truePositiveSharedAssetSignal;
    unsigned long long _falsePositiveSharedAssetSignal;
    unsigned long long _truePositiveCMMSignal;
    unsigned long long _falsePositiveCMMSignal;
    unsigned long long _truePositiveCalendarSignal;
    unsigned long long _falsePositiveCalendarSignal;
    unsigned long long _truePositiveFaceTimeSignal;
    unsigned long long _falsePositiveFaceTimeSignal;
    unsigned long long _truePositiveContactFaceprintSignal;
    unsigned long long _falsePositiveContactFaceprintSignal;
    unsigned long long _truePositiveGenderSignal;
    unsigned long long _falsePositiveGenderSignal;
    unsigned long long _truePositiveSocialGroupSignal;
    unsigned long long _falsePositiveSocialGroupSignal;
    unsigned long long _truePositiveRelationshipSignal;
    unsigned long long _falsePositiveRelationshipSignal;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long falsePositiveRelationshipSignal; // @synthesize falsePositiveRelationshipSignal=_falsePositiveRelationshipSignal;
@property(nonatomic) unsigned long long truePositiveRelationshipSignal; // @synthesize truePositiveRelationshipSignal=_truePositiveRelationshipSignal;
@property(nonatomic) unsigned long long falsePositiveSocialGroupSignal; // @synthesize falsePositiveSocialGroupSignal=_falsePositiveSocialGroupSignal;
@property(nonatomic) unsigned long long truePositiveSocialGroupSignal; // @synthesize truePositiveSocialGroupSignal=_truePositiveSocialGroupSignal;
@property(nonatomic) unsigned long long falsePositiveGenderSignal; // @synthesize falsePositiveGenderSignal=_falsePositiveGenderSignal;
@property(nonatomic) unsigned long long truePositiveGenderSignal; // @synthesize truePositiveGenderSignal=_truePositiveGenderSignal;
@property(nonatomic) unsigned long long falsePositiveContactFaceprintSignal; // @synthesize falsePositiveContactFaceprintSignal=_falsePositiveContactFaceprintSignal;
@property(nonatomic) unsigned long long truePositiveContactFaceprintSignal; // @synthesize truePositiveContactFaceprintSignal=_truePositiveContactFaceprintSignal;
@property(nonatomic) unsigned long long falsePositiveFaceTimeSignal; // @synthesize falsePositiveFaceTimeSignal=_falsePositiveFaceTimeSignal;
@property(nonatomic) unsigned long long truePositiveFaceTimeSignal; // @synthesize truePositiveFaceTimeSignal=_truePositiveFaceTimeSignal;
@property(nonatomic) unsigned long long falsePositiveCalendarSignal; // @synthesize falsePositiveCalendarSignal=_falsePositiveCalendarSignal;
@property(nonatomic) unsigned long long truePositiveCalendarSignal; // @synthesize truePositiveCalendarSignal=_truePositiveCalendarSignal;
@property(nonatomic) unsigned long long falsePositiveCMMSignal; // @synthesize falsePositiveCMMSignal=_falsePositiveCMMSignal;
@property(nonatomic) unsigned long long truePositiveCMMSignal; // @synthesize truePositiveCMMSignal=_truePositiveCMMSignal;
@property(nonatomic) unsigned long long falsePositiveSharedAssetSignal; // @synthesize falsePositiveSharedAssetSignal=_falsePositiveSharedAssetSignal;
@property(nonatomic) unsigned long long truePositiveSharedAssetSignal; // @synthesize truePositiveSharedAssetSignal=_truePositiveSharedAssetSignal;
@property(nonatomic) unsigned long long falsePositiveMentionedAddressSignal; // @synthesize falsePositiveMentionedAddressSignal=_falsePositiveMentionedAddressSignal;
@property(nonatomic) unsigned long long truePositiveMentionedAddressSignal; // @synthesize truePositiveMentionedAddressSignal=_truePositiveMentionedAddressSignal;
@property(nonatomic) unsigned long long falsePositivePotentialBirthdaySignal; // @synthesize falsePositivePotentialBirthdaySignal=_falsePositivePotentialBirthdaySignal;
@property(nonatomic) unsigned long long truePositivePotentialBirthdaySignal; // @synthesize truePositivePotentialBirthdaySignal=_truePositivePotentialBirthdaySignal;
@property(nonatomic) unsigned long long falsePositiveBirthdaySignal; // @synthesize falsePositiveBirthdaySignal=_falsePositiveBirthdaySignal;
@property(nonatomic) unsigned long long truePositiveBirthdaySignal; // @synthesize truePositiveBirthdaySignal=_truePositiveBirthdaySignal;
@property(nonatomic) unsigned long long falsePositiveAddressSignal; // @synthesize falsePositiveAddressSignal=_falsePositiveAddressSignal;
@property(nonatomic) unsigned long long truePositiveAddressSignal; // @synthesize truePositiveAddressSignal=_truePositiveAddressSignal;
@property(nonatomic) double precisionRelationshipSignal; // @synthesize precisionRelationshipSignal=_precisionRelationshipSignal;
@property(nonatomic) double precisionSocialGroupSignal; // @synthesize precisionSocialGroupSignal=_precisionSocialGroupSignal;
@property(nonatomic) double precisionGenderSignal; // @synthesize precisionGenderSignal=_precisionGenderSignal;
@property(nonatomic) double precisionContactFaceprintSignal; // @synthesize precisionContactFaceprintSignal=_precisionContactFaceprintSignal;
@property(nonatomic) double precisionFaceTimeSignal; // @synthesize precisionFaceTimeSignal=_precisionFaceTimeSignal;
@property(nonatomic) double precisionCalendarSignal; // @synthesize precisionCalendarSignal=_precisionCalendarSignal;
@property(nonatomic) double precisionCMMSignal; // @synthesize precisionCMMSignal=_precisionCMMSignal;
@property(nonatomic) double precisionSharedAssetSignal; // @synthesize precisionSharedAssetSignal=_precisionSharedAssetSignal;
@property(nonatomic) double precisionMentionedAddressSignal; // @synthesize precisionMentionedAddressSignal=_precisionMentionedAddressSignal;
@property(nonatomic) double precisionPotentialBirthdaySignal; // @synthesize precisionPotentialBirthdaySignal=_precisionPotentialBirthdaySignal;
@property(nonatomic) double precisionBirthdaySignal; // @synthesize precisionBirthdaySignal=_precisionBirthdaySignal;
@property(nonatomic) double precisionAddressSignal; // @synthesize precisionAddressSignal=_precisionAddressSignal;
@property(nonatomic) unsigned long long numberOfRelationshipSignalRegistrations; // @synthesize numberOfRelationshipSignalRegistrations=_numberOfRelationshipSignalRegistrations;
@property(nonatomic) unsigned long long numberOfSocialGroupSignalRegistrations; // @synthesize numberOfSocialGroupSignalRegistrations=_numberOfSocialGroupSignalRegistrations;
@property(nonatomic) unsigned long long numberOfGenderSignalRegistrations; // @synthesize numberOfGenderSignalRegistrations=_numberOfGenderSignalRegistrations;
@property(nonatomic) unsigned long long numberOfContactFaceprintSignalRegistrations; // @synthesize numberOfContactFaceprintSignalRegistrations=_numberOfContactFaceprintSignalRegistrations;
@property(nonatomic) unsigned long long numberOfFaceTimeSignalRegistrations; // @synthesize numberOfFaceTimeSignalRegistrations=_numberOfFaceTimeSignalRegistrations;
@property(nonatomic) unsigned long long numberOfCalendarSignalRegistrations; // @synthesize numberOfCalendarSignalRegistrations=_numberOfCalendarSignalRegistrations;
@property(nonatomic) unsigned long long numberOfCMMSignalRegistrations; // @synthesize numberOfCMMSignalRegistrations=_numberOfCMMSignalRegistrations;
@property(nonatomic) unsigned long long numberOfSharedAssetSignalRegistrations; // @synthesize numberOfSharedAssetSignalRegistrations=_numberOfSharedAssetSignalRegistrations;
@property(nonatomic) unsigned long long numberOfMentionedAddressSignalRegistrations; // @synthesize numberOfMentionedAddressSignalRegistrations=_numberOfMentionedAddressSignalRegistrations;
@property(nonatomic) unsigned long long numberOfPotentialBirthdaySignalRegistrations; // @synthesize numberOfPotentialBirthdaySignalRegistrations=_numberOfPotentialBirthdaySignalRegistrations;
@property(nonatomic) unsigned long long numberOfBirthdaySignalRegistrations; // @synthesize numberOfBirthdaySignalRegistrations=_numberOfBirthdaySignalRegistrations;
@property(nonatomic) unsigned long long numberOfAddressSignalRegistrations; // @synthesize numberOfAddressSignalRegistrations=_numberOfAddressSignalRegistrations;
@property(nonatomic) double precisionHighConfidenceContactSuggestion; // @synthesize precisionHighConfidenceContactSuggestion=_precisionHighConfidenceContactSuggestion;
@property(nonatomic) double precisionContactSuggestionTop10; // @synthesize precisionContactSuggestionTop10=_precisionContactSuggestionTop10;
@property(nonatomic) double precisionContactSuggestionTop3; // @synthesize precisionContactSuggestionTop3=_precisionContactSuggestionTop3;
@property(nonatomic) double precisionContactSuggestionTop2; // @synthesize precisionContactSuggestionTop2=_precisionContactSuggestionTop2;
@property(nonatomic) double precisionContactSuggestionTop1; // @synthesize precisionContactSuggestionTop1=_precisionContactSuggestionTop1;
@property(retain, nonatomic) PGGraph *graph; // @synthesize graph=_graph;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSString *description;
- (double)_precisionFromTruePositivesCount:(unsigned long long)arg1 falsePositivesCount:(unsigned long long)arg2;
- (id)_peopleIdentitiesSignals;
- (void)_incrementSignalEvaluationForSignal:(unsigned long long)arg1 suggestionEdge:(id)arg2 isCorrect:(BOOL)arg3;
- (void)_incrementSignalRegistrationForSignal:(unsigned long long)arg1 suggestionEdge:(id)arg2;
- (void)gatherMetricsWithProgressBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSDictionary *payload; // @synthesize payload=_payload;
- (id)initWithGraphManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

