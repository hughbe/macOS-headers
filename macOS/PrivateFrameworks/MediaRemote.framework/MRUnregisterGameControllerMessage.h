//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@interface MRUnregisterGameControllerMessage : MRProtocolMessage
{
}

- (unsigned long long)type;
@property(readonly, nonatomic) unsigned long long controllerID;
- (id)initWithControllerID:(unsigned long long)arg1;

@end

