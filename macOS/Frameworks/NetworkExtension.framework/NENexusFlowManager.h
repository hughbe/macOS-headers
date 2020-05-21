//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_nw_channel;

@interface NENexusFlowManager : NSObject
{
    NSObject<OS_nw_channel> *_kernelChannel;
    struct nw_protocol *_protocol;
    struct nw_protocol *_defaultInputProtocol;
    NSMutableDictionary *_userChannels;
}

- (void).cxx_destruct;
@property(retain) NSMutableDictionary *userChannels; // @synthesize userChannels=_userChannels;
@property struct nw_protocol *defaultInputProtocol; // @synthesize defaultInputProtocol=_defaultInputProtocol;
@property struct nw_protocol *protocol; // @synthesize protocol=_protocol;
@property(retain) NSObject<OS_nw_channel> *kernelChannel; // @synthesize kernelChannel=_kernelChannel;
- (void)dealloc;

@end

