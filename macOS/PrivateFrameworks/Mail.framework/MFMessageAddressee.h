//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol MFScriptingMessage;

@interface MFMessageAddressee : NSObject
{
    NSString *_displayName;
    NSString *_address;
    id <MFScriptingMessage> _message;
    NSString *_type;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) id <MFScriptingMessage> message; // @synthesize message=_message;
- (id)objectSpecifier;
@property(copy, nonatomic) NSString *address;
@property(copy, nonatomic) NSString *displayName;
@property(readonly, copy, nonatomic) NSString *formattedAddress;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (id)initWithDisplayName:(id)arg1 address:(id)arg2 type:(id)arg3 message:(id)arg4;

@end

