//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ExchangeWebServices/EWSBaseRequestType.h>

@class NSArray;

@interface EWSDeleteItemType : EWSBaseRequestType
{
    NSArray *_ItemIds;
    long long _DeleteType;
    long long _SendMeetingCancellations;
    long long _AffectedTaskOccurrences;
}

+ (id)definition;
- (void).cxx_destruct;
@property(nonatomic) long long AffectedTaskOccurrences; // @synthesize AffectedTaskOccurrences=_AffectedTaskOccurrences;
@property(nonatomic) long long SendMeetingCancellations; // @synthesize SendMeetingCancellations=_SendMeetingCancellations;
@property(nonatomic) long long DeleteType; // @synthesize DeleteType=_DeleteType;
@property(copy, nonatomic) NSArray *ItemIds; // @synthesize ItemIds=_ItemIds;

@end

