//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface ISDCallHistory : NSObject
{
    NSMutableArray *_callHistory;
    NSString *_filename;
    NSString *_clientIdentifier;
    BOOL _saveCallHistoryAggressively;
}

- (void)saveCallHistory;
- (void)setException:(id)arg1 forMethodName:(id)arg2;
- (void)setReturnedValue:(id)arg1 forMethodName:(id)arg2;
- (id)_findUnreturnedMethodForMethodName:(id)arg1;
- (void)addCallHistoryWithMethodName:(id)arg1 parameters:(id)arg2;
- (id)clientIdentifier;
- (void)dealloc;
- (id)initWithFilename:(id)arg1 clientIdentifier:(id)arg2 entityNames:(id)arg3;

@end

