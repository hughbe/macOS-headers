//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarPersistence/CALDetachmentDelegate-Protocol.h>

@interface CALPreconfiguredDetachDelegate : NSObject <CALDetachmentDelegate>
{
    int action;
}

+ (id)preconfiguredDetachWithAction:(int)arg1;
- (int)decideDetachmentFor:(id)arg1 withOccurrence:(id)arg2;
- (id)initWithAction:(int)arg1;

@end

