//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NotesShared/NSLocking-Protocol.h>

@class NSString;

@interface ICExclusiveLock : NSObject <NSLocking>
{
    int _fd;
    NSString *_name;
    NSString *_cachePath;
    NSString *_fullPath;
}

- (void).cxx_destruct;
- (id)name;
- (void)setName:(id)arg1;
- (BOOL)tryLock;
- (void)unlock;
- (void)lock;
- (void)dealloc;
- (id)initWithName:(id)arg1 cachePath:(id)arg2;
- (id)init;

@end

