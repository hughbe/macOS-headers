//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContactFetchRequest, CNContactStore;

__attribute__((visibility("hidden")))
@interface CNContactFetchExecutor : NSObject
{
    CNContactFetchRequest *_request;
    CNContactStore *_store;
}

+ (id)os_log;
- (void).cxx_destruct;
@property(readonly, nonatomic) CNContactStore *store; // @synthesize store=_store;
@property(readonly, copy, nonatomic) CNContactFetchRequest *request; // @synthesize request=_request;
- (id)run:(id *)arg1;
- (id)description;
- (id)initWithRequest:(id)arg1 store:(id)arg2;

@end

