//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface MRExternalDeviceMessageMetrics : NSObject
{
    NSString *_path;
    NSMutableDictionary *_entries;
}

- (void).cxx_destruct;
- (void)write;
- (void)addMessage:(id)arg1 data:(id)arg2;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end

