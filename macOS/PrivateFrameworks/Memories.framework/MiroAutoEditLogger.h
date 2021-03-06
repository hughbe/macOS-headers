//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableString, NSRegularExpression;

__attribute__((visibility("hidden")))
@interface MiroAutoEditLogger : NSObject
{
    BOOL _logsToConsole;
    NSMutableString *_log;
    long long _loggingLevel;
    long long _indentationLevel;
    NSRegularExpression *_framesRegex;
    long long _disableLoggingCount;
}

- (void).cxx_destruct;
@property(nonatomic) long long disableLoggingCount; // @synthesize disableLoggingCount=_disableLoggingCount;
@property(retain, nonatomic) NSRegularExpression *framesRegex; // @synthesize framesRegex=_framesRegex;
@property(nonatomic) long long indentationLevel; // @synthesize indentationLevel=_indentationLevel;
@property(nonatomic) long long loggingLevel; // @synthesize loggingLevel=_loggingLevel;
@property(retain, nonatomic) NSMutableString *log; // @synthesize log=_log;
@property(nonatomic) BOOL logsToConsole; // @synthesize logsToConsole=_logsToConsole;
- (void)enableLogging;
- (void)disableLogging;
- (void)decrementIndentationLevel;
- (void)incrementIndentationLevel;
- (void)commit;
- (void)logAndDescribeFrameCounts:(BOOL)arg1 level:(long long)arg2 formatString:(id)arg3;
- (id)init;

@end

