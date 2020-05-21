//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableArray, PPSourceStats;

@interface PPMutableFeaturedItem : NSObject
{
    unsigned short _countForAlgorithm[15];
    unsigned short _rankCount[5];
    BOOL _strictFiltering;
    float _maxScore;
    float _minScore;
    float _meanScore;
    float _meanScoreWithOutliersRemoved;
    float _varianceScoreWithOutliersRemoved;
    float _sumDwellTimeInHours;
    float _recordCount;
    unsigned int _countInMobileMail;
    unsigned int _countInSafari;
    unsigned int _countInMail;
    unsigned int _countInMobileSafari;
    unsigned int _countInMobileSlideShow;
    unsigned int _countInMobileSMS;
    unsigned int _countInChat;
    unsigned int _countInNews;
    unsigned int _countInMaps;
    unsigned int _countInMobileCal;
    unsigned int _countInCoreRoutine;
    unsigned int _countInYelp;
    unsigned int _countInMusic;
    unsigned int _countInCal;
    unsigned int _countInWebKit;
    unsigned int _countInYoutube;
    unsigned int _countInReminders;
    unsigned int _countInMobileNotes;
    unsigned int _countInSpotify;
    unsigned int _countInNotes;
    unsigned int _countInPodcast;
    unsigned int _countInNetflix;
    float _meanInterArrivalHour;
    float _varianceInterArrivalHour;
    float _meanSourceDateInHours;
    float _varianceSourceDateInHours;
    float _timeSpanInHours;
    float _timeElapsedInHours;
    float _decayedSum;
    float _decayRate;
    unsigned long long _uniqueAlgorithmCount;
    unsigned long long _uniqueOsBuildCount;
    unsigned long long _uniqueAssetVersionCount;
    unsigned long long _uniqueBundleIdCount;
    unsigned long long _uniqueGroupIdCount;
    unsigned long long _uniqueSourceHourCount;
    NSMutableArray *_countInHour;
    unsigned long long _uniqueSourceDayOfWeekCount;
    NSDate *_scoringDate;
    PPSourceStats *_sourceStats;
    unsigned long long _namedEntityCharacterLength;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long namedEntityCharacterLength; // @synthesize namedEntityCharacterLength=_namedEntityCharacterLength;
@property(readonly, nonatomic) PPSourceStats *sourceStats; // @synthesize sourceStats=_sourceStats;
@property(readonly, nonatomic) NSDate *scoringDate; // @synthesize scoringDate=_scoringDate;
@property(readonly, nonatomic) BOOL strictFiltering; // @synthesize strictFiltering=_strictFiltering;
@property(readonly, nonatomic) float decayRate; // @synthesize decayRate=_decayRate;
@property(readonly, nonatomic) float decayedSum; // @synthesize decayedSum=_decayedSum;
@property(readonly, nonatomic) float timeElapsedInHours; // @synthesize timeElapsedInHours=_timeElapsedInHours;
@property(readonly, nonatomic) float timeSpanInHours; // @synthesize timeSpanInHours=_timeSpanInHours;
@property(readonly, nonatomic) float varianceSourceDateInHours; // @synthesize varianceSourceDateInHours=_varianceSourceDateInHours;
@property(readonly, nonatomic) float meanSourceDateInHours; // @synthesize meanSourceDateInHours=_meanSourceDateInHours;
@property(readonly, nonatomic) float varianceInterArrivalHour; // @synthesize varianceInterArrivalHour=_varianceInterArrivalHour;
@property(readonly, nonatomic) float meanInterArrivalHour; // @synthesize meanInterArrivalHour=_meanInterArrivalHour;
@property(readonly, nonatomic) unsigned long long uniqueSourceDayOfWeekCount; // @synthesize uniqueSourceDayOfWeekCount=_uniqueSourceDayOfWeekCount;
@property(readonly, nonatomic) NSMutableArray *countInHour; // @synthesize countInHour=_countInHour;
@property(readonly, nonatomic) unsigned long long uniqueSourceHourCount; // @synthesize uniqueSourceHourCount=_uniqueSourceHourCount;
@property(readonly, nonatomic) unsigned long long uniqueGroupIdCount; // @synthesize uniqueGroupIdCount=_uniqueGroupIdCount;
@property(readonly, nonatomic) unsigned int countInNetflix; // @synthesize countInNetflix=_countInNetflix;
@property(readonly, nonatomic) unsigned int countInPodcast; // @synthesize countInPodcast=_countInPodcast;
@property(readonly, nonatomic) unsigned int countInNotes; // @synthesize countInNotes=_countInNotes;
@property(readonly, nonatomic) unsigned int countInSpotify; // @synthesize countInSpotify=_countInSpotify;
@property(readonly, nonatomic) unsigned int countInMobileNotes; // @synthesize countInMobileNotes=_countInMobileNotes;
@property(readonly, nonatomic) unsigned int countInReminders; // @synthesize countInReminders=_countInReminders;
@property(readonly, nonatomic) unsigned int countInYoutube; // @synthesize countInYoutube=_countInYoutube;
@property(readonly, nonatomic) unsigned int countInWebKit; // @synthesize countInWebKit=_countInWebKit;
@property(readonly, nonatomic) unsigned int countInCal; // @synthesize countInCal=_countInCal;
@property(readonly, nonatomic) unsigned int countInMusic; // @synthesize countInMusic=_countInMusic;
@property(readonly, nonatomic) unsigned int countInYelp; // @synthesize countInYelp=_countInYelp;
@property(readonly, nonatomic) unsigned int countInCoreRoutine; // @synthesize countInCoreRoutine=_countInCoreRoutine;
@property(readonly, nonatomic) unsigned int countInMobileCal; // @synthesize countInMobileCal=_countInMobileCal;
@property(readonly, nonatomic) unsigned int countInMaps; // @synthesize countInMaps=_countInMaps;
@property(readonly, nonatomic) unsigned int countInNews; // @synthesize countInNews=_countInNews;
@property(readonly, nonatomic) unsigned int countInChat; // @synthesize countInChat=_countInChat;
@property(readonly, nonatomic) unsigned int countInMobileSMS; // @synthesize countInMobileSMS=_countInMobileSMS;
@property(readonly, nonatomic) unsigned int countInMobileSlideShow; // @synthesize countInMobileSlideShow=_countInMobileSlideShow;
@property(readonly, nonatomic) unsigned int countInMobileSafari; // @synthesize countInMobileSafari=_countInMobileSafari;
@property(readonly, nonatomic) unsigned int countInMail; // @synthesize countInMail=_countInMail;
@property(readonly, nonatomic) unsigned int countInSafari; // @synthesize countInSafari=_countInSafari;
@property(readonly, nonatomic) unsigned int countInMobileMail; // @synthesize countInMobileMail=_countInMobileMail;
@property(readonly, nonatomic) unsigned long long uniqueBundleIdCount; // @synthesize uniqueBundleIdCount=_uniqueBundleIdCount;
@property(readonly, nonatomic) unsigned long long uniqueAssetVersionCount; // @synthesize uniqueAssetVersionCount=_uniqueAssetVersionCount;
@property(readonly, nonatomic) unsigned long long uniqueOsBuildCount; // @synthesize uniqueOsBuildCount=_uniqueOsBuildCount;
@property(readonly, nonatomic) float recordCount; // @synthesize recordCount=_recordCount;
@property(readonly, nonatomic) float sumDwellTimeInHours; // @synthesize sumDwellTimeInHours=_sumDwellTimeInHours;
@property(readonly, nonatomic) float varianceScoreWithOutliersRemoved; // @synthesize varianceScoreWithOutliersRemoved=_varianceScoreWithOutliersRemoved;
@property(readonly, nonatomic) float meanScoreWithOutliersRemoved; // @synthesize meanScoreWithOutliersRemoved=_meanScoreWithOutliersRemoved;
@property(readonly, nonatomic) float meanScore; // @synthesize meanScore=_meanScore;
@property(readonly, nonatomic) float minScore; // @synthesize minScore=_minScore;
@property(readonly, nonatomic) float maxScore; // @synthesize maxScore=_maxScore;
@property(readonly, nonatomic) unsigned long long uniqueAlgorithmCount; // @synthesize uniqueAlgorithmCount=_uniqueAlgorithmCount;
- (float)computeModelScoreWithScoreInterpreter:(id)arg1;
- (id)computeModelScoreAndReturnFeaturesWithScoreInterpreter:(id)arg1;
- (id)generateScoreDict;
- (void)updateSpecializedFeaturesNamedEntity:(id)arg1;
- (id)initWithMutableAggregatedItem:(id)arg1 scoringDate:(id)arg2 decayRate:(float)arg3 sourceStats:(id)arg4 strictFiltering:(BOOL)arg5;

@end

