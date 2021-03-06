/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarPlayUI.framework/CarPlayUI
 */

@interface CPUITableCellConfiguration : NSObject <CPUITableCellConfigurationProtocol> {
    CPUITableCellAccessory * _accessory;
    bool  _currentlyPlaying;
    NSString * _detailText;
    UIImage * _image;
    double  _playbackProgress;
    bool  _playingIndicatorLeadingSide;
    bool  _shouldShowPlaybackProgress;
    bool  _showActivityIndicator;
    bool  _showExplicit;
    NSString * _text;
}

@property (nonatomic, retain) CPUITableCellAccessory *accessory;
@property (nonatomic) bool currentlyPlaying;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *detailText;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) double playbackProgress;
@property (nonatomic) bool playingIndicatorLeadingSide;
@property (nonatomic) bool shouldShowPlaybackProgress;
@property (nonatomic) bool showActivityIndicator;
@property (nonatomic) bool showExplicit;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;

+ (id)configurationWithText:(id)arg1 detailText:(id)arg2 image:(id)arg3 showExplicit:(bool)arg4 accessory:(id)arg5 showActivityIndicator:(bool)arg6 showPlaybackProgress:(bool)arg7 playbackProgress:(double)arg8 currentlyPlaying:(bool)arg9;
+ (id)configurationWithText:(id)arg1 detailText:(id)arg2 image:(id)arg3 showExplicit:(bool)arg4 accessory:(id)arg5 showActivityIndicator:(bool)arg6 showPlaybackProgress:(bool)arg7 playbackProgress:(double)arg8 currentlyPlaying:(bool)arg9 playingIndicatorLeadingSide:(bool)arg10;

- (void).cxx_destruct;
- (id)accessory;
- (bool)currentlyPlaying;
- (id)detailText;
- (id)image;
- (double)playbackProgress;
- (bool)playingIndicatorLeadingSide;
- (void)setAccessory:(id)arg1;
- (void)setCurrentlyPlaying:(bool)arg1;
- (void)setDetailText:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setPlaybackProgress:(double)arg1;
- (void)setPlayingIndicatorLeadingSide:(bool)arg1;
- (void)setShouldShowPlaybackProgress:(bool)arg1;
- (void)setShowActivityIndicator:(bool)arg1;
- (void)setShowExplicit:(bool)arg1;
- (void)setText:(id)arg1;
- (bool)shouldShowPlaybackProgress;
- (bool)showActivityIndicator;
- (bool)showExplicit;
- (id)text;

@end
