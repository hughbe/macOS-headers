//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CorePDF/CPDisposable-Protocol.h>

__attribute__((visibility("hidden")))
@interface CPMemoryOwner : NSObject <CPDisposable>
{
    void *memory;
}

- (void)dealloc;
- (void)finalize;
- (void)dispose;
- (id)initWithAllocatedMemory:(void *)arg1;

@end

