//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLayoutManager, NSView, NSViewTextAttachmentCell;

@interface NSViewTextAttachmentCellHelper : NSObject
{
    NSView *_view;
    NSViewTextAttachmentCell *_attachmentCell;
    NSLayoutManager *_layoutManager;
}

- (void)dealloc;
- (void)removeView;
- (void)setView:(id)arg1;
- (id)view;
- (id)initWithView:(id)arg1 layoutManager:(id)arg2 characterIndex:(unsigned long long)arg3 attachmentCell:(id)arg4;

@end

