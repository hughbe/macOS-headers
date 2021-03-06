/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WeatherAnalytics.framework/WeatherAnalytics
 */

@interface WAAQIData : NSObject <AADataEventType> {
    NSNumber * _category;
    NSNumber * _index;
    WAProviderDataOrigination * _providerDataOrigination;
    NSString * _scale;
}

@property (nonatomic, readonly) NSNumber *category;
@property (nonatomic, readonly) NSNumber *index;
@property (nonatomic, readonly) WAProviderDataOrigination *providerDataOrigination;
@property (nonatomic, readonly) NSString *scale;

+ (id)dataName;

- (void).cxx_destruct;
- (id)category;
- (id)index;
- (id)initWithIndex:(id)arg1 category:(id)arg2 scale:(id)arg3 providerDataOrigination:(id)arg4;
- (id)providerDataOrigination;
- (id)scale;
- (id)toDict;

@end
