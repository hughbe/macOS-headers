//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFAction.h>

@interface WFPlayPodcastAction : WFAction
{
}

- (id)serializedParametersForDonatedIntent:(id)arg1 allowDroppingUnconfigurableValues:(BOOL)arg2;
- (id)localizedKeyParameterDisplayName;
- (id)errorPlayingPodcast:(unsigned int)arg1;
- (id)genericPlayPodcastFailedError;
- (id)contentNotFoundError;
- (id)getPlaybackURLForContentItem:(id)arg1;
- (void)runAsynchronouslyWithInput:(id)arg1;

@end

