/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AXIDSServices.framework/AXIDSServices
 */

@interface AXIDSServices : NSObject <AXUIClientDelegate> {
    NSArray * _cachedConnectedDevices;
    NSHashTable * _clients;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _clientsLock;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _connectedDevicesLock;
    AXUIClient * _idsServerClient;
}

@property (nonatomic, retain) NSArray *cachedConnectedDevices;
@property (nonatomic, readonly) NSArray *connectedDevices;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AXUIClient *idsServerClient;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_handleConnectedDevicesChanged:(id)arg1;
- (void)_handleIncomingDataWithMessage:(id)arg1;
- (id)_init;
- (void)_performBlockOnClients:(id /* block */)arg1;
- (id)cachedConnectedDevices;
- (id)connectedDevices;
- (void)deregisterForIncomingData:(id)arg1;
- (id)idsServerClient;
- (id)publishData:(id)arg1;
- (id)publishData:(id)arg1 priority:(unsigned long long)arg2 requestingResponse:(bool)arg3;
- (id)publishData:(id)arg1 requestingResponse:(bool)arg2;
- (id)publishMessage:(id)arg1;
- (id)publishMessage:(id)arg1 priority:(unsigned long long)arg2 requestingResponse:(bool)arg3;
- (id)publishMessage:(id)arg1 requestingResponse:(bool)arg2;
- (id)publishResourceAtURL:(id)arg1;
- (id)publishResourceAtURL:(id)arg1 priority:(unsigned long long)arg2 requestingResponse:(bool)arg3;
- (id)publishResourceAtURL:(id)arg1 requestingResponse:(bool)arg2;
- (void)registerForIncomingData:(id)arg1;
- (id)sendPublishMessageToServer:(id)arg1;
- (void)setCachedConnectedDevices:(id)arg1;
- (id)userInterfaceClient:(id)arg1 accessQueueForProcessingMessageWithIdentifier:(unsigned long long)arg2;
- (id)userInterfaceClient:(id)arg1 processMessageFromServer:(id)arg2 withIdentifier:(unsigned long long)arg3 error:(id*)arg4;

@end
