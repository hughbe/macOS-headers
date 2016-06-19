//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL;

@interface NSPersistentUICrashHandler : NSObject
{
    NSURL *restorationCountFileURL;
    int crashBlameCounter;
}

- (long long)crashBlameCounter;
- (void)clearCrashCountFileIfNecessary;
- (void)inspectCrashDataWithModification:(BOOL)arg1 handler:(CDUnknownBlockType)arg2;
- (unsigned int)modifyCrashBlameCounterBy:(int)arg1;
- (void)dealloc;
- (id)initWithRestorationCountFileURL:(id)arg1;

@end

