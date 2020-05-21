//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, SSSession;

@interface SSFileCopy : NSObject
{
    SSSession *session;
    unsigned long long identifier;
    int direction;
    NSString *sourcePath;
    NSString *destinationPath;
    unsigned long long bytesToCopy;
    unsigned long long bytesCopied;
    BOOL isDirectory;
    NSString *displayName;
    int errorCode;
    int _state;
    NSDate *_startTime;
}

@property(retain) NSDate *startTime; // @synthesize startTime=_startTime;
@property(copy) NSString *displayName; // @synthesize displayName;
@property int errorCode; // @synthesize errorCode;
@property BOOL isDirectory; // @synthesize isDirectory;
@property unsigned long long bytesCopied; // @synthesize bytesCopied;
@property unsigned long long bytesToCopy; // @synthesize bytesToCopy;
@property(copy) NSString *destinationPath; // @synthesize destinationPath;
@property(copy) NSString *sourcePath; // @synthesize sourcePath;
@property int direction; // @synthesize direction;
@property(readonly) SSSession *session; // @synthesize session;
@property unsigned long long identifier; // @synthesize identifier;
- (id)description;
@property int state; // @synthesize state=_state;
- (void)dealloc;
- (id)initWithCopyIdentifier:(unsigned long long)arg1 withSession:(id)arg2;

@end

