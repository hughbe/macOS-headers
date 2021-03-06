/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UISceneActivationRequestOptions : NSObject {
    bool  __requestFullscreen;
    long long  _collectionJoinBehavior;
    bool  _preserveLayout;
    UIScene * _requestingScene;
}

@property (nonatomic) long long _collectionJoinBehavior;
@property (setter=_setRequestFullscreen:, nonatomic) bool _requestFullscreen;
@property (nonatomic) long long collectionJoinBehavior;
@property (nonatomic) bool preserveLayout;
@property (nonatomic, retain) UIScene *requestingScene;

- (void).cxx_destruct;
- (long long)_collectionJoinBehavior;
- (bool)_requestFullscreen;
- (void)_setRequestFullscreen:(bool)arg1;
- (long long)collectionJoinBehavior;
- (bool)preserveLayout;
- (id)requestingScene;
- (void)setCollectionJoinBehavior:(long long)arg1;
- (void)setPreserveLayout:(bool)arg1;
- (void)setRequestingScene:(id)arg1;
- (void)set_collectionJoinBehavior:(long long)arg1;

@end
