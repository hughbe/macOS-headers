//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AudioResourceArbitration/NSObject-Protocol.h>

@protocol dspd_VolumeNotificationDelegate <NSObject>
- (void)stereoPanControlChanged:(unsigned long long)arg1 element:(unsigned int)arg2;
- (void)muteControlChanged:(unsigned long long)arg1 element:(unsigned int)arg2;
- (void)levelControlChanged:(unsigned long long)arg1 element:(unsigned int)arg2;
@end

