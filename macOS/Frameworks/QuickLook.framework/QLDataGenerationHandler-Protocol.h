//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSData, NSString, NSURL;

@protocol QLDataGenerationHandler
- (void)startAttachment:(NSURL *)arg1 withMimeType:(NSString *)arg2 encoding:(NSString *)arg3;
- (void)receivedDataFromServer:(NSData *)arg1 attachmentURL:(NSURL *)arg2 hasMoreData:(BOOL)arg3;
@end

