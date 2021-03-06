/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKOnboardingViewController : UIViewController <UIScrollViewDelegate> {
    UIView * _achievementContainer;
    UIImageView * _achievementImage;
    GKLabel * _achievementSubtitle;
    GKLabel * _achievementTitle;
    UIView * _addFriendsContainer;
    UIImageView * _addFriendsImage;
    GKLabel * _addFriendsSubtitle;
    GKLabel * _addFriendsTitle;
    UIView * _bottomContainerView;
    NSLayoutConstraint * _bottomStackViewBottomConstraint;
    NSLayoutConstraint * _bottomStackViewTopConstraint;
    UIImageView * _bubbleImageView;
    UIView * _buttonContainer;
    UIView * _continueButtonContainerInScrollView;
    NSLayoutConstraint * _continueButtonContainerInScrollViewHeightConstraint;
    NSLayoutConstraint * _continueButtonContainerWidthConstraint;
    UILabel * _mainTitle;
    UIView * _multiplayerContainer;
    UIImageView * _multiplayerImage;
    GKLabel * _multiplayerSubtitle;
    GKLabel * _multiplayerTitle;
    OBBoldTrayButton * _nextButton;
    UIView * _privacyContainer;
    UIView * _privacyContainerInScrollView;
    NSLayoutConstraint * _privacyContainerInScrollViewHeightConstraint;
    OBPrivacyLinkController * _privacyLink;
    UIScrollView * _scrollView;
    NSLayoutConstraint * _scrollViewToBottomContainerConstraint;
    NSLayoutConstraint * _scrollViewToBottomSafeAreaConstraint;
    UILabel * _subTitle;
    NSLayoutConstraint * _topConstraint;
    UIStackView * _welcomeStackView;
    NSLayoutConstraint * _welcomeStackViewLeadingConstraint;
    NSLayoutConstraint * _welcomeStackViewTrailingConstraint;
    UIStackView * _whatsNewStackView;
    NSLayoutConstraint * _whatsnewStackViewLeadingConstraint;
    NSLayoutConstraint * _whatsnewStackViewTrailingConstraint;
}

@property UIView *achievementContainer;
@property (nonatomic, retain) UIImageView *achievementImage;
@property (nonatomic, retain) GKLabel *achievementSubtitle;
@property (nonatomic, retain) GKLabel *achievementTitle;
@property UIView *addFriendsContainer;
@property (nonatomic, retain) UIImageView *addFriendsImage;
@property (nonatomic, retain) GKLabel *addFriendsSubtitle;
@property (nonatomic, retain) GKLabel *addFriendsTitle;
@property (nonatomic, retain) UIView *bottomContainerView;
@property (nonatomic, retain) NSLayoutConstraint *bottomStackViewBottomConstraint;
@property (nonatomic, retain) NSLayoutConstraint *bottomStackViewTopConstraint;
@property (nonatomic, retain) UIImageView *bubbleImageView;
@property (nonatomic, retain) UIView *buttonContainer;
@property (nonatomic, retain) UIView *continueButtonContainerInScrollView;
@property (nonatomic, retain) NSLayoutConstraint *continueButtonContainerInScrollViewHeightConstraint;
@property (nonatomic, retain) NSLayoutConstraint *continueButtonContainerWidthConstraint;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UILabel *mainTitle;
@property UIView *multiplayerContainer;
@property (nonatomic, retain) UIImageView *multiplayerImage;
@property (nonatomic, retain) GKLabel *multiplayerSubtitle;
@property (nonatomic, retain) GKLabel *multiplayerTitle;
@property (nonatomic, retain) OBBoldTrayButton *nextButton;
@property (nonatomic, retain) UIView *privacyContainer;
@property (nonatomic, retain) UIView *privacyContainerInScrollView;
@property (nonatomic, retain) NSLayoutConstraint *privacyContainerInScrollViewHeightConstraint;
@property (nonatomic, retain) OBPrivacyLinkController *privacyLink;
@property (nonatomic, retain) UIScrollView *scrollView;
@property (nonatomic, retain) NSLayoutConstraint *scrollViewToBottomContainerConstraint;
@property (nonatomic, retain) NSLayoutConstraint *scrollViewToBottomSafeAreaConstraint;
@property (nonatomic, retain) UILabel *subTitle;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSLayoutConstraint *topConstraint;
@property (nonatomic, retain) UIStackView *welcomeStackView;
@property (nonatomic, retain) NSLayoutConstraint *welcomeStackViewLeadingConstraint;
@property (nonatomic, retain) NSLayoutConstraint *welcomeStackViewTrailingConstraint;
@property (nonatomic, retain) UIStackView *whatsNewStackView;
@property (nonatomic, retain) NSLayoutConstraint *whatsnewStackViewLeadingConstraint;
@property (nonatomic, retain) NSLayoutConstraint *whatsnewStackViewTrailingConstraint;

