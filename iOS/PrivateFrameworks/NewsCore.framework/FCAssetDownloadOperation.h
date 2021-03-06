/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCAssetDownloadOperation : FCNetworkOperation {
    NSURL * _URL;
    NSDictionary * _additionalRequestHTTPHeaders;
    id /* block */  _dataDownloadCompletionHandler;
    long long  _downloadDestination;
    NSData * _downloadedData;
    NSURL * _downloadedFileURL;
    NSError * _error;
    id /* block */  _fileDownloadCompletionHandler;
    NSHTTPURLResponse * _httpResponse;
    NSString * _loggingKey;
    FCNetworkBehaviorMonitor * _networkBehaviorMonitor;
    int  _networkEventType;
    NSString * _requestUUID;
    NSString * _responseMIMEType;
    unsigned long long  _responseSize;
    double  _taskStartTime;
    NSDictionary * _timingData;
}

@property (nonatomic, retain) NSURL *URL;
@property (nonatomic, copy) NSDictionary *additionalRequestHTTPHeaders;
@property (nonatomic, copy) id /* block */ dataDownloadCompletionHandler;
@property (nonatomic) long long downloadDestination;
@property (nonatomic, retain) NSData *downloadedData;
@property (nonatomic, retain) NSURL *downloadedFileURL;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, copy) id /* block */ fileDownloadCompletionHandler;
@property (nonatomic, retain) NSHTTPURLResponse *httpResponse;
@property (nonatomic, copy) NSString *loggingKey;
@property (nonatomic, retain) FCNetworkBehaviorMonitor *networkBehaviorMonitor;
@property (nonatomic) int networkEventType;
@property (nonatomic, retain) NSString *requestUUID;
@property (nonatomic, retain) NSString *responseMIMEType;
@property (nonatomic) unsigned long long responseSize;
@property (nonatomic) double taskStartTime;
@property (nonatomic, retain) NSDictionary *timingData;

+ (id)sharedURLRequestScheduler;
+ (id)sharedURLSession;

- (void).cxx_destruct;
- (id)URL;
- (id)additionalRequestHTTPHeaders;
- (id /* block */)dataDownloadCompletionHandler;
- (long long)downloadDestination;
- (id)downloadedData;
- (id)downloadedFileURL;
- (id)error;
- (id /* block */)fileDownloadCompletionHandler;
- (id)httpResponse;
- (id)loggingKey;
- (unsigned long long)maxRetries;
- (id)networkBehaviorMonitor;
- (int)networkEventType;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)prepareOperation;
- (id)requestUUID;
- (id)responseMIMEType;
- (unsigned long long)responseSize;
- (void)setAdditionalRequestHTTPHeaders:(id)arg1;
- (void)setDataDownloadCompletionHandler:(id /* block */)arg1;
- (void)setDownloadDestination:(long long)arg1;
- (void)setDownloadedData:(id)arg1;
- (void)setDownloadedFileURL:(id)arg1;
- (void)setError:(id)arg1;
- (void)setFileDownloadCompletionHandler:(id /* block */)arg1;
- (void)setHttpResponse:(id)arg1;
- (void)setLoggingKey:(id)arg1;
- (void)setNetworkBehaviorMonitor:(id)arg1;
- (void)setNetworkEventType:(int)arg1;
- (void)setRequestUUID:(id)arg1;
- (void)setResponseMIMEType:(id)arg1;
- (void)setResponseSize:(unsigned long long)arg1;
- (void)setTaskStartTime:(double)arg1;
- (void)setTimingData:(id)arg1;
- (void)setURL:(id)arg1;
- (double)taskStartTime;
- (id)throttleGroup;
- (id)timingData;
- (bool)validateOperation;

@end
