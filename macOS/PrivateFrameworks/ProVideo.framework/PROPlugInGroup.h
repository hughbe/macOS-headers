//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PROPlugInGroup : NSObject
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)plugInsForProtocols:(id)arg1;
- (struct __CFUUID *)uuid;
- (id)plugIns;
- (id)displayName;
- (id)name;
- (void)removePlugIn:(id)arg1;
- (void)addPlugIn:(id)arg1;
- (id)initWithUUID:(struct __CFUUID *)arg1 name:(id)arg2 bundle:(id)arg3;

@end

