//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/AVCRTCPPacket.h>

@interface AVCRTCPReceiverReport : AVCRTCPPacket
{
    unsigned int _reportedSourceSSRC;
    unsigned char _fractionLost;
    unsigned int _cumulativePacketsLost;
    unsigned int _extendedHighestSequenceNumber;
    unsigned int _interarrivalJitter;
    unsigned int _lastSRTimestamp;
    unsigned int _delaySinceLastSR;
}

@property(nonatomic) unsigned int delaySinceLastSR; // @synthesize delaySinceLastSR=_delaySinceLastSR;
@property(nonatomic) unsigned int lastSRTimestamp; // @synthesize lastSRTimestamp=_lastSRTimestamp;
@property(nonatomic) unsigned int interarrivalJitter; // @synthesize interarrivalJitter=_interarrivalJitter;
@property(nonatomic) unsigned int extendedHighestSequenceNumber; // @synthesize extendedHighestSequenceNumber=_extendedHighestSequenceNumber;
@property(nonatomic) unsigned int cumulativePacketsLost; // @synthesize cumulativePacketsLost=_cumulativePacketsLost;
@property(nonatomic) unsigned char fractionLost; // @synthesize fractionLost=_fractionLost;
@property(nonatomic) unsigned int reportedSourceSSRC; // @synthesize reportedSourceSSRC=_reportedSourceSSRC;
- (id)description;
- (id)initWithRTCPPacket:(struct tagRTCPPACKET *)arg1;

@end

