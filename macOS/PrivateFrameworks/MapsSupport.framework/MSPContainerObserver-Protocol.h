//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSupport/NSObject-Protocol.h>

@class MSPContainer, NSArray, NSObject;
@protocol NSObject><NSCopying, OS_dispatch_queue;

@protocol MSPContainerObserver <NSObject>
- (void)container:(MSPContainer *)arg1 didEditWithNewContents:(NSArray *)arg2 orderedEdits:(NSArray *)arg3 cause:(long long)arg4 context:(id <NSObject><NSCopying>)arg5;

@optional
- (void)containerDidLoadFromPersister:(MSPContainer *)arg1;
- (void)containerDidEraseContents:(MSPContainer *)arg1 fromStorageTypes:(unsigned long long)arg2;
- (void)containerWillEraseContents:(MSPContainer *)arg1 fromStorageTypes:(unsigned long long)arg2;
- (void)containerWillEraseContents:(MSPContainer *)arg1;
- (NSObject<OS_dispatch_queue> *)observationQueueForContainer:(MSPContainer *)arg1;
@end

