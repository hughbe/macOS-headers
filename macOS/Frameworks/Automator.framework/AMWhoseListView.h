//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSMutableSet, NSStackView;

@interface AMWhoseListView : NSView
{
    NSMutableSet *_expandedSubviews;
    NSStackView *_stackView;
    struct {
        unsigned int isDeallocating:1;
        unsigned int ignoreSubviewAdditionAndRemoval:1;
        unsigned int RESERVED:29;
    } _vlvFlags;
}

- (void).cxx_destruct;
@property(retain) NSMutableSet *_expandedSubviews; // @synthesize _expandedSubviews;
@property(retain) NSStackView *stackView; // @synthesize stackView=_stackView;
- (void)removeSubviewAtIndex:(unsigned long long)arg1;
- (void)addSubview:(id)arg1;
- (void)insertSubview:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_configureNewSubview:(id)arg1;
- (unsigned long long)indexOfSubview:(id)arg1;
- (unsigned long long)numberOfSubviews;
- (void)expandSubview:(id)arg1;
- (void)willRemoveSubview:(id)arg1;
- (void)dealloc;
- (void)_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

