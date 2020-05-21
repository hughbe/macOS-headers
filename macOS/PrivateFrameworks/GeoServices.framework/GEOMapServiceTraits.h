//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOAutomobileOptions, GEOLocation, GEOMapRegion, GEOPDVenueIdentifier, GEOTraitsTransitScheduleFilter, GEOTransitOptions, GEOWalkingOptions, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOMapServiceTraits : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _engineTypes;
    CDStruct_95bda58d _knownClientResolvedTypes;
    CDStruct_95bda58d _supportedAutocompleteListTypes;
    CDStruct_95bda58d _supportedAutocompleteResultCellTypes;
    CDStruct_95bda58d _supportedChildActions;
    CDStruct_95bda58d _transportTypes;
    struct GEOSessionID _sessionId;
    NSString *_analyticsAppIdentifier;
    NSString *_appIdentifier;
    NSString *_appMajorVersion;
    NSString *_appMinorVersion;
    GEOAutomobileOptions *_automobileOptions;
    NSString *_carHeadunitManufacturer;
    NSString *_carHeadunitModel;
    double _carHeadunitPixelHeight;
    double _carHeadunitPixelWidth;
    GEOLocation *_deviceLocation;
    NSMutableArray *_deviceDisplayLanguages;
    NSString *_deviceKeyboardLocale;
    NSString *_deviceSpokenLocale;
    NSString *_displayRegion;
    NSMutableArray *_historicalLocations;
    GEOMapRegion *_mapRegion;
    double _mapZoomLevel;
    NSMutableArray *_photoSizes;
    NSString *_providerID;
    NSMutableArray *_reviewUserPhotoSizes;
    double _sessionRelativeTimestamp;
    GEOTransitOptions *_transitOptions;
    GEOTraitsTransitScheduleFilter *_transitScheduleFilter;
    GEOTraitsTransitScheduleFilter *_transitTripStopTimeFilter;
    GEOPDVenueIdentifier *_venueIdentifier;
    GEOWalkingOptions *_walkingOptions;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _carHeadunitConnectionType;
    int _carHeadunitInteractionModel;
    int _deviceBatteryState;
    int _deviceInterfaceOrientation;
    unsigned int _httpRequestPriority;
    int _mode;
    unsigned int _photosCount;
    int _requestPurpose;
    unsigned int _reviewUserPhotosCount;
    unsigned int _sequenceNumber;
    int _source;
    unsigned int _timeSinceMapEnteredForeground;
    unsigned int _timeSinceMapViewportChanged;
    BOOL _appDarkMode;
    BOOL _autocompleteRequestSupportsSectionHeader;
    BOOL _deviceDarkMode;
    BOOL _deviceInVehicle;
    BOOL _isAPICall;
    BOOL _isRedoSearch;
    BOOL _isRefund;
    BOOL _isSettlement;
    BOOL _navigating;
    BOOL _supportAutocompleteRapAffordance;
    BOOL _supportChildItems;
    BOOL _supportClientRankingFeatureMetadata;
    BOOL _supportDirectionIntentAutocomplete;
    BOOL _supportDirectionIntentSearch;
    BOOL _supportDymSuggestion;
    BOOL _supportUnresolvedDirectionIntent;
    BOOL _supportsBrandFallback;
    BOOL _useBackgroundUrl;
    BOOL _wantsBrandIcon;
    struct {
        unsigned int has_sessionId:1;
        unsigned int has_carHeadunitPixelHeight:1;
        unsigned int has_carHeadunitPixelWidth:1;
        unsigned int has_mapZoomLevel:1;
        unsigned int has_sessionRelativeTimestamp:1;
        unsigned int has_carHeadunitConnectionType:1;
        unsigned int has_carHeadunitInteractionModel:1;
        unsigned int has_deviceBatteryState:1;
        unsigned int has_deviceInterfaceOrientation:1;
        unsigned int has_httpRequestPriority:1;
        unsigned int has_mode:1;
        unsigned int has_photosCount:1;
        unsigned int has_requestPurpose:1;
        unsigned int has_reviewUserPhotosCount:1;
        unsigned int has_sequenceNumber:1;
        unsigned int has_source:1;
        unsigned int has_timeSinceMapEnteredForeground:1;
        unsigned int has_timeSinceMapViewportChanged:1;
        unsigned int has_appDarkMode:1;
        unsigned int has_autocompleteRequestSupportsSectionHeader:1;
        unsigned int has_deviceDarkMode:1;
        unsigned int has_deviceInVehicle:1;
        unsigned int has_isAPICall:1;
        unsigned int has_isRedoSearch:1;
        unsigned int has_isRefund:1;
        unsigned int has_isSettlement:1;
        unsigned int has_navigating:1;
        unsigned int has_supportAutocompleteRapAffordance:1;
        unsigned int has_supportChildItems:1;
        unsigned int has_supportClientRankingFeatureMetadata:1;
        unsigned int has_supportDirectionIntentAutocomplete:1;
        unsigned int has_supportDirectionIntentSearch:1;
        unsigned int has_supportDymSuggestion:1;
        unsigned int has_supportUnresolvedDirectionIntent:1;
        unsigned int has_supportsBrandFallback:1;
        unsigned int has_useBackgroundUrl:1;
        unsigned int has_wantsBrandIcon:1;
        unsigned int read_unknownFields:1;
        unsigned int read_engineTypes:1;
        unsigned int read_knownClientResolvedTypes:1;
        unsigned int read_supportedAutocompleteListTypes:1;
        unsigned int read_supportedAutocompleteResultCellTypes:1;
        unsigned int read_supportedChildActions:1;
        unsigned int read_transportTypes:1;
        unsigned int read_analyticsAppIdentifier:1;
        unsigned int read_appIdentifier:1;
        unsigned int read_appMajorVersion:1;
        unsigned int read_appMinorVersion:1;
        unsigned int read_automobileOptions:1;
        unsigned int read_carHeadunitManufacturer:1;
        unsigned int read_carHeadunitModel:1;
        unsigned int read_deviceLocation:1;
        unsigned int read_deviceDisplayLanguages:1;
        unsigned int read_deviceKeyboardLocale:1;
        unsigned int read_deviceSpokenLocale:1;
        unsigned int read_displayRegion:1;
        unsigned int read_historicalLocations:1;
        unsigned int read_mapRegion:1;
        unsigned int read_photoSizes:1;
        unsigned int read_providerID:1;
        unsigned int read_reviewUserPhotoSizes:1;
        unsigned int read_transitOptions:1;
        unsigned int read_transitScheduleFilter:1;
        unsigned int read_transitTripStopTimeFilter:1;
        unsigned int read_venueIdentifier:1;
        unsigned int read_walkingOptions:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_engineTypes:1;
        unsigned int wrote_knownClientResolvedTypes:1;
        unsigned int wrote_supportedAutocompleteListTypes:1;
        unsigned int wrote_supportedAutocompleteResultCellTypes:1;
        unsigned int wrote_supportedChildActions:1;
        unsigned int wrote_transportTypes:1;
        unsigned int wrote_sessionId:1;
        unsigned int wrote_analyticsAppIdentifier:1;
        unsigned int wrote_appIdentifier:1;
        unsigned int wrote_appMajorVersion:1;
        unsigned int wrote_appMinorVersion:1;
        unsigned int wrote_automobileOptions:1;
        unsigned int wrote_carHeadunitManufacturer:1;
        unsigned int wrote_carHeadunitModel:1;
        unsigned int wrote_carHeadunitPixelHeight:1;
        unsigned int wrote_carHeadunitPixelWidth:1;
        unsigned int wrote_deviceLocation:1;
        unsigned int wrote_deviceDisplayLanguages:1;
        unsigned int wrote_deviceKeyboardLocale:1;
        unsigned int wrote_deviceSpokenLocale:1;
        unsigned int wrote_displayRegion:1;
        unsigned int wrote_historicalLocations:1;
        unsigned int wrote_mapRegion:1;
        unsigned int wrote_mapZoomLevel:1;
        unsigned int wrote_photoSizes:1;
        unsigned int wrote_providerID:1;
        unsigned int wrote_reviewUserPhotoSizes:1;
        unsigned int wrote_sessionRelativeTimestamp:1;
        unsigned int wrote_transitOptions:1;
        unsigned int wrote_transitScheduleFilter:1;
        unsigned int wrote_transitTripStopTimeFilter:1;
        unsigned int wrote_venueIdentifier:1;
        unsigned int wrote_walkingOptions:1;
        unsigned int wrote_carHeadunitConnectionType:1;
        unsigned int wrote_carHeadunitInteractionModel:1;
        unsigned int wrote_deviceBatteryState:1;
        unsigned int wrote_deviceInterfaceOrientation:1;
        unsigned int wrote_httpRequestPriority:1;
        unsigned int wrote_mode:1;
        unsigned int wrote_photosCount:1;
        unsigned int wrote_requestPurpose:1;
        unsigned int wrote_reviewUserPhotosCount:1;
        unsigned int wrote_sequenceNumber:1;
        unsigned int wrote_source:1;
        unsigned int wrote_timeSinceMapEnteredForeground:1;
        unsigned int wrote_timeSinceMapViewportChanged:1;
        unsigned int wrote_appDarkMode:1;
        unsigned int wrote_autocompleteRequestSupportsSectionHeader:1;
        unsigned int wrote_deviceDarkMode:1;
        unsigned int wrote_deviceInVehicle:1;
        unsigned int wrote_isAPICall:1;
        unsigned int wrote_isRedoSearch:1;
        unsigned int wrote_isRefund:1;
        unsigned int wrote_isSettlement:1;
        unsigned int wrote_navigating:1;
        unsigned int wrote_supportAutocompleteRapAffordance:1;
        unsigned int wrote_supportChildItems:1;
        unsigned int wrote_supportClientRankingFeatureMetadata:1;
        unsigned int wrote_supportDirectionIntentAutocomplete:1;
        unsigned int wrote_supportDirectionIntentSearch:1;
        unsigned int wrote_supportDymSuggestion:1;
        unsigned int wrote_supportUnresolvedDirectionIntent:1;
        unsigned int wrote_supportsBrandFallback:1;
        unsigned int wrote_useBackgroundUrl:1;
        unsigned int wrote_wantsBrandIcon:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)historicalLocationsType;
