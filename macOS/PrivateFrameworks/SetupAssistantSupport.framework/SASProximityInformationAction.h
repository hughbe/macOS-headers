//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SetupAssistantSupport/SASProximityAction.h>

@class SASProximityInformation;

@interface SASProximityInformationAction : SASProximityAction
{
    SASProximityInformation *_information;
}

+ (unsigned long long)actionID;
- (void).cxx_destruct;
@property(retain) SASProximityInformation *information; // @synthesize information=_information;
- (id)responsePayload;
- (void)setResponseFromData:(id)arg1;
- (BOOL)hasResponse;
- (id)init;

@end

