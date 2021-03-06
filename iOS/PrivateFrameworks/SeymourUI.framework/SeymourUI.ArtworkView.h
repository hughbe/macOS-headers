/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SeymourUI.framework/SeymourUI
 */

@interface SeymourUI.ArtworkView : SeymourUI.NoIntrinsicImageView {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  artwork;
    void completedIconView;
    void iconConstraints;
    void layout;
    void layoutHandler;
    void recencyIconView;
    void shelfArtworkIconSafeAreaInsets;
    void style;
}

@property (nonatomic, retain) UIImage *image;

- (void).cxx_destruct;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithImage:(id)arg1;
- (id)initWithImage:(id)arg1 highlightedImage:(id)arg2;
- (void)layoutSubviews;
- (void)setImage:(id)arg1;

@end