+ (Class)reviewUserPhotoSizesType;
+ (Class)photoSizesType;
+ (Class)deviceDisplayLanguageType;
- (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)clearSensitiveFields;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasSupportAutocompleteRapAffordance;
@property(nonatomic) BOOL supportAutocompleteRapAffordance;
- (int)StringAsSupportedAutocompleteResultCellTypes:(id)arg1;
- (id)supportedAutocompleteResultCellTypesAsString:(int)arg1;
- (void)setSupportedAutocompleteResultCellTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)supportedAutocompleteResultCellTypeAtIndex:(unsigned long long)arg1;
- (void)_addNoFlagsSupportedAutocompleteResultCellType:(int)arg1;
- (void)addSupportedAutocompleteResultCellType:(int)arg1;
- (void)clearSupportedAutocompleteResultCellTypes;
@property(readonly, nonatomic) int *supportedAutocompleteResultCellTypes;
@property(readonly, nonatomic) unsigned long long supportedAutocompleteResultCellTypesCount;
- (void)_readSupportedAutocompleteResultCellTypes;
@property(nonatomic) BOOL hasAutocompleteRequestSupportsSectionHeader;
@property(nonatomic) BOOL autocompleteRequestSupportsSectionHeader;
@property(nonatomic) BOOL hasIsRefund;
@property(nonatomic) BOOL isRefund;
@property(nonatomic) BOOL hasSupportChildItems;
@property(nonatomic) BOOL supportChildItems;
- (int)StringAsSupportedChildActions:(id)arg1;
- (id)supportedChildActionsAsString:(int)arg1;
- (void)setSupportedChildActions:(int *)arg1 count:(unsigned long long)arg2;
- (int)supportedChildActionAtIndex:(unsigned long long)arg1;
- (void)_addNoFlagsSupportedChildAction:(int)arg1;
- (void)addSupportedChildAction:(int)arg1;
- (void)clearSupportedChildActions;
@property(readonly, nonatomic) int *supportedChildActions;
@property(readonly, nonatomic) unsigned long long supportedChildActionsCount;
- (void)_readSupportedChildActions;
@property(nonatomic) BOOL hasSupportClientRankingFeatureMetadata;
@property(nonatomic) BOOL supportClientRankingFeatureMetadata;
@property(retain, nonatomic) GEOTraitsTransitScheduleFilter *transitTripStopTimeFilter;
@property(readonly, nonatomic) BOOL hasTransitTripStopTimeFilter;
- (void)_readTransitTripStopTimeFilter;
@property(nonatomic) BOOL hasIsSettlement;
@property(nonatomic) BOOL isSettlement;
- (int)StringAsSupportedAutocompleteListTypes:(id)arg1;
- (id)supportedAutocompleteListTypesAsString:(int)arg1;
- (void)setSupportedAutocompleteListTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)supportedAutocompleteListTypeAtIndex:(unsigned long long)arg1;
- (void)_addNoFlagsSupportedAutocompleteListType:(int)arg1;
- (void)addSupportedAutocompleteListType:(int)arg1;
- (void)clearSupportedAutocompleteListTypes;
@property(readonly, nonatomic) int *supportedAutocompleteListTypes;
@property(readonly, nonatomic) unsigned long long supportedAutocompleteListTypesCount;
- (void)_readSupportedAutocompleteListTypes;
- (int)StringAsRequestPurpose:(id)arg1;
- (id)requestPurposeAsString:(int)arg1;
@property(nonatomic) BOOL hasRequestPurpose;
@property(nonatomic) int requestPurpose;
@property(nonatomic) BOOL hasSupportsBrandFallback;
@property(nonatomic) BOOL supportsBrandFallback;
@property(nonatomic) BOOL hasAppDarkMode;
@property(nonatomic) BOOL appDarkMode;
@property(nonatomic) BOOL hasDeviceDarkMode;
@property(nonatomic) BOOL deviceDarkMode;
@property(nonatomic) BOOL hasSupportUnresolvedDirectionIntent;
@property(nonatomic) BOOL supportUnresolvedDirectionIntent;
@property(nonatomic) BOOL hasSupportDirectionIntentAutocomplete;
@property(nonatomic) BOOL supportDirectionIntentAutocomplete;
@property(nonatomic) BOOL hasSessionRelativeTimestamp;
@property(nonatomic) double sessionRelativeTimestamp;
@property(retain, nonatomic) NSString *analyticsAppIdentifier;
@property(readonly, nonatomic) BOOL hasAnalyticsAppIdentifier;
- (void)_readAnalyticsAppIdentifier;
@property(nonatomic) BOOL hasHttpRequestPriority;
@property(nonatomic) unsigned int httpRequestPriority;
@property(nonatomic) BOOL hasUseBackgroundUrl;
@property(nonatomic) BOOL useBackgroundUrl;
@property(nonatomic) BOOL hasDeviceInVehicle;
@property(nonatomic) BOOL deviceInVehicle;
@property(retain, nonatomic) GEOPDVenueIdentifier *venueIdentifier;
@property(readonly, nonatomic) BOOL hasVenueIdentifier;
- (void)_readVenueIdentifier;
@property(nonatomic) BOOL hasWantsBrandIcon;
@property(nonatomic) BOOL wantsBrandIcon;
- (int)StringAsKnownClientResolvedTypes:(id)arg1;
- (id)knownClientResolvedTypesAsString:(int)arg1;
- (void)setKnownClientResolvedTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)knownClientResolvedTypeAtIndex:(unsigned long long)arg1;
- (void)_addNoFlagsKnownClientResolvedType:(int)arg1;
- (void)addKnownClientResolvedType:(int)arg1;
- (void)clearKnownClientResolvedTypes;
@property(readonly, nonatomic) int *knownClientResolvedTypes;
@property(readonly, nonatomic) unsigned long long knownClientResolvedTypesCount;
- (void)_readKnownClientResolvedTypes;
@property(nonatomic) BOOL hasSupportDymSuggestion;
@property(nonatomic) BOOL supportDymSuggestion;
@property(nonatomic) BOOL hasSupportDirectionIntentSearch;
@property(nonatomic) BOOL supportDirectionIntentSearch;
- (int)StringAsEngineTypes:(id)arg1;
- (id)engineTypesAsString:(int)arg1;
- (void)setEngineTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)engineTypeAtIndex:(unsigned long long)arg1;
- (void)_addNoFlagsEngineType:(int)arg1;
- (void)addEngineType:(int)arg1;
- (void)clearEngineTypes;
@property(readonly, nonatomic) int *engineTypes;
@property(readonly, nonatomic) unsigned long long engineTypesCount;
- (void)_readEngineTypes;
@property(retain, nonatomic) GEOWalkingOptions *walkingOptions;
@property(readonly, nonatomic) BOOL hasWalkingOptions;
- (void)_readWalkingOptions;
@property(retain, nonatomic) GEOTransitOptions *transitOptions;
@property(readonly, nonatomic) BOOL hasTransitOptions;
- (void)_readTransitOptions;
@property(retain, nonatomic) GEOAutomobileOptions *automobileOptions;
@property(readonly, nonatomic) BOOL hasAutomobileOptions;
- (void)_readAutomobileOptions;
- (id)historicalLocationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)historicalLocationsCount;
- (void)_addNoFlagsHistoricalLocations:(id)arg1;
- (void)addHistoricalLocations:(id)arg1;
- (void)clearHistoricalLocations;
@property(retain, nonatomic) NSMutableArray *historicalLocations;
- (void)_readHistoricalLocations;
@property(nonatomic) BOOL hasIsRedoSearch;
@property(nonatomic) BOOL isRedoSearch;
@property(nonatomic) BOOL hasNavigating;
@property(nonatomic) BOOL navigating;
- (int)StringAsCarHeadunitConnectionType:(id)arg1;
- (id)carHeadunitConnectionTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasCarHeadunitConnectionType;
@property(nonatomic) int carHeadunitConnectionType;
- (int)StringAsDeviceBatteryState:(id)arg1;
- (id)deviceBatteryStateAsString:(int)arg1;
@property(nonatomic) BOOL hasDeviceBatteryState;
@property(nonatomic) int deviceBatteryState;
- (int)StringAsDeviceInterfaceOrientation:(id)arg1;
- (id)deviceInterfaceOrientationAsString:(int)arg1;
@property(nonatomic) BOOL hasDeviceInterfaceOrientation;
@property(nonatomic) int deviceInterfaceOrientation;
@property(retain, nonatomic) NSString *providerID;
@property(readonly, nonatomic) BOOL hasProviderID;
- (void)_readProviderID;
@property(retain, nonatomic) NSString *displayRegion;
@property(readonly, nonatomic) BOOL hasDisplayRegion;
- (void)_readDisplayRegion;
- (int)StringAsMode:(id)arg1;
- (id)modeAsString:(int)arg1;
@property(nonatomic) BOOL hasMode;
@property(nonatomic) int mode;
@property(nonatomic) BOOL hasMapZoomLevel;
@property(nonatomic) double mapZoomLevel;
@property(retain, nonatomic) GEOTraitsTransitScheduleFilter *transitScheduleFilter;
@property(readonly, nonatomic) BOOL hasTransitScheduleFilter;
- (void)_readTransitScheduleFilter;
@property(nonatomic) BOOL hasCarHeadunitPixelHeight;
@property(nonatomic) double carHeadunitPixelHeight;
@property(nonatomic) BOOL hasCarHeadunitPixelWidth;
@property(nonatomic) double carHeadunitPixelWidth;
@property(retain, nonatomic) NSString *carHeadunitModel;
@property(readonly, nonatomic) BOOL hasCarHeadunitModel;
- (void)_readCarHeadunitModel;
@property(retain, nonatomic) NSString *carHeadunitManufacturer;
@property(readonly, nonatomic) BOOL hasCarHeadunitManufacturer;
- (void)_readCarHeadunitManufacturer;
- (int)StringAsCarHeadunitInteractionModel:(id)arg1;
- (id)carHeadunitInteractionModelAsString:(int)arg1;
@property(nonatomic) BOOL hasCarHeadunitInteractionModel;
@property(nonatomic) int carHeadunitInteractionModel;
@property(nonatomic) BOOL hasTimeSinceMapViewportChanged;
@property(nonatomic) unsigned int timeSinceMapViewportChanged;
@property(nonatomic) BOOL hasTimeSinceMapEnteredForeground;
@property(nonatomic) unsigned int timeSinceMapEnteredForeground;
@property(nonatomic) BOOL hasReviewUserPhotosCount;
@property(nonatomic) unsigned int reviewUserPhotosCount;
- (id)reviewUserPhotoSizesAtIndex:(unsigned long long)arg1;
- (unsigned long long)reviewUserPhotoSizesCount;
- (void)_addNoFlagsReviewUserPhotoSizes:(id)arg1;
- (void)addReviewUserPhotoSizes:(id)arg1;
- (void)clearReviewUserPhotoSizes;
@property(retain, nonatomic) NSMutableArray *reviewUserPhotoSizes;
- (void)_readReviewUserPhotoSizes;
@property(nonatomic) BOOL hasPhotosCount;
@property(nonatomic) unsigned int photosCount;
- (id)photoSizesAtIndex:(unsigned long long)arg1;
- (unsigned long long)photoSizesCount;
- (void)_addNoFlagsPhotoSizes:(id)arg1;
- (void)addPhotoSizes:(id)arg1;
- (void)clearPhotoSizes;
@property(retain, nonatomic) NSMutableArray *photoSizes;
- (void)_readPhotoSizes;
- (int)StringAsSource:(id)arg1;
- (id)sourceAsString:(int)arg1;
@property(nonatomic) BOOL hasSource;
@property(nonatomic) int source;
@property(nonatomic) BOOL hasIsAPICall;
@property(nonatomic) BOOL isAPICall;
@property(retain, nonatomic) NSString *deviceSpokenLocale;
@property(readonly, nonatomic) BOOL hasDeviceSpokenLocale;
- (void)_readDeviceSpokenLocale;
@property(retain, nonatomic) NSString *deviceKeyboardLocale;
@property(readonly, nonatomic) BOOL hasDeviceKeyboardLocale;
- (void)_readDeviceKeyboardLocale;
- (id)deviceDisplayLanguageAtIndex:(unsigned long long)arg1;
- (unsigned long long)deviceDisplayLanguagesCount;
- (void)_addNoFlagsDeviceDisplayLanguage:(id)arg1;
- (void)addDeviceDisplayLanguage:(id)arg1;
- (void)clearDeviceDisplayLanguages;
@property(retain, nonatomic) NSMutableArray *deviceDisplayLanguages;
- (void)_readDeviceDisplayLanguages;
@property(retain, nonatomic) GEOMapRegion *mapRegion;
@property(readonly, nonatomic) BOOL hasMapRegion;
- (void)_readMapRegion;
- (int)StringAsTransportTypes:(id)arg1;
- (id)transportTypesAsString:(int)arg1;
- (void)setTransportTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)transportTypeAtIndex:(unsigned long long)arg1;
- (void)_addNoFlagsTransportType:(int)arg1;
- (void)addTransportType:(int)arg1;
- (void)clearTransportTypes;
@property(readonly, nonatomic) int *transportTypes;
@property(readonly, nonatomic) unsigned long long transportTypesCount;
- (void)_readTransportTypes;
@property(retain, nonatomic) GEOLocation *deviceLocation;
@property(readonly, nonatomic) BOOL hasDeviceLocation;
- (void)_readDeviceLocation;
@property(retain, nonatomic) NSString *appMinorVersion;
@property(readonly, nonatomic) BOOL hasAppMinorVersion;
- (void)_readAppMinorVersion;
@property(retain, nonatomic) NSString *appMajorVersion;
@property(readonly, nonatomic) BOOL hasAppMajorVersion;
- (void)_readAppMajorVersion;
@property(retain, nonatomic) NSString *appIdentifier;
@property(readonly, nonatomic) BOOL hasAppIdentifier;
- (void)_readAppIdentifier;
@property(nonatomic) BOOL hasSequenceNumber;
@property(nonatomic) unsigned int sequenceNumber;
@property(nonatomic) BOOL hasSessionId;
@property(nonatomic) struct GEOSessionID sessionId;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;
- (void)updateAnalyticsShortSession;
- (void)_internal_incrementSessionCounters;
- (id)copyByIncrementingSessionCounters;
- (void)clearLocations;
- (void)clearSessionId;

@end

