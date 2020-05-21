//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GEOAnalyticsPipelinePortal : NSObject
{
}

+ (void)captureUserAction:(int)arg1 target:(int)arg2 value:(id)arg3;
+ (void)captureDirectionsRequestDetailsWithDirectionsRequestDetails_navStarted:(id)arg1 directionsRequestDetails_purpose:(int)arg2 directionsRequestDetails_origin:(int)arg3 directionsRequestDetails_destination:(int)arg4;
+ (void)captureTableBookedWithTableBookedSession_bookedTableSessionId:(id)arg1 tableBookedSession_bookedTables:(id)arg2;
+ (void)captureTableBookingWithTableBookingSession_bookTableSessionId:(id)arg1 tableBookingSession_endState:(int)arg2 tableBookingSession_endView:(int)arg3 tableBookingSession_bookTableAppId:(id)arg4 tableBookingSession_muid:(id)arg5 tableBookingSession_blurredReservationTimestamp:(id)arg6 tableBookingSession_blurredBookingTimestamp:(id)arg7 tableBookingSession_durationOfSessionInSeconds:(id)arg8 tableBookingSession_installNeeded:(id)arg9 tableBookingSession_installNeededTappedAppId:(id)arg10 tableBookingSession_installCompleted:(id)arg11 tableBookingSession_tableSize:(id)arg12 tableBookingSession_addedSpecialRequest:(id)arg13 tableBookingSession_swipedAvailableTimes:(id)arg14 tableBookingSession_tappedDatePicker:(id)arg15 tableBookingSession_errorMessages:(id)arg16;
+ (void)captureRideBookedWithRideBookedSession_rideBookedSessionId:(id)arg1 rideBookedSession_bookedUsingMaps:(id)arg2 rideBookedSession_cancelled:(id)arg3 rideBookedSession_contactedDriver:(id)arg4 rideBookedSession_viewedInProactiveTray:(id)arg5 rideBookedSession_tappedProactiveTrayItem:(id)arg6 rideBookedSession_viewedDetails:(id)arg7 rideBookedSession_invalidVehicleLocation:(id)arg8 rideBookedSession_missingVehicleLocation:(id)arg9 rideBookedSession_rideAppId:(id)arg10 rideBookedSession_rideAppVersion:(id)arg11 rideBookedSession_intentResponseFailures:(id)arg12;
+ (void)captureRideBookingWithRideBookingSession_rideBookingSessionId:(id)arg1 rideBookingSession_statusIssue:(int)arg2 rideBookingSession_endState:(int)arg3 rideBookingSession_endView:(int)arg4 rideBookingSession_rideAppId:(id)arg5 rideBookingSession_rideAppVersion:(id)arg6 rideBookingSession_originBlurred:(id)arg7 rideBookingSession_destinationBlurred:(id)arg8 rideBookingSession_exploredOtherOptions:(id)arg9 rideBookingSession_distanceToPickupInMeters:(id)arg10 rideBookingSession_paymentIsApplePay:(id)arg11 rideBookingSession_numberOfAvailableExtensions:(id)arg12 rideBookingSession_switchedApp:(id)arg13 rideBookingSession_comparedRideOptions:(id)arg14 rideBookingSession_showedSurgePricingAlert:(id)arg15 rideBookingSession_durationOfSessionInSeconds:(id)arg16 rideBookingSession_installedApp:(id)arg17 rideBookingSession_timestamp:(id)arg18 rideBookingSession_unavailable:(id)arg19 rideBookingSession_movedPickupLocation:(id)arg20 rideBookingSession_errorMessages:(id)arg21 rideBookingSession_intentResponseFailures:(id)arg22;
+ (void)captureTripDepartureWithTripDepartureFeedback_transportMode:(int)arg1 tripDepartureFeedback_distanceFromOrigin:(id)arg2 tripDepartureFeedback_timeFromOrigin:(id)arg3;
+ (void)captureTelemetricWithTelemetric_telemetricEntitys:(id)arg1;
+ (void)captureMapKitCountsWithMapKitCounts_mapKitCounts:(id)arg1;
+ (void)captureCommuteWindowWithCommuteWindow_startTime:(id)arg1 commuteWindow_duration:(id)arg2 commuteWindow_predictedExitTime:(id)arg3 commuteWindow_endReason:(int)arg4 commuteWindow_numberOfAlertingResponses:(id)arg5 commuteWindow_numberOfDoomRoutingRequests:(id)arg6 commuteWindow_predictedDestinations:(id)arg7;
+ (void)captureWidgetInteractionWithMapsWidgetsInteractionSession_mapsWidgetType:(int)arg1 mapsWidgetsInteractionSession_endState:(int)arg2 mapsWidgetsInteractionSession_lockedMode:(id)arg3 mapsWidgetsInteractionSession_localHour:(id)arg4 mapsWidgetsInteractionSession_localDayOfWeek:(id)arg5 mapsWidgetsInteractionSession_duration:(id)arg6 mapsWidgetsInteractionSession_mapsNearbyWidget:(id)arg7 mapsWidgetsInteractionSession_mapsTransitWidget:(id)arg8 mapsWidgetsInteractionSession_mapsDestinationsWidget:(id)arg9;
+ (void)captureTtlInitialTimeWithTimeToLeaveInitialTravelTimeEvent_travelTime:(id)arg1;
+ (void)captureTtlHypothesisWithTimeToLeaveHypothesisEvent_arrival:(int)arg1 timeToLeaveHypothesisEvent_departure:(int)arg2 timeToLeaveHypothesisEvent_ttlUiNotificationShown:(int)arg3 timeToLeaveHypothesisEvent_earliestArrivalOffset:(id)arg4 timeToLeaveHypothesisEvent_earliestDepartureOffset:(id)arg5 timeToLeaveHypothesisEvent_latestArrivalOffset:(id)arg6 timeToLeaveHypothesisEvent_latestDepartureOffset:(id)arg7 timeToLeaveHypothesisEvent_numberOfReroutes:(id)arg8;
+ (void)captureTransitAppLaunchWithTransitAppLaunchEvent_bundleIdentifier:(id)arg1 transitAppLaunchEvent_source:(id)arg2 transitAppLaunchEvent_destination:(id)arg3 transitAppLaunchEvent_timestamp:(id)arg4;
+ (void)captureTileSetStateWithTileSetStateEvent_tileSetStateType:(int)arg1 tileSetStateEvent_newCoverage:(id)arg2 tileSetStateEvent_oldCoverage:(id)arg3 tileSetStateEvent_durationInOldState:(id)arg4;
+ (void)captureMapLaunchWithMapLaunchEvent_launchUri:(id)arg1 mapLaunchEvent_sourceAppId:(id)arg2 GEOTimeToLeaveMapLaunch_minutesUntilEvent:(id)arg3;
+ (void)captureProactiveSuggestionWithProactiveSuggestionInteractionSessionEvent_listType:(int)arg1 proactiveSuggestionInteractionSessionEvent_interactedItemIndex:(id)arg2 proactiveSuggestionInteractionSessionEvent_duration:(id)arg3 proactiveSuggestionInteractionSessionEvent_proactiveItems:(id)arg4;
+ (void)captureMarcoLiteWithMarcoLiteUsage_totalNavTime:(id)arg1 marcoLiteUsage_usageStates:(id)arg2;
+ (void)capturePredExTrainingWithPredExTrainingData_chanceOfPrecipitation:(id)arg1 predExTrainingData_chanceOfRain:(id)arg2 predExTrainingData_chanceOfSnow:(id)arg3 predExTrainingData_endTime:(id)arg4 predExTrainingData_durationUntilEventEnd:(id)arg5 predExTrainingData_durationUntilEventStart:(id)arg6 predExTrainingData_startTime:(id)arg7 predExTrainingData_temperature:(id)arg8 predExTrainingData_timeOfDay:(id)arg9 predExTrainingData_timeSinceBackgrounded:(id)arg10 predExTrainingData_actualTransportMode:(int)arg11 predExTrainingData_dayOfWeek:(id)arg12 predExTrainingData_distanceFromHereToHome:(int)arg13 predExTrainingData_distanceFromHereToOrigin:(int)arg14 predExTrainingData_distanceFromHereToParkedCar:(int)arg15 predExTrainingData_distanceFromHereToWork:(int)arg16 predExTrainingData_distanceFromHere:(int)arg17 predExTrainingData_distanceFromOriginToDestination:(int)arg18 predExTrainingData_entryType:(int)arg19 predExTrainingData_weatherType:(int)arg20 predExTrainingData_mapType:(int)arg21 predExTrainingData_predictedTransportMode:(int)arg22 predExTrainingData_preferredTransportMode:(int)arg23 predExTrainingData_isInBasemode:(id)arg24 predExTrainingData_isCarplayConnected:(id)arg25 predExTrainingData_isTourist:(id)arg26 predExTrainingData_isTransitPossible:(id)arg27 predExTrainingData_routePlanningScreenPresented:(id)arg28 predExTrainingData_userLocationGeohash4:(id)arg29;
+ (void)captureThrottleEventWithThrottleEvent_networkService:(int)arg1 throttleEvent_requestAppIdentifier:(id)arg2 throttleEvent_throttleType:(int)arg3 throttleEvent_throttleMode:(int)arg4 throttleEvent_throttleReqType:(id)arg5 throttleEvent_throttleTriggerCount:(id)arg6 throttleEvent_throttleTriggerDuration:(id)arg7 throttleEvent_throttleCount:(id)arg8 throttleEvent_throttleDuration:(id)arg9;
+ (void)captureCohortUserActionTargetPairWithUserActionEvent_userActionEventAction:(int)arg1 userActionEvent_userActionEventTarget:(int)arg2 userActionEvent_userActionEventValue:(id)arg3;
+ (void)captureShortAndCohortUserActionTargetPairWithUserActionEvent_userActionEventAction:(int)arg1 userActionEvent_userActionEventTarget:(int)arg2 userActionEvent_userActionEventValue:(id)arg3;
+ (void)captureEnterMapsShortAndCohortUserActionTargetPairWithUserActionEvent_userActionEventAction:(int)arg1 userActionEvent_userActionEventTarget:(int)arg2 userActionEvent_userActionEventValue:(id)arg3;
+ (void)captureLegacyUserActionTargetPairWithUserActionEvent_userActionEventAction:(int)arg1 userActionEvent_userActionEventTarget:(int)arg2 userActionEvent_userActionEventValue:(id)arg3;
+ (void)captureSessionlessUserActionWithUserActionEvent_userActionEventAction:(int)arg1 userActionEvent_userActionEventTarget:(int)arg2 userActionEvent_userActionEventValue:(id)arg3;
+ (void)captureCarplayUserActionWithUserActionEvent_userActionEventAction:(int)arg1 userActionEvent_userActionEventTarget:(int)arg2 userActionEvent_userActionEventValue:(id)arg3;
+ (void)captureShortUserActionWithUserActionEvent_userActionEventAction:(int)arg1 userActionEvent_userActionEventTarget:(int)arg2 userActionEvent_userActionEventValue:(id)arg3;
+ (void)captureExtraStatesUserActionWithUserActionEvent_userActionEventAction:(int)arg1 userActionEvent_userActionEventTarget:(int)arg2 userActionEvent_userActionEventValue:(id)arg3;
+ (void)captureRapUserActionWithUserActionEvent_userActionEventAction:(int)arg1 userActionEvent_userActionEventTarget:(int)arg2 userActionEvent_userActionEventValue:(id)arg3;
+ (void)captureVenueUserActionWithUserActionEvent_userActionEventAction:(int)arg1 userActionEvent_userActionEventTarget:(int)arg2 userActionEvent_userActionEventValue:(id)arg3;
+ (void)captureNavTraceWithFullNavTrace_navTraceData:(id)arg1;
+ (void)captureDirectionsWithDirectionsEvent_directionsFeedbacks:(id)arg1 directionsEvent_finalLocation:(id)arg2 directionsEvent_arrivedAtDestination:(id)arg3 directionsEvent_navigationAudioFeedback:(struct GEONavigationAudioFeedback)arg4 directionsEvent_durationOfTrip:(id)arg5 directionsEvent_durationInNavigationModes:(id)arg6 directionsEvent_preArrival:(id)arg7 directionsEvent_originalEta:(id)arg8;
+ (void)captureGridDurationWithGridDuration_durationMs:(id)arg1 gridDuration_previousState:(int)arg2 gridDuration_endState:(int)arg3 gridDuration_endStateErrorReasons:(id)arg4 gridDuration_displayType:(int)arg5;
+ (void)captureClientACKeypressWithClientAcSuggestions_query:(id)arg1 clientAcSuggestions_queryTokens:(id)arg2 clientAcSuggestions_entries:(id)arg3 clientAcSuggestions_keypressStatus:(int)arg4;
+ (void)captureClientACResponseWithClientAcSuggestions_query:(id)arg1 clientAcSuggestions_queryTokens:(id)arg2 clientAcSuggestions_entries:(id)arg3 clientAcSuggestions_shouldDifferentiateClientAndServerResults:(id)arg4 clientAcSuggestions_overallLatencyInMs:(id)arg5 clientAcSuggestions_isRerankerTriggered:(id)arg6 clientAcSuggestions_isRetainedQuery:(id)arg7;
+ (void)captureClientACSuggestionWithClientAcSuggestions_query:(id)arg1 clientAcSuggestions_queryTokens:(id)arg2 clientAcSuggestions_entries:(id)arg3 clientAcSuggestions_selectedIndex:(id)arg4 clientAcSuggestions_selectedSectionIndex:(id)arg5 clientAcSuggestions_withinSectionSelectedIndex:(id)arg6 clientAcSuggestions_isRetainedQuery:(id)arg7 clientAcSuggestions_isRerankerTriggered:(id)arg8 clientAcSuggestions_shouldDifferentiateClientAndServerResults:(id)arg9;
+ (void)captureAcSuggestionUserActionWithUserActionEvent_userActionEventAction:(int)arg1 userActionEvent_userActionEventTarget:(int)arg2 userActionEvent_userActionEventValue:(id)arg3;
+ (void)captureWifiProbeWithWifiConnectionQualityProbeEvent_wifiConnectionQuality:(id)arg1;
+ (void)captureNetworkEventProtobufSessionWithNetworkEvent_networkService:(int)arg1 networkEvent_requestAppIdentifier:(id)arg2 networkEvent_requestErrorDomain:(id)arg3 networkEvent_requestErrorCode:(id)arg4 networkEvent_requestDataSize:(id)arg5 networkEvent_responseDataSize:(id)arg6 networkEvent_totalTime:(id)arg7 networkEvent_httpResponseCode:(id)arg8 networkEvent_serviceIpAddress:(id)arg9 networkEvent_mptcpServiceType:(int)arg10 networkEvent_mptcpNegotiated:(id)arg11 networkEvent_rnfTriggered:(id)arg12 placeRequest_placeRequestType:(int)arg13;
+ (void)captureNetworkEventTileWithNetworkEvent_networkService:(int)arg1 networkEvent_requestAppIdentifier:(id)arg2 networkEvent_requestErrorDomain:(id)arg3 networkEvent_requestErrorCode:(id)arg4 networkEvent_requestDataSize:(id)arg5 networkEvent_responseDataSize:(id)arg6 networkEvent_totalTime:(id)arg7 networkEvent_httpResponseCode:(id)arg8 networkEvent_serviceIpAddress:(id)arg9 GEONetworkSessionTaskTransactionMetrics_connectStart:(id)arg10 GEONetworkSessionTaskTransactionMetrics_connectEnd:(id)arg11 GEONetworkSessionTaskTransactionMetrics_domainLookupStart:(id)arg12 GEONetworkSessionTaskTransactionMetrics_domainLookupEnd:(id)arg13 GEONetworkSessionTaskTransactionMetrics_fetchStart:(id)arg14 GEONetworkSessionTaskTransactionMetrics_requestStart:(id)arg15 GEONetworkSessionTaskTransactionMetrics_requestEnd:(id)arg16 GEONetworkSessionTaskTransactionMetrics_responseStart:(id)arg17 GEONetworkSessionTaskTransactionMetrics_responseEnd:(id)arg18 GEONetworkSessionTaskTransactionMetrics_secureConnectStart:(id)arg19 GEONetworkSessionTaskTransactionMetrics_secureConnectEnd:(id)arg20 GEONetworkSessionTaskTransactionMetrics_proxyConnection:(id)arg21 GEONetworkSessionTaskTransactionMetrics_reusedConnection:(id)arg22 networkEvent_queuedTime:(id)arg23 networkEvent_decodeTime:(id)arg24 networkEvent_redirectCount:(id)arg25 networkEvent_requestStart:(id)arg26 networkEvent_requestEnd:(id)arg27 networkEvent_rnfTriggered:(id)arg28 tileSet_tileSetInfos:(id)arg29;
+ (void)captureNetworkEventGenericPlaceWithNetworkEvent_networkService:(int)arg1 networkEvent_requestAppIdentifier:(id)arg2 networkEvent_requestErrorDomain:(id)arg3 networkEvent_requestErrorCode:(id)arg4 networkEvent_requestDataSize:(id)arg5 networkEvent_responseDataSize:(id)arg6 networkEvent_totalTime:(id)arg7 networkEvent_httpResponseCode:(id)arg8 networkEvent_serviceIpAddress:(id)arg9 placeRequest_placeRequestType:(int)arg10;
+ (void)captureNetworkEventNetDefaultsWithNetworkEvent_networkService:(int)arg1 networkEvent_requestAppIdentifier:(id)arg2 networkEvent_requestErrorDomain:(id)arg3 networkEvent_requestErrorCode:(id)arg4 networkEvent_requestDataSize:(id)arg5 networkEvent_responseDataSize:(id)arg6 networkEvent_totalTime:(id)arg7 networkEvent_httpResponseCode:(id)arg8 networkEvent_serviceIpAddress:(id)arg9;
+ (void)captureNetworkEventGenericWithNetworkEvent_networkService:(int)arg1 networkEvent_requestAppIdentifier:(id)arg2 networkEvent_requestErrorDomain:(id)arg3 networkEvent_requestErrorCode:(id)arg4 networkEvent_requestDataSize:(id)arg5 networkEvent_responseDataSize:(id)arg6 networkEvent_totalTime:(id)arg7 networkEvent_httpResponseCode:(id)arg8 networkEvent_serviceIpAddress:(id)arg9;
+ (void)captureBatchTrafficWithBatchTrafficProbeCollection_locationCollection:(id)arg1;
+ (void)captureRealTrafficWithRealtimeTrafficProbeCollection_locationCollection:(id)arg1;
+ (void)captureParkedCarWithParkedCar_locationUncertainty:(id)arg1 parkedCar_timestamp:(id)arg2 GEOLatLng_lat:(id)arg3 GEOLatLng_lng:(id)arg4;
+ (void)captureTileCacheMissWithGEOCacheMiss_requestorType:(int)arg1 GEOCacheMiss_missType:(int)arg2 GEOCacheMiss_count:(id)arg3 GEOCacheMiss_bytes:(id)arg4 GEOCacheMiss_httpStatus:(id)arg5 GEOCacheMiss_errors:(id)arg6 tileSet_tileSetInfos:(id)arg7;
+ (void)captureTileCacheHitWithGEOCacheHit_requestorType:(int)arg1 GEOCacheHit_tileSourceType:(int)arg2 GEOCacheHit_count:(id)arg3 GEOCacheHit_bytes:(id)arg4 tileSet_tileSetInfos:(id)arg5;
+ (id)analyticTag;
+ (BOOL)isDisabledState:(id)arg1 inCountry:(id)arg2;
+ (BOOL)isDisabledEvent:(id)arg1 inCountry:(id)arg2;
+ (void)capturePredExTrainingWithChanceOfPrecipitation:(id)arg1 chanceOfRain:(id)arg2 chanceOfSnow:(id)arg3 endTime:(id)arg4 durationUntilEventEnd:(id)arg5 durationUntilEventStart:(id)arg6 startTime:(id)arg7 temperature:(id)arg8 timeOfDay:(id)arg9 timeSinceBackgrounded:(id)arg10 actualTransportMode:(int)arg11 dayOfWeek:(id)arg12 distanceFromHereToHome:(int)arg13 distanceFromHereToOrigin:(int)arg14 distanceFromHereToParkedCar:(int)arg15 distanceFromHereToWork:(int)arg16 distanceFromHere:(int)arg17 distanceFromOriginToDestination:(int)arg18 entryType:(int)arg19 weatherType:(int)arg20 mapType:(int)arg21 predictedTransportMode:(int)arg22 preferredTransportMode:(int)arg23 isInBasemode:(id)arg24 isTourist:(id)arg25 isCarplayConnected:(id)arg26 isTransitPossible:(id)arg27 routePlanningScreenPresented:(id)arg28 userLocation:(id)arg29;
+ (void)captureGridDuration:(double)arg1 previousState:(int)arg2 endState:(int)arg3 displayType:(int)arg4 errors:(id)arg5;
+ (void)captureUserAction:(int)arg1 target:(int)arg2 value:(id)arg3 mapsServerMetadata:(id)arg4;
+ (void)captureUserAction:(int)arg1 target:(int)arg2 value:(id)arg3 categoriesMetadataDisplayed:(id)arg4 categoryMetadataSelected:(id)arg5;
+ (void)captureUserAction:(int)arg1 target:(int)arg2 value:(id)arg3 categoriesDisplayed:(id)arg4 categorySelected:(id)arg5;
+ (void)captureTransitPlaceCardUserAction:(int)arg1 target:(int)arg2 value:(id)arg3 mapItem:(id)arg4 timestamp:(double)arg5 resultIndex:(int)arg6 targetID:(unsigned long long)arg7 providerID:(id)arg8 animationID:(unsigned long long)arg9 transitCardCategory:(int)arg10 transitSystem:(id)arg11 transitDepartureSequence:(id)arg12 transitIncident:(id)arg13;
+ (void)captureUserAction:(int)arg1 target:(int)arg2 value:(id)arg3 routeDetails:(id)arg4;
+ (void)capturePlaceCardUserAction:(int)arg1 target:(int)arg2 value:(id)arg3 mapItem:(id)arg4 timestamp:(double)arg5 placeCardType:(int)arg6 categoriesDisplayed:(id)arg7 categorySelected:(id)arg8;
+ (void)capturePlaceCardUserAction:(int)arg1 target:(int)arg2 value:(id)arg3 mapItem:(id)arg4 timestamp:(double)arg5 resultIndex:(int)arg6 targetID:(unsigned long long)arg7 providerID:(id)arg8 animationID:(unsigned long long)arg9 actionURL:(id)arg10 photoID:(id)arg11 placeCardType:(int)arg12 localizedMapItemCategory:(id)arg13 availableActions:(id)arg14 unactionableUIElements:(id)arg15;
+ (void)captureUserAction:(int)arg1 target:(int)arg2 value:(id)arg3 placeActionDetails:(id)arg4;
+ (void)captureUserAction:(int)arg1 target:(int)arg2 value:(id)arg3 placeActionDetails:(id)arg4 mapRegion:(id)arg5 zoomLevel:(double)arg6 mapType:(int)arg7;
+ (void)captureUserAction:(int)arg1 target:(int)arg2 value:(id)arg3 mapRegion:(id)arg4 zoomLevel:(double)arg5 mapType:(int)arg6;
+ (void)captureTableBookedEventWithSessionId:(id)arg1 bookedUsingMaps:(BOOL)arg2 cancelled:(BOOL)arg3 viewedInProactiveTray:(BOOL)arg4 tappedProactiveTrayItem:(BOOL)arg5 viewedInPlacecard:(BOOL)arg6 viewedDetailsInPlacecard:(BOOL)arg7 isAsync:(BOOL)arg8 bookedAppId:(id)arg9 muid:(unsigned long long)arg10 called:(BOOL)arg11 routed:(BOOL)arg12 tappedChangeReservation:(BOOL)arg13 tappedCancelReservation:(BOOL)arg14;
+ (void)captureTelemetricEntityCountForEventKey:(int)arg1 eventValue:(unsigned long long)arg2 eventDetail:(id)arg3;
+ (void)captureTelemetricEntityCountForEventKey:(int)arg1 eventDetail:(id)arg2;
+ (void)captureCommuteDoomWindow:(id)arg1 exitTime:(id)arg2 destinations:(id)arg3 reason:(long long)arg4 networkRequests:(unsigned long long)arg5 alerts:(unsigned long long)arg6;
+ (void)captureProactiveSuggestionInteractionForType:(int)arg1 items:(id)arg2 interactedWithItemIndex:(int)arg3 forDuration:(double)arg4;
+ (void)captureMapsWidgetsInteractionForType:(int)arg1 endState:(int)arg2 widgetSpecificObject:(id)arg3 wasLocked:(BOOL)arg4 startDate:(id)arg5 forDuration:(double)arg6;
+ (void)captureTimeToLeaveIntialTravelTimeEventWithTravelTime:(double)arg1;
+ (void)captureTimeToLeaveHypothesisEventWithEarlyDepartureDelta:(double)arg1 lateDepartureDelta:(double)arg2 earlyArrivalDelta:(double)arg3 lateArrivalDelta:(double)arg4 rerouteCount:(unsigned long long)arg5 uiNotification:(int)arg6;
+ (void)captureTransitAppLaunchSource:(CDStruct_c3b9c2ee)arg1 destination:(CDStruct_c3b9c2ee)arg2 bundleIdentifier:(id)arg3;
+ (void)captureMapLaunchEventWithLaunchUrl:(id)arg1 sourceAppId:(id)arg2 isLaunchedFromTTL:(BOOL)arg3 ttlEventTime:(id)arg4;
+ (void)captureNetworkEventForProtobufSessionTask:(id)arg1 networkService:(int)arg2 requestType:(int)arg3 requestAppId:(id)arg4;
+ (void)captureNetworkForLoadingTileForAppId:(id)arg1 error:(id)arg2 requestSize:(id)arg3 responseSize:(id)arg4 totalTime:(id)arg5 queuedTime:(id)arg6 clientNetMetrics:(id)arg7 transactionMetrics:(id)arg8 rnfTriggered:(BOOL)arg9 tileSetStyle:(int)arg10;
- (void)captureNetworkEventForProtobufSessionTask:(id)arg1 networkService:(int)arg2 requestType:(int)arg3 requestErrorDomain:(id)arg4 requestErrorCode:(id)arg5 requestAppId:(id)arg6;

@end

