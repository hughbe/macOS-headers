//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WPDPendingCompletions : NSObject
{
    NSMutableArray *_pendingCompletions;
    unsigned long long _lastID;
    NSString *_name;
}

- (void).cxx_destruct;
@property(retain) NSString *name; // @synthesize name=_name;
@property unsigned long long lastID; // @synthesize lastID=_lastID;
@property(retain) NSMutableArray *pendingCompletions; // @synthesize pendingCompletions=_pendingCompletions;
- (void)completeID:(unsigned long long)arg1 success:(BOOL)arg2;
- (unsigned long long)addCompletion:(id)arg1;
- (id)description;
- (id)initWithName:(id)arg1;

@end

