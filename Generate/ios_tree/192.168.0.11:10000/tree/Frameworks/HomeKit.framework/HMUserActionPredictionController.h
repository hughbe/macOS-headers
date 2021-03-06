/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMUserActionPredictionController : NSObject <HMFMessageReceiver> {
    NSUUID * _UUID;
    _HMContext * _context;
    <HMUserActionPredictionControllerDataSource> * _dataSource;
    <HMUserActionPredictionControllerDelegate> * _delegate;
    NSUUID * _homeUUID;
    NSArray * _lastUpdatedClientMappedPredictions;
    HMFUnfairLock * _lock;
    NSArray * _predictions;
}

@property (readonly, copy) NSUUID *UUID;
@property (readonly) _HMContext *context;
@property <HMUserActionPredictionControllerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property <HMUserActionPredictionControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *homeUUID;
@property (copy) NSArray *lastUpdatedClientMappedPredictions;
@property (readonly) HMFUnfairLock *lock;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly, copy) NSArray *predictions;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)UUID;
- (void)configureWithDataSource:(id)arg1 context:(id)arg2;
- (id)context;
- (id)dataSource;
- (id)delegate;
- (void)fetchPredictionsWithCompletion:(id /* block */)arg1;
- (void)handleDaemonReconnectedNotification:(id)arg1;
- (void)handleUpdatePredictionsMessage:(id)arg1;
- (id)homeUUID;
- (id)initWithPredictions:(id)arg1 homeUUID:(id)arg2;
- (id)lastUpdatedClientMappedPredictions;
- (id)lock;
- (bool)mergeWithOtherPredictionController:(id)arg1 operations:(id)arg2;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)predictions;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLastUpdatedClientMappedPredictions:(id)arg1;
- (void)setPredictions:(id)arg1;

@end
