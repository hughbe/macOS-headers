//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NearField/NSSecureCoding-Protocol.h>

@interface NFFieldNotification : NSObject <NSSecureCoding>
{
    unsigned short _typeFSystemCode;
    unsigned int _rfTechnology;
    unsigned long long _notificationType;
}

+ (id)notificationWithDictionary:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property(readonly) unsigned short typeFSystemCode; // @synthesize typeFSystemCode=_typeFSystemCode;
@property(readonly) unsigned int rfTechnology; // @synthesize rfTechnology=_rfTechnology;
@property(readonly) unsigned long long notificationType; // @synthesize notificationType=_notificationType;
- (id)description;
- (void)setNotificationType:(unsigned long long)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

