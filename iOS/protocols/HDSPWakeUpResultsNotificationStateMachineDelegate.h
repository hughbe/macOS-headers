/* Generated by RuntimeBrowser.
 */

@protocol HDSPWakeUpResultsNotificationStateMachineDelegate <HKSPStateMachineDelegate>

@required

- (void)executeQuery;
- (void)postResultsNotification;
- (void)scheduleRetryAttempt;
- (void)scheduleTrackingDelay;
- (void)startObservingProtectedHealthDataAvailability;
- (void)stopObservingProtectedHealthDataAvailability;
- (void)unscheduleRetryAttempt;
- (void)unscheduleTrackingDelay;

@end
