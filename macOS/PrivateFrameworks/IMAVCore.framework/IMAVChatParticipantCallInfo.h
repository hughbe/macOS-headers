//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSNumber, NSString;

@interface IMAVChatParticipantCallInfo : NSObject
{
    NSDictionary *_relayInitiate;
    NSDictionary *_relayUpdate;
    NSDictionary *_relayCancel;
    NSData *_remoteNATIP;
    NSData *_localNATIP;
    NSData *_remoteICEData;
    NSData *_localICEData;
    NSString *_peerCN;
    NSNumber *_localNATType;
    NSNumber *_remoteNATType;
    NSNumber *_peerProtocolVersion;
    unsigned int _callID;
    long long _state;
    BOOL _isBeingHandedOff;
    BOOL _isAudioPaused;
    BOOL _isVideoPaused;
    BOOL _isReinitiate;
    unsigned long long _localConnectionType;
    unsigned long long _remoteConnectionType;
    BOOL _inviteNeedsDelivery;
    NSData *_localSKEData;
    NSData *_remoteSKEData;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL inviteNeedsDelivery; // @synthesize inviteNeedsDelivery=_inviteNeedsDelivery;
@property(nonatomic) unsigned long long remoteConnectionType; // @synthesize remoteConnectionType=_remoteConnectionType;
@property(nonatomic) unsigned long long localConnectionType; // @synthesize localConnectionType=_localConnectionType;
@property(nonatomic) BOOL isReinitiate; // @synthesize isReinitiate=_isReinitiate;
@property(nonatomic) BOOL isVideoPaused; // @synthesize isVideoPaused=_isVideoPaused;
@property(readonly, nonatomic) BOOL isAudioPaused; // @synthesize isAudioPaused=_isAudioPaused;
@property(retain, nonatomic) NSData *remoteNATIP; // @synthesize remoteNATIP=_remoteNATIP;
@property(retain, nonatomic) NSData *localNATIP; // @synthesize localNATIP=_localNATIP;
@property(retain, nonatomic) NSNumber *remoteNATType; // @synthesize remoteNATType=_remoteNATType;
@property(retain, nonatomic) NSNumber *localNATType; // @synthesize localNATType=_localNATType;
@property(retain, nonatomic) NSNumber *peerProtocolVersion; // @synthesize peerProtocolVersion=_peerProtocolVersion;
@property(retain, nonatomic) NSString *peerCN; // @synthesize peerCN=_peerCN;
@property(retain, nonatomic) NSData *remoteSKEData; // @synthesize remoteSKEData=_remoteSKEData;
@property(retain, nonatomic) NSData *localSKEData; // @synthesize localSKEData=_localSKEData;
@property(retain, nonatomic) NSData *localICEData; // @synthesize localICEData=_localICEData;
@property(retain, nonatomic) NSData *remoteICEData; // @synthesize remoteICEData=_remoteICEData;
@property(nonatomic) BOOL isBeingHandedOff; // @synthesize isBeingHandedOff=_isBeingHandedOff;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) unsigned int callID; // @synthesize callID=_callID;
@property(retain, nonatomic) NSDictionary *relayCancel; // @synthesize relayCancel=_relayCancel;
@property(retain, nonatomic) NSDictionary *relayUpdate; // @synthesize relayUpdate=_relayUpdate;
@property(retain, nonatomic) NSDictionary *relayInitiate; // @synthesize relayInitiate=_relayInitiate;
- (id)description;
@property(readonly, nonatomic) BOOL isFinished;
- (void)dealloc;
- (id)init;

@end

