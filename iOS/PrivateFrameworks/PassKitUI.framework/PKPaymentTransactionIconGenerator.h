/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentTransactionIconGenerator : NSObject {
    PKObjectDownloader * _fileDownloader;
    bool  _hasNetworkAccess;
    NSMutableOrderedSet * _highPriorityIconRequests;
    NSMutableDictionary * _iconCache;
    NSMutableArray * _iconCacheKeys;
    NSMutableArray * _inflightRequests;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lockRequests;
    NSMutableOrderedSet * _lowPriorityIconRequests;
    PKPaymentService * _paymentService;
    bool  _processingRequest;
    NSObject<OS_dispatch_queue> * _queueIcons;
    double  _scale;
    bool  _useCache;
}

- (void).cxx_destruct;
- (id)_cacheImageFromDownloaderCacheForURL:(id)arg1;
- (void)_downloadLogoForTransaction:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)_iconCacheKeyForMerchant:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 ignoreLogoURL:(bool)arg3 imageOut:(id*)arg4;
- (id)_iconCacheKeyForPaymentTransaction:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 ignoreLogoURL:(bool)arg3 imageOut:(id*)arg4;
- (id)_iconForCacheKey:(id)arg1;
- (id)_iconForTransaction:(id)arg1 merchant:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 ignoreLogoURL:(bool)arg4 requestType:(unsigned long long)arg5 iconHandler:(id /* block */)arg6;
- (id)fileDownloader;
- (id)iconCacheKeyForTransaction:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)iconForMerchant:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 ignoreLogoURL:(bool)arg3 requestType:(unsigned long long)arg4 iconHandler:(id /* block */)arg5;
- (id)iconForTransaction:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 ignoreLogoURL:(bool)arg3 requestType:(unsigned long long)arg4 iconHandler:(id /* block */)arg5;
- (id)initWithCache:(bool)arg1 scale:(double)arg2;
- (void)queue_processNextIconRequest;

@end
