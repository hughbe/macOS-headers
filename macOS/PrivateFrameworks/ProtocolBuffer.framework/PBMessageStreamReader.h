//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSInputStream;

@interface PBMessageStreamReader : NSObject
{
    NSInputStream *_stream;
    Class _classOfNextMessage;
    unsigned long long _position;
}

@property(readonly, nonatomic) unsigned long long position; // @synthesize position=_position;
@property(nonatomic) Class classOfNextMessage; // @synthesize classOfNextMessage=_classOfNextMessage;
- (id)nextMessage;
- (void)dealloc;
- (id)initWithStream:(id)arg1;

@end

