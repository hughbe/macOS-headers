//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface SGContactDetailSummary : NSObject
{
    NSArray *_phones;
    NSString *_email;
    NSArray *_imAddresses;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *imAddresses; // @synthesize imAddresses=_imAddresses;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(copy, nonatomic) NSArray *phones; // @synthesize phones=_phones;

@end

