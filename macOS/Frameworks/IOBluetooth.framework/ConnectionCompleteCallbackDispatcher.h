//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ConnectionCompleteCallbackDispatcher : NSObject
{
    CDUnknownFunctionPointerType mCallback;
    void *mRefCon;
}

+ (id)withCallback:(CDUnknownFunctionPointerType)arg1 refCon:(void *)arg2;
- (void)connectionComplete:(id)arg1 status:(int)arg2;
- (id)initWithCallback:(CDUnknownFunctionPointerType)arg1 refCon:(void *)arg2;

@end

