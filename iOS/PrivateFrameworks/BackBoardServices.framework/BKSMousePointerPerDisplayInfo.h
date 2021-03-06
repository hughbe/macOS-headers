/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSMousePointerPerDisplayInfo : NSObject {
    BSCompoundAssertion * _globalEventsAssertion;
    BSCompoundAssertion * _pointerSuppressionAssertion;
    NSSet * _previouslyRoutedContextIDs;
}

@property (nonatomic, retain) BSCompoundAssertion *globalEventsAssertion;
@property (nonatomic, retain) BSCompoundAssertion *pointerSuppressionAssertion;
@property (nonatomic, retain) NSSet *previouslyRoutedContextIDs;

- (void).cxx_destruct;
- (id)globalEventsAssertion;
- (id)pointerSuppressionAssertion;
- (id)previouslyRoutedContextIDs;
- (void)setGlobalEventsAssertion:(id)arg1;
- (void)setPointerSuppressionAssertion:(id)arg1;
- (void)setPreviouslyRoutedContextIDs:(id)arg1;

@end
