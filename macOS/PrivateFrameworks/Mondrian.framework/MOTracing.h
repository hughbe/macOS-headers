//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Mondrian/MOLoggingStore.h>

@interface MOTracing : MOLoggingStore
{
    int _token;
}

+ (id)flattenObjects:(id)arg1;
+ (id)flattenIndexSet:(id)arg1;
+ (id)flattenIndexPaths:(id)arg1;
+ (void)logMessageWithFunction:(const char *)arg1 file:(const char *)arg2 line:(int)arg3 facility:(const char *)arg4 aslmesssage:(struct __asl_object_s *)arg5 format:(id)arg6;
+ (void)logMessageWithFunction:(const char *)arg1 file:(const char *)arg2 line:(int)arg3 facility:(const char *)arg4 aslmesssage:(struct __asl_object_s *)arg5 format:(id)arg6 arguments:(struct __va_list_tag [1])arg7;
+ (id)sharedTracing;
- (void)dealloc;
- (void)_updateUserDefaults;

@end

