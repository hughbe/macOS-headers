//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface SRFProcessInfo : NSObject
{
    NSXPCConnection *_connectionToSiri;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSXPCConnection *connectionToSiri; // @synthesize connectionToSiri=_connectionToSiri;
- (void)endEducationActivtyWithReason:(id)arg1;
- (void)beginEducationActivityWithReason:(id)arg1;
- (void)endMainStagePresentationActivityWithReason:(id)arg1;
- (void)beginMainStagePresentationActivityWithReason:(id)arg1;

@end

