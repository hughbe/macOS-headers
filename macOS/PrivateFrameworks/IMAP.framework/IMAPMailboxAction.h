//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IMAPMailboxAction : NSObject
{
    long long _actionID;
    long long _actionType;
    NSString *_mailboxName;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *mailboxName; // @synthesize mailboxName=_mailboxName;
@property(nonatomic) long long actionType; // @synthesize actionType=_actionType;
@property(nonatomic) long long actionID; // @synthesize actionID=_actionID;

@end

