//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface ACCHWComponentAuth : NSObject
{
    NSXPCConnection *_xpcConnection;
}

+ (id)sharedManager;
- (void).cxx_destruct;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (id)_init;
- (id)init;

@end

