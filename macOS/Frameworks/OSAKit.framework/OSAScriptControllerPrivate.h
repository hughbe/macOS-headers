//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAppleEventDescriptor, NSUndoManager, OSALanguage, OSAScript;

@interface OSAScriptControllerPrivate : NSObject
{
    OSAScript *_script;
    OSALanguage *_language;
    NSAppleEventDescriptor *_defaultTarget;
    long long _scriptState;
    NSUndoManager *_undoManager;
    BOOL _shouldCancelExecution;
    BOOL _isCompiling;
}

- (void)dealloc;
- (id)init;

@end

