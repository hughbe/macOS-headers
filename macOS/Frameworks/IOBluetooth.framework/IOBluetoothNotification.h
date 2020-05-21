//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IOBluetoothNotification : NSObject
{
    CDUnknownFunctionPointerType mCallback;
    void *mUserRefCon;
    unsigned int mClass;
    unsigned int mSubClass;
}

+ (id)notificationWithClass:(unsigned int)arg1 subClass:(unsigned int)arg2 callback:(CDUnknownFunctionPointerType)arg3 userRefCon:(void *)arg4;
- (void)invokeCallbackWithData:(const void *)arg1 dataSize:(unsigned long long)arg2 class:(unsigned int)arg3 subClass:(unsigned int)arg4;
- (void)dealloc;
- (void)setClass:(unsigned int)arg1 subClass:(unsigned int)arg2 callback:(CDUnknownFunctionPointerType)arg3 userRefCon:(void *)arg4;

@end

