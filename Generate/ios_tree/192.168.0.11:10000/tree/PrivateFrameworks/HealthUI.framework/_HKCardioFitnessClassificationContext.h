/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface _HKCardioFitnessClassificationContext : _HKCardioFitnessOverlayContext {
    <_HKCardioFitnessClassificationContextDelegate> * _delegate;
}

@property (nonatomic) <_HKCardioFitnessClassificationContextDelegate> *delegate;

- (void).cxx_destruct;
- (id)baseDisplayTypeForOverlay:(long long)arg1;
- (bool)canSelectOverlayContextItem:(id)arg1 chartController:(id)arg2;
- (id)delegate;
- (id)initWithMode:(long long)arg1 applicationItems:(id)arg2 overlayChartController:(id)arg3 delegate:(id)arg4;
- (id)overlayDisplayTypeForTimeScope:(long long)arg1;
- (id)sampleTypeForDateRangeUpdates;
- (void)setDelegate:(id)arg1;
- (void)updateContextItemForDateInterval:(id)arg1 timeScope:(long long)arg2 completion:(id /* block */)arg3;

@end
