//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IOKNotificationPort : NSObject
{
    struct IONotificationPort *_port;
}

@property(readonly, nonatomic) struct IONotificationPort *port; // @synthesize port=_port;
- (void)dealloc;
@property(readonly, nonatomic) unsigned int machPort;
- (id)initOnDispatchQueue:(id)arg1;
- (id)initWithMasterPort:(unsigned int)arg1 onDispatchQueue:(id)arg2;
- (id)init;

@end

