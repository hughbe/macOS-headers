//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreWLAN/SFPasswordSharingServiceDelegate-Protocol.h>

@class CWInterface, NSString, SFPasswordSharingService;

@interface CWPasswordSharingSimulator : NSObject <SFPasswordSharingServiceDelegate>
{
    SFPasswordSharingService *_service;
    CWInterface *_interface;
    NSString *_ssid;
}

@property(readonly) NSString *ssid; // @synthesize ssid=_ssid;
@property(readonly) CWInterface *interface; // @synthesize interface=_interface;
- (BOOL)service:(id)arg1 shouldPromptForNetwork:(id)arg2;
- (void)service:(id)arg1 receivedNetworkInfo:(id)arg2;
- (void)run;
- (id)initWithInterface:(id)arg1 ssid:(id)arg2;

@end

