//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindow.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC7SwiftUI14_TestAppWindow : NSWindow
{
    MISSING_TYPE *enableFullKeyboardAccess;
    MISSING_TYPE *hitTestingForAccessibilityCount;
}

- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
@property(nonatomic, readonly) BOOL swiftUI_isHitTestingForAccessibility;
- (BOOL)_allowsAnyValidResponder;

@end

