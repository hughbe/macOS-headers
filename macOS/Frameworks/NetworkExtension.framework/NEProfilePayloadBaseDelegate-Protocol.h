//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDictionary, NSError;

@protocol NEProfilePayloadBaseDelegate
- (BOOL)setPostprocessedPayloadContents:(NSDictionary *)arg1;
- (NSDictionary *)getPreprocessedPayloadContents;
- (NSError *)validatePayload;
- (id)initWithPayload:(NSDictionary *)arg1;
@end

