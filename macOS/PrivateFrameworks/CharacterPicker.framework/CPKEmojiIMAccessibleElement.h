//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSAccessibilityElement.h>

@class EMIMDFREmojiListMatrixView;

__attribute__((visibility("hidden")))
@interface CPKEmojiIMAccessibleElement : NSAccessibilityElement
{
    unsigned long long _index;
    EMIMDFREmojiListMatrixView *_listView;
}

@property EMIMDFREmojiListMatrixView *listView; // @synthesize listView=_listView;
@property unsigned long long index; // @synthesize index=_index;
- (struct CGRect)accessibilityFrame;
- (id)initWithIndex:(unsigned long long)arg1 listView:(id)arg2;

@end

