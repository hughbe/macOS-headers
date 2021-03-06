/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKAddToWatchOfferView : UIView {
    struct CGSize { 
        double width; 
        double height; 
    }  _aspectSize;
    UIView * _backgroundView;
    long long  _context;
    PKWatchHeroImageView * _heroImageView;
    bool  _isCompactWatch;
    PKContinuousButton * _openAppButton;
    PKPaymentPass * _pass;
    UIImageView * _passImageView;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
}

@property (nonatomic, readonly) long long context;
@property (nonatomic, readonly) PKContinuousButton *openAppButton;
@property (nonatomic, readonly) PKPaymentPass *pass;
@property (nonatomic, readonly) UIImageView *passImageView;
@property (nonatomic, readonly) UILabel *subtitleLabel;
@property (nonatomic, readonly) UILabel *titleLabel;

- (void).cxx_destruct;
- (bool)_isSmallPhone;
- (double)_sideMargin;
- (long long)context;
- (id)initWithPaymentPass:(id)arg1 context:(long long)arg2;
- (void)layoutSubviews;
- (id)openAppButton;
- (id)pass;
- (id)passImageView;
- (void)showSpinner:(bool)arg1;
- (id)subtitleLabel;
- (id)titleLabel;

@end
