/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VideosUI.DocumentViewController : UIViewController <UINavigationControllerDelegate> {
    void deferLoadingTemplateController;
    void document;
    void documentDelegate;
    void isTransitioning;
    void loadingView;
    void navBarCachedWidth;
    void navBarOpacity;
    void navBarPrefersLargeTitles;
    void navBarTintColor;
    void navBarTitle;
    void navBarTitleOpacity;
    void navBarTitleView;
    void pagePerformanceReporter;
    void templateViewController;
}

@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarHidden;
@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;
@property (nonatomic, readonly) long long preferredStatusBarStyle;
@property (nonatomic, readonly) bool shouldAutomaticallyForwardAppearanceMethods;
@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;

- (void).cxx_destruct;
- (id)childViewControllerForStatusBarHidden;
- (void)dealloc;
- (void)didBecomeActive:(id)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(bool)arg3;
- (id)overrideTraitCollectionForChildViewController:(id)arg1;
- (id)preferredFocusEnvironments;
- (long long)preferredStatusBarStyle;
- (void)scrollToTop;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (unsigned long long)supportedInterfaceOrientations;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)willResignActive:(id)arg1;

@end
