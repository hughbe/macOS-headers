//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSError, NSString, VSStoreURLBag;

@interface VSStoreURLBagLoadOperation : VSAsyncOperation
{
    VSStoreURLBag *_bag;
    NSString *_bagKey;
    id _value;
    NSError *_error;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *bagKey; // @synthesize bagKey=_bagKey;
@property(retain, nonatomic) VSStoreURLBag *bag; // @synthesize bag=_bag;
- (void)executionDidBegin;

@end

