//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface IMSPIRecentEvent : NSObject
{
    NSString *_handle;
    NSDate *_date;
    NSString *_labelID;
}

- (void).cxx_destruct;
@property(retain) NSString *labelID; // @synthesize labelID=_labelID;
@property(retain) NSDate *date; // @synthesize date=_date;
@property(retain) NSString *handle; // @synthesize handle=_handle;
- (id)description;
- (id)initWithLabelID:(id)arg1 date:(id)arg2;
- (id)initWithHandle:(id)arg1 date:(id)arg2;

@end

