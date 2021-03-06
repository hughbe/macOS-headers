/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NearbyInteraction.framework/NearbyInteraction
 */

@interface NIServerConnection : NSObject {
    RBSAssertion * _assertion;
    NSXPCConnection * _connection;
    id  _exportedObject;
    NSObject<OS_dispatch_queue> * _queue;
    NSUUID * _sessionID;
}

@property (retain) id exportedObject;
@property (copy) id /* block */ interruptionHandler;
@property (copy) id /* block */ invalidationHandler;
@property (readonly) NSUUID *sessionID;

- (void).cxx_destruct;
- (id)allowTasksToFinishWhileInBackground;
- (struct { unsigned int x1[8]; })auditTokenForConnection;
- (void)dealloc;
- (id)exportedObject;
- (id)initWithSessionID:(id)arg1 queue:(id)arg2 exportedObject:(id)arg3;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (bool)isSandboxExtensionRequired;
- (id)remoteObjectProxy;
- (void)resume;
- (id)sessionID;
- (void)setExportedObject:(id)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)stopAllowingTasksToFinishWhileInBackground;
- (id)synchronousRemoteObjectProxy;

@end
