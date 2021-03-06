/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

@interface WFAQIScaleCategoryEPA : WFAQIScaleCategory <NWMColorWFAQIScaleCategory>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *nwm_colorIndices;
@property (nonatomic, readonly) unsigned long long nwm_lastIndex;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/NanoWeatherComplicationsCompanion.framework/NanoWeatherComplicationsCompanion

- (id)nwm_colorForIndex:(unsigned long long)arg1;
- (id)nwm_colorIndices;
- (id)nwm_descriptionKeyForCategoryIndex;
- (unsigned long long)nwm_lastIndex;

// Image: /System/Library/PrivateFrameworks/Weather.framework/Weather

- (id)description;
- (id)longDescription;
- (id)scaleClassName;
- (unsigned long long)warningLevel;

@end
