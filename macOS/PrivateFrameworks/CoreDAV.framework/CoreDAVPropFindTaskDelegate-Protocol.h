//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVTaskDelegate-Protocol.h>

@class CoreDAVPropFindTask, NSArray, NSError;

@protocol CoreDAVPropFindTaskDelegate <CoreDAVTaskDelegate>

@optional
- (void)propFindTask:(CoreDAVPropFindTask *)arg1 parsedResponses:(NSArray *)arg2 error:(NSError *)arg3;
@end

