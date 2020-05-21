//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class MSSubscribedStream, NSArray;
@protocol MSSubscriberDelegate;

@protocol MSSubscriber
@property(nonatomic) id <MSSubscriberDelegate> delegate;
- (void)stop;
- (void)abort;
- (MSSubscribedStream *)ownSubscribedStream;
- (NSArray *)subscribedStreams;
- (void)retrieveAssets:(NSArray *)arg1;
- (void)checkForOutstandingActivities;
- (void)checkForNewAssetCollections;
- (void)resetSync;
@end

