//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray, NSString, WDProtocolAutomationPoint;

@interface WDProtocolAutomationInputSourceState : RWIProtocolJSONObject
{
}

@property(nonatomic) int duration;
@property(retain, nonatomic) WDProtocolAutomationPoint *location;
@property(copy, nonatomic) NSString *nodeHandle;
@property(nonatomic) long long origin;
@property(nonatomic) long long pressedButton;
@property(copy, nonatomic) NSArray *pressedVirtualKeys;
@property(copy, nonatomic) NSString *pressedCharKey;
@property(copy, nonatomic) NSString *sourceId;
- (id)initWithSourceId:(id)arg1;
- (id)initWithProtocolObject:(id)arg1;
- (id)initWithPayload:(id)arg1;

@end

