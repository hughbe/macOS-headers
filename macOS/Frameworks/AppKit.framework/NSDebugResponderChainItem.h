//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NSDebugResponderChainItem : NSObject
{
    void *_address;
    NSString *_className;
    NSString *_responderDescription;
}

@property(copy) NSString *responderDescription; // @synthesize responderDescription=_responderDescription;
@property(copy) NSString *className; // @synthesize className=_className;
@property void *address; // @synthesize address=_address;
- (void)dealloc;
@property(readonly) NSString *prettyDescription;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end

