//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ACDEClient/NSCoding-Protocol.h>
#import <ACDEClient/NSCopying-Protocol.h>
#import <ACDEClient/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol ACFGeneralMessageProtocol <NSCopying, NSObject, NSCoding>
- (id)copy;
- (void)setSenderPortName:(NSString *)arg1;
- (NSString *)senderPortName;
- (void)setSenderProcessName:(NSString *)arg1;
- (NSString *)senderProcessName;
- (void)setSenderProcessID:(int)arg1;
- (int)senderProcessID;
- (void)setInfo:(NSDictionary *)arg1;
- (NSDictionary *)info;
- (void)setIdentifier:(NSString *)arg1;
- (NSString *)identifier;
@end

