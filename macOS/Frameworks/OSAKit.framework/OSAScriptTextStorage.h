//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OSAKit/OSATextStorage.h>

@class OSAScriptController;

@interface OSAScriptTextStorage : OSATextStorage
{
    OSAScriptController *_controller;
}

- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withAttributedString:(id)arg2;
- (id)undoManager;
- (void)setController:(id)arg1;
- (id)controller;
- (void)dealloc;
- (id)initWithController:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

