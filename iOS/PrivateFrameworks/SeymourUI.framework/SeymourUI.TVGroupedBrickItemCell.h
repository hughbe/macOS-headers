/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SeymourUI.framework/SeymourUI
 */

@interface SeymourUI.TVGroupedBrickItemCell : SeymourUI.TVFocusableCollectionViewCell {
    void artworkView;
    void delegate;
    void floatingView;
    void headerLabel;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  itemInfo;
    void layout;
    void mainStackView;
    void subtitleLabel;
    void textStackView;
    void titleLabel;
}

@property (nonatomic, readonly) UILabel *accessibilityHeaderLabel;
@property (nonatomic, readonly) UILabel *accessibilitySubtitleLabel;
@property (nonatomic, readonly) UILabel *accessibilityTitleLabel;

- (void).cxx_destruct;
- (id)accessibilityHeaderLabel;
- (id)accessibilitySubtitleLabel;
- (id)accessibilityTitleLabel;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareForReuse;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;

@end
