//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSValidatedUserInterfaceItem-Protocol.h>

__attribute__((visibility("hidden")))
@interface _NSMenuItemProxy : NSObject <NSValidatedUserInterfaceItem>
{
    long long _tag;
    SEL _action;
}

@property(readonly) long long tag;
@property(readonly) SEL action;
- (id)initWithAction:(SEL)arg1;

@end

