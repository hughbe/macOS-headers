//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CSUserQueryParser, NSDate, NSDictionary, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SGTQueryGeniusReserved : NSObject
{
    NSObject<OS_dispatch_queue> *_groupQueue;
    NSObject<OS_dispatch_queue> *_parserQueue;
    NSObject<OS_dispatch_group> *_lastGroup;
    CSUserQueryParser *_parser;
    NSString *_currentInputString;
    NSDictionary *_parseResult;
    NSDate *_date;
}

- (void).cxx_destruct;
- (id)init;

@end