- (void).cxx_destruct;
- (id)achievementContainer;
- (id)achievementImage;
- (id)achievementSubtitle;
- (id)achievementTitle;
- (id)addFriendsContainer;
- (id)addFriendsImage;
- (id)addFriendsSubtitle;
- (id)addFriendsTitle;
- (void)addPrivacyLink;
- (id)bottomContainerView;
- (id)bottomStackViewBottomConstraint;
- (id)bottomStackViewTopConstraint;
- (id)bubbleImageView;
- (id)buttonContainer;
- (void)configureWhatsNewList;
- (void)constrainTextInView:(id)arg1 toFontSize:(double)arg2;
- (id)continueButtonContainerInScrollView;
- (id)continueButtonContainerInScrollViewHeightConstraint;
- (id)continueButtonContainerWidthConstraint;
- (id)mainTitle;
- (id)multiplayerContainer;
- (id)multiplayerImage;
- (id)multiplayerSubtitle;
- (id)multiplayerTitle;
- (id)nextButton;
- (void)nextPressed:(id)arg1;
- (id)privacyContainer;
- (id)privacyContainerInScrollView;
- (id)privacyContainerInScrollViewHeightConstraint;
- (id)privacyLink;
- (void)reparentGDPRToNewParent:(id)arg1;
- (void)reparentView:(id)arg1 toSuperview:(id)arg2;
- (id)scrollView;
- (void)scrollViewDidScroll:(id)arg1;
- (id)scrollViewToBottomContainerConstraint;
- (id)scrollViewToBottomSafeAreaConstraint;
- (void)setAchievementContainer:(id)arg1;
- (void)setAchievementImage:(id)arg1;
- (void)setAchievementSubtitle:(id)arg1;
- (void)setAchievementTitle:(id)arg1;
- (void)setAddFriendsContainer:(id)arg1;
- (void)setAddFriendsImage:(id)arg1;
- (void)setAddFriendsSubtitle:(id)arg1;
- (void)setAddFriendsTitle:(id)arg1;
- (void)setBottomContainerView:(id)arg1;
- (void)setBottomStackViewBottomConstraint:(id)arg1;
- (void)setBottomStackViewTopConstraint:(id)arg1;
- (void)setBubbleImageView:(id)arg1;
- (void)setButtonContainer:(id)arg1;
- (void)setContinueButtonContainerInScrollView:(id)arg1;
- (void)setContinueButtonContainerInScrollViewHeightConstraint:(id)arg1;
- (void)setContinueButtonContainerWidthConstraint:(id)arg1;
- (void)setMainTitle:(id)arg1;
- (void)setMultiplayerContainer:(id)arg1;
- (void)setMultiplayerImage:(id)arg1;
- (void)setMultiplayerSubtitle:(id)arg1;
- (void)setMultiplayerTitle:(id)arg1;
- (void)setNextButton:(id)arg1;
- (void)setPrivacyContainer:(id)arg1;
- (void)setPrivacyContainerInScrollView:(id)arg1;
- (void)setPrivacyContainerInScrollViewHeightConstraint:(id)arg1;
- (void)setPrivacyLink:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)setScrollViewToBottomContainerConstraint:(id)arg1;
- (void)setScrollViewToBottomSafeAreaConstraint:(id)arg1;
- (void)setSubTitle:(id)arg1;
- (void)setTopConstraint:(id)arg1;
- (void)setWelcomeStackView:(id)arg1;
- (void)setWelcomeStackViewLeadingConstraint:(id)arg1;
- (void)setWelcomeStackViewTrailingConstraint:(id)arg1;
- (void)setWhatsNewStackView:(id)arg1;
- (void)setWhatsnewStackViewLeadingConstraint:(id)arg1;
- (void)setWhatsnewStackViewTrailingConstraint:(id)arg1;
- (void)setupNavigationBar;
- (void)showSignOutAlert;
- (void)signOutPressed:(id)arg1;
- (id)subTitle;
- (id)topConstraint;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateUIBasedOnTraitCollection;
- (void)viewDidLoad;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (id)welcomeStackView;
- (id)welcomeStackViewLeadingConstraint;
- (id)welcomeStackViewTrailingConstraint;
- (id)whatsNewStackView;
- (id)whatsnewStackViewLeadingConstraint;
- (id)whatsnewStackViewTrailingConstraint;

@end
