//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IOAccelMemoryOpenCLInfo : NSObject
{
    int pid;
    NSString *cl_context;
    unsigned long long cl_mem;
    NSString *objectType;
    NSString *objectDescription;
    id _expansionData;
}

@property(retain) NSString *objectDescription; // @synthesize objectDescription;
@property(retain) NSString *objectType; // @synthesize objectType;
@property unsigned long long cl_mem; // @synthesize cl_mem;
@property(retain) NSString *cl_context; // @synthesize cl_context;
@property int pid; // @synthesize pid;
- (void)dealloc;
- (id)description;

@end

