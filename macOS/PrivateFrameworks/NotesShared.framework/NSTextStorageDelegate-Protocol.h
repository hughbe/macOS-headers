//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesShared/NSObject-Protocol.h>

@class NSTextStorage;

@protocol NSTextStorageDelegate <NSObject>

@optional
- (void)textStorage:(NSTextStorage *)arg1 didProcessEditing:(unsigned long long)arg2 range:(struct _NSRange)arg3 changeInLength:(long long)arg4;
- (void)textStorage:(NSTextStorage *)arg1 willProcessEditing:(unsigned long long)arg2 range:(struct _NSRange)arg3 changeInLength:(long long)arg4;
@end

