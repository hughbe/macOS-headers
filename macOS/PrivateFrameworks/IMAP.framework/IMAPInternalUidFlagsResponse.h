//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMAP/IMAPResponse.h>

@class IMAPFlagsFetchResult, NSIndexSet;

@interface IMAPInternalUidFlagsResponse : IMAPResponse
{
    BOOL _flagChangeType;
    NSIndexSet *_uids;
    IMAPFlagsFetchResult *_flagsFetchResult;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL flagChangeType; // @synthesize flagChangeType=_flagChangeType;
@property(retain, nonatomic) IMAPFlagsFetchResult *flagsFetchResult; // @synthesize flagsFetchResult=_flagsFetchResult;
@property(copy, nonatomic) NSIndexSet *uids; // @synthesize uids=_uids;
- (id)description;

@end

