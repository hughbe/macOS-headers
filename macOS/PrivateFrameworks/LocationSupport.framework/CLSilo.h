//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <LocationSupport/NSCopying-Protocol.h>

@class NSString;

@interface CLSilo : NSObject <NSCopying>
{
    NSString *_identifier;
}

+ (id)globalConfiguration;
+ (void)setGlobalConfiguration:(id)arg1;
+ (id)main;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)afterInterval:(double)arg1 async:(CDUnknownBlockType)arg2;
- (void)sync:(CDUnknownBlockType)arg1;
- (void)async:(CDUnknownBlockType)arg1;
- (id)newTimer;
- (double)currentLatchedAbsoluteTimestamp;
- (void)resume;
- (void)suspend;
- (void)assertOutside;
- (void)assertInside;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1;

@end

