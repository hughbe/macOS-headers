//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantServices/AFSiriRequest.h>

@class STMediaChannel;

@interface STShowChannelRequest : AFSiriRequest
{
    STMediaChannel *_channel;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) STMediaChannel *channel; // @synthesize channel=_channel;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_initWithChannel:(id)arg1;

@end

