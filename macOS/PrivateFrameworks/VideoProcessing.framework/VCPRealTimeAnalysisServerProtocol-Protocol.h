//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class IOSurface, NSDictionary;

@protocol VCPRealTimeAnalysisServerProtocol
- (void)requestAnalysis:(unsigned long long)arg1 ofIOSurface:(IOSurface *)arg2 withProperties:(NSDictionary *)arg3 withReply:(void (^)(NSDictionary *, NSError *))arg4;
@end

