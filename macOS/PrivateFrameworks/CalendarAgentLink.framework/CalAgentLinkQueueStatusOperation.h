//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarAgentLink/CalAgentLinkOperation.h>

@interface CalAgentLinkQueueStatusOperation : CalAgentLinkOperation
{
    BOOL _runningQueueFound;
}

@property(nonatomic) BOOL runningQueueFound; // @synthesize runningQueueFound=_runningQueueFound;
- (void)responsePayloadReceived:(id)arg1;
- (id)description;
- (id)init;

@end

