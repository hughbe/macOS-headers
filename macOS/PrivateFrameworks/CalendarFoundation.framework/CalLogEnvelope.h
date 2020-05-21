//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CalLogEnvelope : NSObject
{
    NSString *_logName;
    int _level;
    NSString *_message;
    int _processID;
    NSString *_processName;
    unsigned int _machPort;
    double _timestamp;
    NSString *_function;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *function; // @synthesize function=_function;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) unsigned int machPort; // @synthesize machPort=_machPort;
@property(retain, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(nonatomic) int processID; // @synthesize processID=_processID;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) int level; // @synthesize level=_level;
@property(retain, nonatomic) NSString *logName; // @synthesize logName=_logName;
- (id)description;
- (id)initWithLogName:(id)arg1 level:(int)arg2 message:(id)arg3;
- (id)init;

@end

