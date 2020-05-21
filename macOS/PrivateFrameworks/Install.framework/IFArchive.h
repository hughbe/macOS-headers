//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IFFileReader, NSString;

@interface IFArchive : NSObject
{
    NSString *_path;
    IFFileReader *_fileReader;
}

+ (id)archiveWithPath:(id)arg1 withError:(id *)arg2;
+ (void)initialize;
- (BOOL)verifyArchive:(id *)arg1;
- (BOOL)verifyPath:(id)arg1 withError:(id *)arg2;
- (BOOL)verifyEntry:(id)arg1 withError:(id *)arg2;
- (BOOL)extractEntry:(id)arg1 toFileWrapper:(id *)arg2 withError:(id *)arg3;
- (BOOL)extractToDestination:(id)arg1 withError:(id *)arg2;
- (BOOL)extractEntry:(id)arg1 toDestination:(id)arg2 withError:(id *)arg3;
- (BOOL)extractCPIOEntry:(id)arg1 toDestination:(id)arg2 withError:(id *)arg3;
- (BOOL)extractRawEntry:(id)arg1 toBuffer:(id *)arg2 withError:(id *)arg3;
- (BOOL)extractEntry:(id)arg1 toBuffer:(id *)arg2 withError:(id *)arg3;
- (id)digestOfPath:(id)arg1 withType:(id)arg2;
- (id)entryForPath:(id)arg1;
- (id)childEntriesForPath:(id)arg1;
- (id)entries;
- (id)path;
- (id)fileReader;
- (id)archiveIdentity;
- (void)dealloc;
- (oneway void)release;
- (id)initWithPath:(id)arg1 withError:(id *)arg2;
- (void)closeFileReader;

@end

