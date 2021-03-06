/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEIKEv2InformationalContext : NEIKEv2RequestContext {
    id /* block */  _callback;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    unsigned int  _maxRetries;
    NSArray * _privateNotifies;
    unsigned long long  _retryIntervalInMilliseconds;
}

@property (nonatomic, copy) id /* block */ callback;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic) unsigned int maxRetries;
@property (nonatomic, retain) NSArray *privateNotifies;
@property (nonatomic) unsigned long long retryIntervalInMilliseconds;

- (void).cxx_destruct;
- (id /* block */)callback;
- (id)callbackQueue;
- (id)description;
- (id)initWithPrivateNotifies:(id)arg1 maxRetries:(unsigned int)arg2 retryIntervalMilliseconds:(unsigned long long)arg3 callbackQueue:(id)arg4 callback:(id /* block */)arg5;
- (unsigned int)maxRetries;
- (id)privateNotifies;
- (unsigned long long)retryIntervalInMilliseconds;
- (void)sendCallbackSuccess:(bool)arg1 session:(id)arg2;
- (void)setCallback:(id /* block */)arg1;
- (void)setCallbackQueue:(id)arg1;
- (void)setMaxRetries:(unsigned int)arg1;
- (void)setPrivateNotifies:(id)arg1;
- (void)setRetryIntervalInMilliseconds:(unsigned long long)arg1;

@end
