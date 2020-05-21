//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TimeMachine/NSSecureCoding-Protocol.h>
#import <TimeMachine/TMBackupInfo-Protocol.h>

@class NSDate, NSString, NSURL;

@interface TMXPCBackupInfo : NSObject <TMBackupInfo, NSSecureCoding>
{
    NSURL *_url;
    unsigned long long _maximumFileID;
    NSDate *_dateCompleted;
}

+ (BOOL)supportsSecureCoding;
@property(retain) NSDate *dateCompleted; // @synthesize dateCompleted=_dateCompleted;
@property unsigned long long maximumFileID; // @synthesize maximumFileID=_maximumFileID;
@property(retain) NSURL *url; // @synthesize url=_url;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

