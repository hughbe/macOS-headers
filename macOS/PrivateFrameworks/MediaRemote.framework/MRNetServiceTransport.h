//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRExternalDeviceTransport.h>

@class NSNetService, _MRDeviceInfoMessageProtobuf;

__attribute__((visibility("hidden")))
@interface MRNetServiceTransport : MRExternalDeviceTransport
{
    _MRDeviceInfoMessageProtobuf *_deviceInfo;
    BOOL _requiresCustomPairing;
    NSNetService *_netService;
}

+ (id)createDeviceInfoFromTXTRecord:(id)arg1;
+ (id)createDeviceInfoFromNetService:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNetService *netService; // @synthesize netService=_netService;
@property(nonatomic) BOOL requiresCustomPairing;
- (void)reset;
- (BOOL)getInputStream:(id *)arg1 outputStream:(id *)arg2;
- (id)error;
- (void)setShouldUseSystemAuthenticationPrompt:(BOOL)arg1;
- (BOOL)shouldUseSystemAuthenticationPrompt;
- (long long)connectionType;
- (long long)port;
- (id)hostname;
- (id)name;
- (id)deviceInfo;
- (void)updateDeviceInfoWithTXTRecord:(id)arg1;
- (id)description;
- (id)initWithNetService:(id)arg1;

@end

