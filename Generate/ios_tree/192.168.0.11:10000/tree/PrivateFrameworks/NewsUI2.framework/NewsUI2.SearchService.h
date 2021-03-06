/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
 */

@interface NewsUI2.SearchService : NSObject <FCNewsAppConfigurationObserving> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  baseURL;
    void bundleSubscriptionProvider;
    void configManager;
    void configQueue;
    void configurationProfiles;
    void connection;
    void localArea;
    void locationRegionManager;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void purchaseProvider;
    void queryContext;
    void queryContextManager;
    void storefrontID;
    void userInterfaceIdiom;
}

- (void).cxx_destruct;
- (void)configurationManager:(id)arg1 appConfigurationDidChange:(id)arg2;
- (id)init;

@end
