//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSScrollView, NSTextView;

@interface CSKTextViewController : NSViewController
{
    NSTextView *_textView;
    NSScrollView *_scrollView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) NSTextView *textView; // @synthesize textView=_textView;
- (void)setText:(id)arg1;
- (id)init;

@end

