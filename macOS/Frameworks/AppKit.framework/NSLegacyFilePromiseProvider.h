//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSValue;

__attribute__((visibility("hidden")))
@interface NSLegacyFilePromiseProvider : NSObject
{
    BOOL _isPromiseValid;
    NSArray *_filePromiseProviders;
    NSValue *_weakPasteboard;
}

@property(copy) NSArray *filePromiseProviders; // @synthesize filePromiseProviders=_filePromiseProviders;
- (void)draggingEnded:(id)arg1;
- (void)pasteboardFinishedWithDataProvider:(id)arg1;
- (void)pasteboard:(id)arg1 provideDataForType:(id)arg2;
- (void)dealloc;
- (id)initWithPasteboard:(id)arg1;

@end

