//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IdentityLookup/NSObject-Protocol.h>

@class ILClassificationReportRequest, ILMessageFilterQueryRequest, ILMessageFilterReportRequest;

@protocol ILMessageFilterHostProtocol <NSObject>
- (oneway void)performClassificationReportRequest:(ILClassificationReportRequest *)arg1;
- (oneway void)performReportRequest:(ILMessageFilterReportRequest *)arg1 reply:(void (^)(NSError *))arg2;
- (oneway void)performQueryRequest:(ILMessageFilterQueryRequest *)arg1 reply:(void (^)(ILMessageFilterQueryResponse *, NSError *))arg2;
@end

