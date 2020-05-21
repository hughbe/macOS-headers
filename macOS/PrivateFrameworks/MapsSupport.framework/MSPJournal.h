//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileHandle, NSISO8601DateFormatter, NSString;
@protocol MSPJournaling, OS_dispatch_queue;

@interface MSPJournal : NSObject
{
    NSString *_path;
    NSFileHandle *_writeHandle;
    NSObject<OS_dispatch_queue> *_writeQueue;
    NSISO8601DateFormatter *_dateFormatter;
    BOOL _analyticsEnabled;
    BOOL _loggingEnabled;
    BOOL _journalEnabled;
    NSString *_name;
    id <MSPJournaling> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MSPJournaling> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void)noteChangeWithState:(id)arg1 format:(id)arg2;
- (void)noteChangeWithState:(id)arg1 error:(id)arg2;
- (void)noteChangeWithState:(id)arg1 payload:(id)arg2;
- (void)noteChangeWithState:(id)arg1 affectedObject:(id)arg2;
- (void)noteChangeWithState:(id)arg1;
- (void)sendTelemetryForState:(id)arg1 affectedObject:(id)arg2;
- (void)appendToLog:(id)arg1 format:(id)arg2;
- (void)appendToJournal:(id)arg1 format:(id)arg2;
- (void)rotateLogIfNeeded;
- (id)filename;
- (id)rotatedPath;
@property(readonly, nonatomic) NSString *path;
- (void)dealloc;
- (id)initWithName:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithName:(id)arg1;

@end

