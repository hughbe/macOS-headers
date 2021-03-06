/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

@interface ASDSubscriptionEntitlement : NSObject <NSSecureCoding> {
    NSDictionary * _dictionary;
    unsigned long long  _segment;
}

@property (readonly, copy) NSNumber *appAdamID;
@property (readonly, copy) NSNumber *appVersion;
@property (readonly) bool autoRenewEnabled;
@property (readonly, copy) NSString *chargeCountryCode;
@property (readonly, copy) NSString *chargeCurrencyCode;
@property (readonly, copy) NSNumber *chargeStoreFrontID;
@property (readonly, copy) NSNumber *entitlementSourceAdamID;
@property (readonly, copy) NSDate *expiryDate;
@property (readonly, copy) NSNumber *familyID;
@property (readonly, copy) NSNumber *featureAccessTypeID;
@property (readonly, copy) NSNumber *freeTrialPeriodID;
@property (readonly, copy) NSNumber *inAppAdamID;
@property (readonly, copy) NSString *inAppVersion;
@property (readonly, copy) NSNumber *initialPurchaseTimestamp;
@property (readonly) bool isInGracePeriod;
@property (readonly) bool isOfferPeriod;
@property (readonly) bool isPurchaser;
@property (readonly) bool isTrialPeriod;
@property (getter=isNewsAppPurchase, readonly) bool newsAppPurchase;
@property (readonly, copy) NSString *offerID;
@property (readonly, copy) NSNumber *originalPurchaseDownloadID;
@property (readonly, copy) NSString *poolType;
@property (readonly, copy) NSNumber *promoScenarioID;
@property (readonly, copy) NSNumber *purchasabilityType;
@property (readonly, copy) NSNumber *purchaseDownloadID;
@property (readonly, copy) NSNumber *quantity;
@property (readonly) unsigned long long segment;
@property (readonly, copy) NSNumber *serviceBeginsTimestamp;
@property (readonly, copy) NSDate *startDate;
@property (readonly, copy) NSNumber *subscriptionBundleID;
@property (readonly, copy) NSString *vendorAdHocOfferID;
@property (readonly, copy) NSString *vendorID;

// Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dateFromDateString:(id)arg1;
- (id)_valueForKey:(id)arg1 ofType:(Class)arg2;
- (id)appAdamID;
- (id)appVersion;
- (bool)autoRenewEnabled;
- (id)chargeCountryCode;
- (id)chargeCurrencyCode;
- (id)chargeStoreFrontID;
- (void)encodeWithCoder:(id)arg1;
- (id)entitlementSourceAdamID;
- (id)expiryDate;
- (id)familyID;
- (id)featureAccessTypeID;
- (id)freeTrialPeriodID;
- (id)inAppAdamID;
- (id)inAppVersion;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 forAppAdamID:(id)arg2 segment:(unsigned long long)arg3;
- (id)initialPurchaseTimestamp;
- (bool)isInGracePeriod;
- (bool)isNewsAppPurchase;
- (bool)isOfferPeriod;
- (bool)isPurchaser;
- (bool)isTrialPeriod;
- (id)offerID;
- (id)originalPurchaseDownloadID;
- (id)poolType;
- (id)promoScenarioID;
- (id)purchasabilityType;
- (id)purchaseDownloadID;
- (id)quantity;
- (unsigned long long)segment;
- (id)serviceBeginsTimestamp;
- (id)startDate;
- (id)subscriptionBundleID;
- (id)vendorAdHocOfferID;
- (id)vendorID;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

- (id)description;
- (id)servicesBundlePurchaseID;

@end
