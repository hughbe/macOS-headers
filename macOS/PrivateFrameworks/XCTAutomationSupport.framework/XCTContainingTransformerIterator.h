//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <XCTAutomationSupport/XCTMatchingElementIterator.h>

@class XCTElementContainingTransformer;

__attribute__((visibility("hidden")))
@interface XCTContainingTransformerIterator : XCTMatchingElementIterator
{
    BOOL _hasCheckedInput;
    XCTElementContainingTransformer *_containingTransformer;
}

- (void).cxx_destruct;
@property(readonly) XCTElementContainingTransformer *containingTransformer; // @synthesize containingTransformer=_containingTransformer;
- (id)nextMatch;
- (id)initWithInput:(id)arg1 containingTransformer:(id)arg2;

@end

