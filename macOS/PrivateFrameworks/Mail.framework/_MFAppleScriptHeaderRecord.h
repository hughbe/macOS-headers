//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MCMessage, NSString;

@interface _MFAppleScriptHeaderRecord : NSObject
{
    NSString *_name;
    id _content;
    MCMessage *_message;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MCMessage *message; // @synthesize message=_message;
@property(retain, nonatomic) id content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)objectSpecifier;

@end

