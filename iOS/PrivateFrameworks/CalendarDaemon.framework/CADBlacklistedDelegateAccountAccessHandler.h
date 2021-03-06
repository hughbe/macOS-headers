/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface CADBlacklistedDelegateAccountAccessHandler : NSObject <CADAccountAccessHandler> {
    NSObject<OS_dispatch_queue> * _cacheQueue;
    NSSet * _cachedDelegateCalStoreInfos;
    <CADCalCalendarInfoProvider> * _calCalendarInfoProvider;
    <CADCalStoreInfoProvider> * _calStoreInfoProvider;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *cacheQueue;
@property (nonatomic, retain) NSSet *cachedDelegateCalStoreInfos;
@property (nonatomic, readonly) <CADCalCalendarInfoProvider> *calCalendarInfoProvider;
@property (nonatomic, readonly) <CADCalStoreInfoProvider> *calStoreInfoProvider;

- (void).cxx_destruct;
- (id)_delegateCalStoreInfos;
- (id)cacheQueue;
- (id)cachedDelegateCalStoreInfos;
- (id)calCalendarInfoProvider;
- (id)calStoreInfoProvider;
- (id)initWithCalStoreInfoProvider:(id)arg1 calendarInfoProvider:(id)arg2;
- (bool)isAccountManaged:(id)arg1;
- (bool)isActionAllowed:(unsigned long long)arg1 forAccountIdentifier:(id)arg2;
- (void)reset;
- (id)restrictedCalendarRowIDsForAction:(unsigned long long)arg1;
- (void)setCachedDelegateCalStoreInfos:(id)arg1;

@end
