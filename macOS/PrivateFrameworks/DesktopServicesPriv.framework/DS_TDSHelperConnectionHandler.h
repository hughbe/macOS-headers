//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface DS_TDSHelperConnectionHandler : NSObject
{
    struct TDSHelperContext *_helper;
    struct TDSMutex _mutex;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clearHelper;
- (void)handleHelperEvent:(id)arg1;
- (id)initWithHelper:(struct TDSHelperContext *)arg1;

@end

