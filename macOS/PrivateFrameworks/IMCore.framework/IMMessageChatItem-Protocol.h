//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMCore/NSObject-Protocol.h>

@class IMHandle, NSDate;

@protocol IMMessageChatItem <NSObject>
@property(readonly, nonatomic) IMHandle *sender;
@property(readonly, nonatomic) NSDate *time;
@property(readonly, nonatomic) BOOL failed;
@property(readonly, nonatomic) BOOL isFromMe;
@end

