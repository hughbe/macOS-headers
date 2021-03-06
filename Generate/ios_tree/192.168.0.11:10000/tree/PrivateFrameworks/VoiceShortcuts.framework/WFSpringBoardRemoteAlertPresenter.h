/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

@interface WFSpringBoardRemoteAlertPresenter : NSObject <SBSRemoteAlertHandleObserver, WFDialogAlertPresenter> {
    SBSRemoteAlertHandle * _activeHandle;
    NSObject<OS_dispatch_source> * _deactivateTimer;
    <WFDialogAlertPresenterDelegate> * _delegate;
    BKSApplicationStateMonitor * _monitor;
}

@property (nonatomic, retain) SBSRemoteAlertHandle *activeHandle;
@property (nonatomic, readonly) bool alertIsActive;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *deactivateTimer;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFDialogAlertPresenterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) BKSApplicationStateMonitor *monitor;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)activateAlert;
- (void)activateAlertInMainSceneOfApplicationWithBundleIdentifier:(id)arg1;
- (void)activateAlertWithPresentationTarget:(id)arg1;
- (id)activeHandle;
- (bool)alertIsActive;
- (void)deactivateAlert;
- (id)deactivateTimer;
- (id)delegate;
- (id)monitor;
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;
- (void)remoteAlertHandleDidActivate:(id)arg1;
- (void)remoteAlertHandleDidDeactivate:(id)arg1;
- (void)setActiveHandle:(id)arg1;
- (void)setDeactivateTimer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMonitor:(id)arg1;

@end
