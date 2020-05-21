//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVRemoteCore/NSSecureCoding-Protocol.h>

@class NSDate, TVRCButton;

@interface TVRCButtonEvent : NSObject <NSSecureCoding>
{
    NSDate *_timestamp;
    TVRCButton *_button;
    long long _eventType;
}

+ (id)buttonEventForButton:(id)arg1 eventType:(long long)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long eventType; // @synthesize eventType=_eventType;
@property(readonly, nonatomic) TVRCButton *button; // @synthesize button=_button;
@property(readonly, copy, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;

@end

