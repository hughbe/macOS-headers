//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSCoding-Protocol.h>

@class NSMutableArray, NSTableRowView;

__attribute__((visibility("hidden")))
@interface NSOutlineViewStaticItemData : NSObject <NSCoding>
{
    NSMutableArray *_children;
    NSTableRowView *_rowView;
    BOOL _expandable;
    BOOL _expanded;
    BOOL _loadedFromEncoder;
}

@property BOOL loadedFromEncoder; // @synthesize loadedFromEncoder=_loadedFromEncoder;
@property BOOL expanded; // @synthesize expanded=_expanded;
@property BOOL expandable; // @synthesize expandable=_expandable;
@property(retain) NSTableRowView *rowView; // @synthesize rowView=_rowView;
@property(retain) NSMutableArray *children; // @synthesize children=_children;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

