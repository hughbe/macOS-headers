//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Mail/NSObject-Protocol.h>

@class NSString;

@protocol ECGmailLabel <NSObject>
@property(readonly) BOOL isGmailStarredLabel;
@property(readonly) BOOL isGmailImportantLabel;
@property(readonly, copy, nonatomic) NSString *labelName;
@property(readonly, nonatomic) NSString *persistentID;
@end

