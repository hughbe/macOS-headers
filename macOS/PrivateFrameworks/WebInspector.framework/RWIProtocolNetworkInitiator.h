//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray, NSString;

@interface RWIProtocolNetworkInitiator : RWIProtocolJSONObject
{
}

@property(nonatomic) int nodeId;
@property(nonatomic) double lineNumber;
@property(copy, nonatomic) NSString *url;
@property(copy, nonatomic) NSArray *stackTrace;
@property(nonatomic) long long type;
- (id)initWithType:(long long)arg1;

@end

