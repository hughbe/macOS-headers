//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HDAInterface : NSObject
{
    unsigned int mService;
    unsigned int mConnect;
}

+ (int)getEntryCount:(const char *)arg1;
- (int)UserClientScalarIStructureO:(unsigned int)arg1 scalarICount:(unsigned int)arg2 structOSize:(unsigned long long *)arg3 structO:(void *)arg4 scalarVargs:(void *)arg5;
- (int)UserClientScalarIScalarO:(unsigned int)arg1 scalarICount:(unsigned int)arg2 scalarOCount:(unsigned int)arg3 scalarVargs:(void *)arg4;
- (void)dealloc;
- (id)init;

@end

