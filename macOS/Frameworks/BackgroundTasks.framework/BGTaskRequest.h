//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BackgroundTasks/NSCopying-Protocol.h>

@class NSDate, NSString;

@interface BGTaskRequest : NSObject <NSCopying>
{
    NSString *_identifier;
    NSDate *_earliestBeginDate;
}

+ (id)_requestFromActivity:(id)arg1;
- (void).cxx_destruct;
@property(copy) NSDate *earliestBeginDate; // @synthesize earliestBeginDate=_earliestBeginDate;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithIdentifier:(id)arg1;

@end

