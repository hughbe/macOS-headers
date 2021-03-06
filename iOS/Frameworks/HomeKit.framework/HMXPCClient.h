/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMXPCClient : HMFMessageTransport <HMFMessageTransportDelegate> {
    NSXPCConnection * _connection;
    bool  _connectionValid;
    unsigned long long  _homeDataAuthorizationStatus;
    bool  _isAuthorizedForHomeDataAccess;
    int  _notifyRegisterToken;
    bool  _notifyRegistered;
    NSMutableArray * _reconnectionHandlers;
    bool  _requiresCheckin;
    NSDictionary * _userInfo;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic) bool connectionValid;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isAuthorizedForHomeDataAccess;
@property (nonatomic) int notifyRegisterToken;
@property (nonatomic) bool notifyRegistered;
@property (nonatomic) bool requiresCheckin;
@property (readonly) Class superclass;
@property (readonly, copy) NSDictionary *userInfo;

+ (id)exportedInterface;
+ (id)remoteObjectInterface;

- (void).cxx_destruct;
- (id)connection;
- (bool)connectionValid;
- (void)dealloc;
- (id)init;
- (id)initWithUserInfo:(id)arg1;
- (bool)isAuthorizedForHomeDataAccess;
- (void)messageTransport:(id)arg1 didReceiveMessage:(id)arg2;
- (int)notifyRegisterToken;
- (bool)notifyRegistered;
- (void)registerReconnectionHandler:(id /* block */)arg1;
- (bool)requiresCheckin;
- (void)sendMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setConnection:(id)arg1;
- (void)setConnectionValid:(bool)arg1;
- (void)setIsAuthorizedForHomeDataAccess:(bool)arg1;
- (void)setNotifyRegisterToken:(int)arg1;
- (void)setNotifyRegistered:(bool)arg1;
- (void)setRequiresCheckin:(bool)arg1;
- (id)userInfo;

@end
