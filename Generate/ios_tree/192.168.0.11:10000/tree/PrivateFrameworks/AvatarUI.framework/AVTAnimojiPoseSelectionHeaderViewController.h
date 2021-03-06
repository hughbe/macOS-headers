/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

@interface AVTAnimojiPoseSelectionHeaderViewController : UIViewController {
    <AVTAvatarRecord> * _avatarRecord;
    AVTView * _avtView;
    AVTAvatarPose * _displayedPose;
    bool  _isLiveTracking;
    AVTViewUpdater * _viewUpdater;
}

@property (nonatomic, retain) <AVTAvatarRecord> *avatarRecord;
@property (nonatomic, retain) AVTView *avtView;
@property (nonatomic, readonly) AVTAvatarPhysicsState *currentPhysicsState;
@property (nonatomic, readonly) AVTAvatarPose *currentPose;
@property (nonatomic, retain) AVTAvatarPose *displayedPose;
@property (nonatomic) bool isLiveTracking;
@property (nonatomic, retain) AVTViewUpdater *viewUpdater;

- (void).cxx_destruct;
- (void)_updatePose:(id)arg1 fromPose:(id)arg2 animated:(bool)arg3;
- (id)avatarRecord;
- (id)avtView;
- (void)beginFaceTrackingWithCompletionBlock:(id /* block */)arg1;
- (id)currentPhysicsState;
- (id)currentPose;
- (id)displayedPose;
- (bool)enableFaceTrackingIfNeeded;
- (void)endFaceTracking;
- (id)initWithRecord:(id)arg1;
- (bool)isLiveTracking;
- (void)setAvatarRecord:(id)arg1;
- (void)setAvtView:(id)arg1;
- (void)setDisplayedPose:(id)arg1;
- (void)setIsLiveTracking:(bool)arg1;
- (void)setViewUpdater:(id)arg1;
- (void)updateForPose:(id)arg1 animated:(bool)arg2;
- (void)updatePreviewForRecord:(id)arg1;
- (void)viewDidLoad;
- (id)viewUpdater;

@end
