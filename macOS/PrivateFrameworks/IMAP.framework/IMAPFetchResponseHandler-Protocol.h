//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMAP/NSObject-Protocol.h>

@class IMAPFetchCommand, IMAPResponse;

@protocol IMAPFetchResponseHandler <NSObject>
- (BOOL)handleResponse:(IMAPResponse *)arg1 forCommand:(IMAPFetchCommand *)arg2;
@end

