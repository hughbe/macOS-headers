/* Generated by RuntimeBrowser.
 */

@protocol _PARResult <NSObject>

@required

- (NSString *)adamId;
- (void)addAlternativeURLs:(NSString *)arg1;
- (void)addEntities:(_PAREntity *)arg1;
- (NSArray *)alternativeURLs;
- (NSString *)alternativeURLsAtIndex:(unsigned long long)arg1;
- (unsigned long long)alternativeURLsCount;
- (NSString *)appleReferrer;
- (NSString *)bundleId;
- (NSString *)canonicalId;
- (void)clearAlternativeURLs;
- (void)clearEntities;
- (NSString *)completedQuery;
- (NSString *)correctedQuery;
- (NSString *)dataServiceId;
- (int)engagementScore;
- (NSArray *)entities;
- (_PAREntity *)entitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)entitiesCount;
- (NSData *)feedback;
- (bool)getServerFeatures:(double*)arg1 forKey:(NSString *)arg2;
- (NSString *)identifier;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSString *)intendedQuery;
- (bool)isQuickGlance;
- (NSData *)jsonData;
- (int)maxAgeSeconds;
- (int)minimumRankOfTopHitToSuppressResult;
- (bool)noGoTakeover;
- (int)placement;
- (bool)preferTopPlatter;
- (int)queryIndependentEngagementScore;
- (bool)renderHorizontallyWithOtherResultsInCategory;
- (float)score;
- (NSString *)sectionBundleId;
- (NSDictionary *)serverFeatures;
- (float)serverScore;
- (void)setAdamId:(NSString *)arg1;
- (void)setAlternativeURLs:(NSArray *)arg1;
- (void)setAppleReferrer:(NSString *)arg1;
- (void)setBundleId:(NSString *)arg1;
- (void)setCanonicalId:(NSString *)arg1;
- (void)setCompletedQuery:(NSString *)arg1;
- (void)setCorrectedQuery:(NSString *)arg1;
- (void)setDataServiceId:(NSString *)arg1;
- (void)setEngagementScore:(int)arg1;
- (void)setEntities:(NSArray *)arg1;
- (void)setFeedback:(NSData *)arg1;
- (void)setIdentifier:(NSString *)arg1;
- (void)setIntendedQuery:(NSString *)arg1;
- (void)setIsQuickGlance:(bool)arg1;
- (void)setMaxAgeSeconds:(int)arg1;
- (void)setMinimumRankOfTopHitToSuppressResult:(int)arg1;
- (void)setNoGoTakeover:(bool)arg1;
- (void)setPlacement:(int)arg1;
- (void)setPreferTopPlatter:(bool)arg1;
- (void)setQueryIndependentEngagementScore:(int)arg1;
- (void)setRenderHorizontallyWithOtherResultsInCategory:(bool)arg1;
- (void)setScore:(float)arg1;
- (void)setSectionBundleId:(NSString *)arg1;
- (void)setServerFeatures:(NSDictionary *)arg1;
- (void)setServerFeatures:(double)arg1 forKey:(NSString *)arg2;
- (void)setServerScore:(float)arg1;
- (void)setShouldUseCompactDisplay:(bool)arg1;
- (void)setTemplate:(_PARResult_Template *)arg1;
- (void)setTopHit:(int)arg1;
- (void)setType:(NSString *)arg1;
- (void)setUrl:(NSString *)arg1;
- (void)setUsesCompactDisplay:(bool)arg1;
- (bool)shouldUseCompactDisplay;
- (_PARResult_Template *)template;
- (int)topHit;
- (NSString *)type;
- (NSString *)url;
- (bool)usesCompactDisplay;

@end
