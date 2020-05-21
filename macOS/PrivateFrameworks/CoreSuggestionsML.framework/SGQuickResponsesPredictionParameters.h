//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SGQuickResponsesPredictionParameters : NSObject
{
    BOOL _isPersonalizationDisabled;
    BOOL _isReplyTextRandomized;
    BOOL _isPerCategory;
    double _weightForCategoryAverage;
    double _weightForCategoryMax;
    double _weightForIndividualModel;
    double _classDiscount;
    double _responsesBonus;
    double _minToShowThreshold;
    unsigned long long _defaultResponsesToReturn;
    unsigned long long _responsesToShowAtTopForDiversity;
    double _personalizationExplorationFactor;
    double _personalizationDisplayedPseudocount;
    double _personalizationSelectedPseudocountPerSemanticClass;
    unsigned long long _maxPromptLength;
    double _maxPromptWindowSeconds;
    NSString *_promptJoiningString;
    NSString *_modelTypeName;
    NSString *_subModelKeyString;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *subModelKeyString; // @synthesize subModelKeyString=_subModelKeyString;
@property(readonly, nonatomic) NSString *modelTypeName; // @synthesize modelTypeName=_modelTypeName;
@property(readonly, nonatomic) NSString *promptJoiningString; // @synthesize promptJoiningString=_promptJoiningString;
@property(readonly, nonatomic) double maxPromptWindowSeconds; // @synthesize maxPromptWindowSeconds=_maxPromptWindowSeconds;
@property(readonly, nonatomic) unsigned long long maxPromptLength; // @synthesize maxPromptLength=_maxPromptLength;
@property(readonly, nonatomic) double personalizationSelectedPseudocountPerSemanticClass; // @synthesize personalizationSelectedPseudocountPerSemanticClass=_personalizationSelectedPseudocountPerSemanticClass;
@property(readonly, nonatomic) double personalizationDisplayedPseudocount; // @synthesize personalizationDisplayedPseudocount=_personalizationDisplayedPseudocount;
@property(readonly, nonatomic) double personalizationExplorationFactor; // @synthesize personalizationExplorationFactor=_personalizationExplorationFactor;
@property(readonly, nonatomic) unsigned long long responsesToShowAtTopForDiversity; // @synthesize responsesToShowAtTopForDiversity=_responsesToShowAtTopForDiversity;
@property(readonly, nonatomic) unsigned long long defaultResponsesToReturn; // @synthesize defaultResponsesToReturn=_defaultResponsesToReturn;
@property(readonly, nonatomic) double minToShowThreshold; // @synthesize minToShowThreshold=_minToShowThreshold;
@property(readonly, nonatomic) double responsesBonus; // @synthesize responsesBonus=_responsesBonus;
@property(readonly, nonatomic) double classDiscount; // @synthesize classDiscount=_classDiscount;
@property(readonly, nonatomic) double weightForIndividualModel; // @synthesize weightForIndividualModel=_weightForIndividualModel;
@property(readonly, nonatomic) double weightForCategoryMax; // @synthesize weightForCategoryMax=_weightForCategoryMax;
@property(readonly, nonatomic) double weightForCategoryAverage; // @synthesize weightForCategoryAverage=_weightForCategoryAverage;
@property(readonly, nonatomic) BOOL isPerCategory; // @synthesize isPerCategory=_isPerCategory;
@property(readonly, nonatomic) BOOL isReplyTextRandomized; // @synthesize isReplyTextRandomized=_isReplyTextRandomized;
@property(readonly, nonatomic) BOOL isPersonalizationDisabled; // @synthesize isPersonalizationDisabled=_isPersonalizationDisabled;
- (id)initWithDictionary:(id)arg1;

@end

