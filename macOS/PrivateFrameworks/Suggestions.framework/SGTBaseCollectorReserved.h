//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, SGTSearchQueryCollectorDelegate;

__attribute__((visibility("hidden")))
@interface SGTBaseCollectorReserved : NSObject
{
    NSObject<OS_dispatch_queue> *dispatchQueue;
    id <SGTSearchQueryCollectorDelegate> delegate;
}

- (void).cxx_destruct;

@end

