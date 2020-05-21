//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface SocksHandshake : NSObject
{
    BOOL _finished;
    unsigned short _port;
    NSString *_host;
    NSDictionary *_credentials;
}

+ (id)socksHadshakeWithVersion:(int)arg1;
- (void).cxx_destruct;
@property(retain) NSDictionary *credentials; // @synthesize credentials=_credentials;
@property unsigned short port; // @synthesize port=_port;
@property(retain) NSString *host; // @synthesize host=_host;
@property BOOL finished; // @synthesize finished=_finished;
- (id)finish:(int)arg1;
- (BOOL)parse:(const char *)arg1 len:(long long)arg2 completion:(CDUnknownBlockType)arg3;

@end

