//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class VSDeveloperServiceConnection, VSOptional;

@interface VSDeveloperSettingsFetchOperation : VSAsyncOperation
{
    VSOptional *_result;
    VSDeveloperServiceConnection *_connection;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VSDeveloperServiceConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) VSOptional *result; // @synthesize result=_result;
- (void)executionDidBegin;
- (id)init;

@end

